// Fill out your copyright notice in the Description page of Project Settings.
#include "Components/WeaponComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Weapons/Weapon.h"
#include "TimerManager.h"

#include "Components/InputComponent.h"
#include "Components/TimelineComponent.h"
#include "Characters/SCharacter.h"
#include "Weapons/Weapon.h"

#include "AnimInstances/SPlayerAnimInstance.h"

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
    bIsWeaponEquipped = false;

    WeaponEquipKeyName = FString("WeaponEquipAnimation");
    WeaponDeEquipKeyName = FString("WeaponDeEquipAnimation");
    WeaponAttackKeyName = FString("WeaponAttackAnimation");
    WeaponAimKeyName = FString("WeaponAimAnimation");
	// ...
}
//------------------------------------------------------------------------------------------------------------
//Returns a reference of the desired weapon
//------------------------------------------------------------------------------------------------------------
AWeapon* UWeaponComponent::GetWeaponBasedOnType(EWeaponType WeaponType)
{
    for ( auto iterator = WeaponsArray.CreateConstIterator(); iterator; iterator++)
    {
        if( (*iterator)&& (*iterator)->GetWeaponType() == WeaponType)
        {
            //valid reference
            return *iterator;
        }
    }
    //didn't find a valid reference
    return nullptr;
}

// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
    
    SetupPlayerInputComponent();
   
    Character = Cast<ASCharacter>(GetOwner());
    
    if(Character)
    {
        AnimInstance = Cast<USPlayerAnimInstance>(Character->GetMesh()->GetAnimInstance());
        SpawnInventory();
    }
}

void UWeaponComponent::SpawnInventory()
{
    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = Character;

    UWorld* World = GetWorld();
    
    //Spawn all Weapons
    for(auto Iterator = AvailableWeaponBlueprintReferences.CreateIterator(); Iterator; Iterator++)
    {
        AWeapon* WeaponRef = World->SpawnActor<AWeapon>(Iterator->GetDefaultObject()->GetClass(), Character->GetTransform(), SpawnParams);
        WeaponsArray.Add(WeaponRef);
        WeaponRef->AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, WeaponRef->GetStorageSlotName(WeaponRef->GetStorageSlot()));
    }
    
    if(WeaponsArray.Num() > 0)
    {
        CurrentWeapon = WeaponsArray[WeaponIndex];
    }

    if(WeaponsArray.Num() > 3)
    {
        PrimaryGun = WeaponsArray[WeaponIndex];
        SecondaryGun = WeaponsArray[WeaponIndex + 1];
        SideGun = WeaponsArray[WeaponIndex + 2]; 
    }
}

void UWeaponComponent::SetupPlayerInputComponent()
{
    InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
    if(InputComponent)
    {
        
        InputComponent->BindAction("Fire", IE_Pressed, this, &UWeaponComponent::WeaponStartAttack);
        InputComponent->BindAction("Fire", IE_Released, this, &UWeaponComponent::WeaponStopAttack);
        InputComponent->BindAction("Aim", IE_Pressed, this, &UWeaponComponent::Aim);
        InputComponent->BindAction("Aim", IE_Released, this, &UWeaponComponent::StopAim);

        InputComponent->BindAction("Equip/Dequip", IE_Pressed, this, &UWeaponComponent::WeaponEquipToggle);
    
        InputComponent->BindAction("Reload", IE_Pressed, this, &UWeaponComponent::Reload);
        
        
        InputComponent->BindAction("NextWeapon", IE_Pressed, this, &UWeaponComponent::EquipNextWeapon);
        InputComponent->BindAction("PreviousWeapon", IE_Pressed, this, &UWeaponComponent::EquipPreviousWeapon);
        
        InputComponent->BindAction("EquipPrimaryWeapon", IE_Pressed, this, &UWeaponComponent::EquipPrimaryWeapon);
        InputComponent->BindAction("EquipSecondaryWeapon", IE_Pressed, this, &UWeaponComponent::EquipSecondaryWeapon);
        InputComponent->BindAction("EquipSideWeapon", IE_Pressed, this, &UWeaponComponent::EquipSideWeapon);
    }
}

