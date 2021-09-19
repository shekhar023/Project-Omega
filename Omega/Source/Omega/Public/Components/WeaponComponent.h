// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Weapons/Weapon.h"
#include "WeaponComponent.generated.h"

class AWeapon;
class ASCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OMEGA_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponComponent();
    
private:

    void WeaponEquipToggle();
    
    void WeaponStartAttack();

    void WeaponStopAttack();

    void Aim();

    void StopAim();

    void Reload();

    float Default_FOV;

    UPROPERTY()
	class UTimelineComponent* AimTimeline;

    UPROPERTY()
    class UCurveFloat* AimCurve;

protected:
    UPROPERTY(VisibleDefaultsOnly, Category = "Animations Keys List");
    FString WeaponEquipKeyName;

    UPROPERTY(VisibleDefaultsOnly, Category = "Animations Keys List");
    FString WeaponDeEquipKeyName;

    UPROPERTY(VisibleDefaultsOnly, Category = "Animations Keys List");
    FString WeaponAttackKeyName;

    UPROPERTY(VisibleDefaultsOnly, Category = "Animations Keys List");
    FString WeaponAimKeyName;
        
private:

    UPROPERTY()
    ASCharacter* Character = nullptr;
    
    UPROPERTY()
    class USPlayerAnimInstance* AnimInstance = nullptr;

     // Component that handles input for this actor, if input is enabled.
     UPROPERTY()
    class UInputComponent* InputComponent;  //already defined in scope AActor

    void SetupPlayerInputComponent();   
     
    FTimerHandle WeaponEquip_TimerHandle;
    
    FTimerHandle WeaponDequip_TimerHandle;

    FTimerHandle SwitchAnimLayer_TimerHandle;

    float DefaultCharacterSpeed;

    bool bIsAiming;

    bool bIsReloading;
 
    
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
    
    //TO track the weapon weapon equipped
    int32 WeaponIndex = 0;

     //Start Game with Weapon Equipped or Not. True for with and false without.
     //and to track weather the weapon is equipped or not
    UPROPERTY(EditDefaultsOnly, Category="Weapons")
    bool bIsWeaponEquipped;
    
    /*Holds a reference to the currently bIsWeaponEquipped weapon*/
    UPROPERTY(BlueprintReadOnly)
    AWeapon* CurrentWeapon;
    
    /*Weapons array. It's used to hold a reference to all available weapons*/
    UPROPERTY()
    TArray<AWeapon*> WeaponsArray;
    
    //Set limit of weapon inventory to 3.
    UPROPERTY(EditDefaultsOnly, Category = "Weapons")
    TArray<TSubclassOf<AWeapon>> AvailableWeaponBlueprintReferences;
    
    UFUNCTION()
    AWeapon* GetWeaponBasedOnType(EWeaponType WeaponType);

    
private:
    
    void SpawnInventory();
    
    void EquipNextWeapon();
    
    void EquipPreviousWeapon();

    void EquipAndPlayAnimation_Character(FString AnimationKeyName);
    
    void DeEquip();   

    UFUNCTION()
    void SetCameraFOV();

public:	
    
    /* Update the weapon mesh to the newly equipped weapon, this is triggered during an anim montage.
        NOTE: Requires an AnimNotify created in the Equip animation to tell us when to swap the meshes. */
    UFUNCTION(BlueprintCallable, Category = "Animation")
    void SwapToNewWeaponMesh();

      /* Update the weapon mesh to the newly equipped weapon, this is triggered during an anim montage.
        NOTE: Requires an AnimNotify created in the Equip animation to tell us when to swap the meshes. */
    UFUNCTION(BlueprintCallable, Category = "Animation")
    void SwitchAnimLayer();

    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
};
