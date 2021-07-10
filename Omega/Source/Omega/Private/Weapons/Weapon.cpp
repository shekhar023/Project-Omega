// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/Weapon.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("WeaponSM"));
    SetRootComponent(WeaponMesh);
    
    MuzzleSocketName = TEXT("Muzzle");
    WeaponAttachPoint = TEXT("WeaponGripPoint");
    PrimaryWeaponAttachPoint = TEXT("PrimaryWeaponAttachPoint");
    SecondaryWeaponAttachPoint = TEXT("SecondaryWeaponAttachPoint");
    SideWeaponAttachPoint = TEXT("SideWeaponWeaponAttachPoint");
    
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

    if(!WeaponVFXDataTableSystem.IsNull())
    {
        WeaponVFXDataTable = WeaponVFXDataTableSystem.LoadSynchronous();  
        CurrentWeaponVFX.SetDataTable(WeaponVFXDataTable);
    }

     if(!WeaponAttributesDataTableSystem.IsNull())
    {
        WeaponAttributesDataTable = WeaponAttributesDataTableSystem.LoadSynchronous();
        CurrentWeaponAttributes.SetDataTable(WeaponAttributesDataTable);
    }

    if(!PlayAnimationsDataTableSystem.IsNull())
    {
        PlayAnimationsDataTable = PlayAnimationsDataTableSystem.LoadSynchronous();  
        PlayerAnimations.SetDataTable(PlayAnimationsDataTable);
    }

}

//MARK: Return Functions
FName AWeapon::GetStorageSlotName(EInventorySlot Slot) const
{
    /* Return the socket name for the specified storage slot */
    switch (Slot)
    {
        case EInventorySlot::Hands:
            return WeaponAttachPoint;
        case EInventorySlot::Primary:
            return PrimaryWeaponAttachPoint;
        case EInventorySlot::Secondary:
            return SecondaryWeaponAttachPoint;
        case EInventorySlot::Side:
            return SideWeaponAttachPoint;
        default:
            // Not implemented.
            return "";
    }
}


// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

