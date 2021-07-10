// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SHitResultComponent.h"

#include "Weapons/Weapon.h"
#include "Characters/SCharacter.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

#include "Omega/Omega.h"

#define OUT

static int32 DebugWeaponDrawing = 1;
FAutoConsoleVariableRef CVARDebugWeaponDrawing(TEXT("DebugWeapons"), DebugWeaponDrawing, TEXT("Draw Debug Lines for Weapons"),ECVF_Cheat);

// Sets default values for this component's properties
USHitResultComponent::USHitResultComponent()
{
 
}


// Called when the game starts
void USHitResultComponent::BeginPlay()
{
    Super::BeginPlay();

    // ...
    Weapon = Cast<AWeapon>(GetOwner());
    PlayerCharacter = Cast<ASCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
    
}

#pragma region HitScanTrace

FVector USHitResultComponent::GetCameraPosition()
{
     

    FVector CameraPosition;
    if(ensure(PlayerCharacter))
    {
        CameraPosition = PlayerCharacter->GetFollowCamera()->GetComponentLocation();
    }

    return CameraPosition;
}

FVector USHitResultComponent::GetCameraDirection()
{

    FVector CameraDirection;
    if(ensure(PlayerCharacter))
    {
        CameraDirection = PlayerCharacter->GetFollowCamera()->GetForwardVector();

        // Bullet Spread
        float HalfRad = FMath::DegreesToRadians(Weapon->CurrentWeaponAttributes.BulletSpread);
       CameraDirection = FMath::VRandCone(CameraDirection, HalfRad, HalfRad);
    }

    return CameraDirection;
}

FVector USHitResultComponent::GetEndTracePoint()
{
    FVector EndTracePoint  = GetCameraPosition() + (GetCameraDirection() * Weapon->CurrentWeaponAttributes.Range);

    return EndTracePoint;
}

FHitResult USHitResultComponent::GetHitResult()
{
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(GetOwner());
    QueryParams.AddIgnoredActor(PlayerCharacter);
    QueryParams.bTraceComplex = true;
    QueryParams.bReturnPhysicalMaterial = true;

    FHitResult Hit;
    auto UWorld = GetWorld();
    if(UWorld)
    {
        UWorld->LineTraceSingleByChannel(OUT Hit, GetCameraPosition(), GetEndTracePoint(), WeaponCollision_TraceChannel, QueryParams);
    }
    
        
    if (DebugWeaponDrawing > 0)
    {
        DrawDebugLine(GetWorld(), GetCameraPosition(), GetEndTracePoint(), FColor::Red, false, 1.0f, 0, 1.0f);
    }

    return Hit;
}

