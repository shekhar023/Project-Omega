// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Omega/OmegaCharacter.h"
#include "SCharacter.generated.h"

/**
 * 
 */
UCLASS()
class OMEGA_API ASCharacter : public AOmegaCharacter
{
	GENERATED_BODY()
    
    ASCharacter();

    void SetRagdollPhysics();
    
    void ApplyPhysicsOnRagdoll();
    
protected:
    
    virtual void BeginPlay() override;

    /* function for functionality after player died in game */
    UFUNCTION()
    void OnPlayerDead();
    
    /* function for playing SFX on recieve damage*/
    UFUNCTION()
    void PlayHit(bool bIsDead);
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = SFX)
    class USoundBase* HitSound;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = SFX)
    class USoundBase* DeathSound;

public:
    /** Health Component for Health Managment */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    class USHealthComponent* HealthComp;
    
    /*Reference of USInterface */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
    class USInterfaceComponent* InterfaceComp;
    
    /*Reference of UWeaponComponent*/
   UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
   class UWeaponComponent* WeaponComp;

    UPROPERTY()
    class USPlayerAnimInstance* AnimInstance;

    bool bIsAiming = false;
   

public:
    float PlayAnimations(class UAnimMontage* Animation);

    void SwitchAnimLayer(UClass* AnimClass, bool LinkLayer);

    void ChangeToCameraDirectionAndFOV();

    void  SetCharacterSpeed(float NewSpeed);

    void SetAimStatus(bool IsAiming);

    void PrintToScreen(FString Message, FColor Color);

};