void UWeaponComponent::WeaponEquipToggle()
{   
    if(CurrentWeapon == nullptr && AnimInstance == nullptr) return;
    
    bIsWeaponEquipped = !bIsWeaponEquipped;
    
    if(bIsWeaponEquipped && AnimInstance)
    {
        Equip(bIsWeaponEquipped, WeaponEquipKeyName);
      
    }
    else
    {
        Equip(false, WeaponDeEquipKeyName);
    }
    
}

void UWeaponComponent::SwapToNewWeaponMesh()
{
    if(bIsWeaponEquipped)
    {
        CurrentWeapon->AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, CurrentWeapon->GetStorageSlotName(EInventorySlot::Hands));
    }

    if (!bIsWeaponEquipped)
    {
        DeEquip();
    }
}

void UWeaponComponent::EquipNextWeapon()
{
    if(!bIsWeaponEquipped) return;
    
    ++WeaponIndex;
    if(WeaponsArray.IsValidIndex(WeaponIndex))
    {
        DeEquip();
        CurrentWeapon = WeaponsArray[WeaponIndex];
        Equip(true, WeaponEquipKeyName);
    }
    else
    {
        WeaponIndex = 0;
        DeEquip();
        CurrentWeapon = WeaponsArray[WeaponIndex];
        Equip(true, WeaponEquipKeyName);
    }
    
}

void UWeaponComponent::EquipPreviousWeapon()
{
    if(!bIsWeaponEquipped) return;
    
    --WeaponIndex;
    if(WeaponsArray.IsValidIndex(WeaponIndex)  && WeaponIndex >= 0)
    {
        DeEquip();
        CurrentWeapon = WeaponsArray[WeaponIndex];
        Equip(true, WeaponEquipKeyName);
    }
    else if(WeaponIndex < 0)
    {
        WeaponIndex = WeaponsArray.Num() - 1;
        DeEquip();
        CurrentWeapon = WeaponsArray[WeaponIndex];
        Equip(true, WeaponEquipKeyName);
    }
}

void UWeaponComponent::EquipPrimaryWeapon()
{
    if(CurrentWeapon == PrimaryGun  &&  bIsWeaponEquipped == false) return;
    
    DeEquip();
    WeaponIndex = WeaponsArray.IndexOfByKey(PrimaryGun);
    CurrentWeapon = PrimaryGun;
    Equip(true, WeaponEquipKeyName);
}

void UWeaponComponent::EquipSecondaryWeapon()
{
    if(CurrentWeapon == SecondaryGun && bIsWeaponEquipped == false) return;
    
    DeEquip();
    WeaponIndex = WeaponsArray.IndexOfByKey(SecondaryGun);
    CurrentWeapon = SecondaryGun;
    Equip(true, WeaponEquipKeyName);
}

void UWeaponComponent::EquipSideWeapon()
{
    if(CurrentWeapon == SideGun&& bIsWeaponEquipped == false) return;
    
    DeEquip();
    WeaponIndex = WeaponsArray.IndexOfByKey(SideGun);
    CurrentWeapon = SideGun;
    Equip(true, WeaponEquipKeyName);
}

void UWeaponComponent::Equip(bool bIsEquipped, FString AnimationKeyName)
{
    UAnimMontage* Animation = CurrentWeapon->PlayerAnimations.AnimationRef.FindRef(AnimationKeyName);
    if(Animation)
    { 
        float AnimDuration = PlayPlayerAnimations(Animation);
        if(AnimDuration > 0.0f)
        {
            AnimInstance->SetWeaponEquipped(bIsEquipped);
        }
        else
        {
            AnimInstance->SetWeaponEquipped(bIsEquipped);
        }
    }   
}

void UWeaponComponent::DeEquip()
{
    CurrentWeapon->AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, CurrentWeapon->GetStorageSlotName(CurrentWeapon->GetStorageSlot()));
}

void UWeaponComponent::WeaponStartAttack()
{
    
}

void UWeaponComponent::WeaponStopAttack()
{
    
}


void UWeaponComponent::Aim()
{
    
}

void UWeaponComponent::StopAim()
{
    
}

void UWeaponComponent::Reload()
{
    
}

float UWeaponComponent::PlayPlayerAnimations(UAnimMontage* PlayerAnimMontage)
{
    if(!PlayerAnimMontage) return 0.0f;
    
    float MontageLength = 0.0f;
    if(AnimInstance)
    {
        MontageLength = AnimInstance->Montage_Play(PlayerAnimMontage);
    }
    return MontageLength;
}

// Called every frame
void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}
