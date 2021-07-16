// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SHealthComponent.h"
#include "Components/WeaponComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Controllers/SController.h"

#include "Components/SInterfaceComponent.h"
#include "AnimInstances/SPlayerAnimInstance.h"

ASCharacter::ASCharacter()
{
    AIControllerClass = ASController::StaticClass();
    HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));
    InterfaceComp = CreateDefaultSubobject<USInterfaceComponent>(TEXT("InferfaceComp"));
    WeaponComp = CreateDefaultSubobject<UWeaponComponent>(TEXT("WeaponComp"));
  
}

void ASCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    if(HealthComp)
    {
        HealthComp->OnDead.AddDynamic(this, &ASCharacter::OnPlayerDead);
        HealthComp->OnHit.AddDynamic(this, &ASCharacter::PlayHit);
    }

    AnimInstance = Cast<USPlayerAnimInstance>(GetMesh()->GetAnimInstance());

}

void ASCharacter::OnPlayerDead()
{
    DetachFromControllerPendingDestroy();
    
    UCapsuleComponent* CapsuleComp = GetCapsuleComponent();
    CapsuleComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    CapsuleComp->SetCollisionResponseToAllChannels(ECR_Ignore);

    USkeletalMeshComponent* Mesh = GetMesh();
    if (Mesh)
    {
        Mesh->SetCollisionProfileName(TEXT("Ragdoll"));
    }
    SetActorEnableCollision(true);

    SetRagdollPhysics();
    
    ApplyPhysicsOnRagdoll();

}

void ASCharacter::SetRagdollPhysics()
{
    bool bInRagdoll = false;
    USkeletalMeshComponent* Mesh = GetMesh();

    if (IsPendingKill())
    {
        bInRagdoll = false;
    }
    else if (!Mesh || !Mesh->GetPhysicsAsset())
    {
        bInRagdoll = false;
    }
    else
    {
        Mesh->SetAllBodiesSimulatePhysics(true);
        Mesh->SetSimulatePhysics(true);
        Mesh->WakeAllRigidBodies();
        Mesh->bBlendPhysics = true;

        bInRagdoll = true;
    }

    UCharacterMovementComponent* CharacterComp = Cast<UCharacterMovementComponent>(GetMovementComponent());
    if (CharacterComp)
    {
        CharacterComp->StopMovementImmediately();
        CharacterComp->DisableMovement();
        CharacterComp->SetComponentTickEnabled(false);
    }

    if (!bInRagdoll)
    {
        // Immediately hide the pawn
        TurnOff();
        SetActorHiddenInGame(true);
        SetLifeSpan(1.0f);
    }
    else
    {
        SetLifeSpan(10.0f);
    }
}

void ASCharacter::ApplyPhysicsOnRagdoll()
{
   //TODO: Apply physics on ragdoll
}

void ASCharacter::PlayHit(bool bIsDead)
{
    if(bIsDead)
    {
        UGameplayStatics::SpawnSoundAttached(DeathSound, RootComponent, NAME_None, FVector::ZeroVector, EAttachLocation::SnapToTarget, true);
    }
    else if(!bIsDead)
    {
        UGameplayStatics::SpawnSoundAttached(HitSound, RootComponent, NAME_None, FVector::ZeroVector, EAttachLocation::SnapToTarget, true);
    }
}

float ASCharacter::PlayAnimations(UAnimMontage* Animation)
{
    if(!Animation) return 0.0f;
    
    float MontageLength = 0.0f;
    if(AnimInstance)
    {
        MontageLength = AnimInstance->Montage_Play(Animation);
    }
    return MontageLength;
}

void ASCharacter::SwitchAnimLayer(UClass* AnimClass, bool LinkLayer)
{
    if(!AnimClass) return;

    AnimInstance->SwitchAnimLayer(AnimClass, LinkLayer);

}
void ASCharacter::PrintToScreen(FString Message, FColor Color)
{
    if(ensure(GEngine))
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.5f, Color, Message);
    }
}
