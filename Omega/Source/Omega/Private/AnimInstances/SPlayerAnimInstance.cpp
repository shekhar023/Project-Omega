// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/SPlayerAnimInstance.h"
#include "Characters/SCharacter.h"

void USPlayerAnimInstance::UpdateAnimationProperties()
{
    // Try to get the Pawn being animated and return if a nullptr.
    APawn* Pawn = TryGetPawnOwner();
    if (Pawn == nullptr) return;

    // Try to cast the Pawn to our ZombieCharacter since that's the only
    // thing we want to animate.
    Character = Cast<ASCharacter>(Pawn);
    if (Character == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("Character is not found in PlayerAnimIntance"));
        return;
    }
}

void USPlayerAnimInstance::SetWeaponEquipped(bool WeaponEquipped)
{
    bEquipWeapon = WeaponEquipped;
}

