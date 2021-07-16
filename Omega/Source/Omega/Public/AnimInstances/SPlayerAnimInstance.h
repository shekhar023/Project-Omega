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

private:

    UPROPERTY()
    APawn* Pawn;

    //Flag to link or unlink the anim layers.
    int32 bSwitchAnimLayer = 0;
    
public:
    
    UPROPERTY(BlueprintReadOnly, Category = SAnimInstance)
    class ASCharacter* Character;
    // Used by the animation blueprint to update the animation properties above
    // and decide what animations to play.
    UFUNCTION(BlueprintCallable, Category = "UpdateAnimationProperties")
    void UpdateAnimationProperties();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SAnimInstance)
    bool IsInAir;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SAnimInstance)
    float Speed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SAnimInstance)
    float Direction;
    
    UFUNCTION()
    void SpeedAndDirectionCalculation();

    UFUNCTION()
    void SwitchAnimLayer(UClass* AnimClass, bool SwitchToDefaultClass);
    
    
};
