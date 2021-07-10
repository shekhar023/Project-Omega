// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SPlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class OMEGA_API USPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
    
public:
    
    class ASCharacter* Character;
    // Used by the animation blueprint to update the animation properties above
    // and decide what animations to play.
    UFUNCTION(BlueprintCallable, Category = "UpdateAnimationProperties")
    void UpdateAnimationProperties();
    
    // Indicates whether the ZombieCharacter is idle or not.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SAnimInstance)
    bool bEquipWeapon;
    
    UFUNCTION()
    void SetWeaponEquipped(bool WeaponEquipped);
    
    
};
