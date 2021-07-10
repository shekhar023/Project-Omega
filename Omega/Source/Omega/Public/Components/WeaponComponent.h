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
    
   
    
    float PlayPlayerAnimations(UAnimMontage* PlayerAnimMontage);

    bool bIsWeaponEquipped;
    
    FTimerHandle WeaponEquip_TimerHandle;
    
    FTimerHandle WeaponDequip_TimerHandle;
 
    
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
    
    int32 WeaponIndex = 0;
    
    /*Holds a reference to the currently bIsWeaponEquipped weapon*/
    UPROPERTY(BlueprintReadOnly)
    AWeapon* CurrentWeapon;
    
    /*Holds a reference to the currently bIsWeaponEquipped weapon*/
    UPROPERTY(BlueprintReadOnly)
    AWeapon* PreviousWeapon;
    
    /*Holds a reference to the PrimaryGun*/
    UPROPERTY(BlueprintReadOnly)
    AWeapon* PrimaryGun;
    
    /*Holds a reference to the SecondaryGun*/
    UPROPERTY(BlueprintReadOnly)
    AWeapon* SecondaryGun;
    
    /*Holds a reference to the SideGun*/
    UPROPERTY(BlueprintReadOnly)
    AWeapon* SideGun;

    /*Weapons array. It's used to hold a reference to all available weapons*/
    UPROPERTY()
    TArray<AWeapon*> WeaponsArray;
    
    UPROPERTY(EditDefaultsOnly, Category = "Weapons")
    TArray<TSubclassOf<AWeapon>> AvailableWeaponBlueprintReferences;
    
    UFUNCTION()
    AWeapon* GetWeaponBasedOnType(EWeaponType WeaponType);
    
private:
    
    void SpawnInventory();
    
    void EquipNextWeapon();
    
    void EquipPreviousWeapon();
    
    void EquipPrimaryWeapon();
    
    void EquipSecondaryWeapon();
    
    void EquipSideWeapon();
    
    void Equip(bool bIsEquipped, FString AnimationKeyName);
    
    void DeEquip();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    
    
    /* Update the weapon mesh to the newly equipped weapon, this is triggered during an anim montage.
        NOTE: Requires an AnimNotify created in the Equip animation to tell us when to swap the meshes. */
    UFUNCTION(BlueprintCallable, Category = "Animation")
    void SwapToNewWeaponMesh();

		
};
