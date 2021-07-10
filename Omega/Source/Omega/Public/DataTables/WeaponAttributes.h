// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponAttributes.generated.h"


USTRUCT(BlueprintType, Blueprintable)
struct FWeaponAttributes : public FTableRowBase
{
    GENERATED_USTRUCT_BODY();

    public:

    FWeaponAttributes();

    /*Data table associated with the specific instance of the weapon*/
    class UDataTable* DataTable;
    
    /*The current level of the weapon*/
    int32 CurrentLevel;

    /*Associates the data table with the current instance*/
    void SetDataTable(class UDataTable* WeaponDataTable);

    void UpdateStats(int32 DataTableRow);
    
    
    /**
     * @Param WeaponIcon - Set Weapon Icon For UI
     **/
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = WeaponAttributes)
    FSlateBrush WeaponIcon;

    /**
     * @Param WeaponName - Name of the Weapon
     **/
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = WeaponAttributes)
    FString WeaponName;

    /**
     * @Param MaxAmmo - Max Ammo player can store of weapon
     **/
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = WeaponAttributes)
    int32 MaxAmmo;

    /**
     * @Param AmmoPerClip - Size of the clip of the weapon
     **/
    UPROPERTY(EditDefaultsOnly, Category = WeaponAttributes)
    int32 ClipSize;

    /**
     * @Param CurrentAmmo - Ammo remaining in the clip
     **/
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    int32 CurrentAmmo;

    /**
     * @Param RateOfFire - firing speed of the weapon
     **/
    UPROPERTY(EditDefaultsOnly, Category = WeaponAttributes)
    float RateOfFire;

    /**
     * @Param BulletSpread - Weapon BulletSpread
     **/
    UPROPERTY(EditDefaultsOnly, Category = WeaponAttributes)
    float BulletSpread;

    /**
     * @Param Range - Range of the weapon
     **/
    UPROPERTY(EditDefaultsOnly, Category = WeaponAttributes)
    float Range;

    /**
     * @Param Damage - Damage of the weapon
     **/
    UPROPERTY(EditDefaultsOnly, Category = WeaponAttributes)
    float Damage;

    /**
     * @Param HeadShotDamageMultiplier - How times the damage to be increased when shot hit the SurfaceType_Head
     **/
    UPROPERTY(EditDefaultsOnly, Category = WeaponAttributes)
    float HeadShotDamageMultiplier;

    /**
     * @Param DamageTypeClass - Specifies DamageType of the weapon.
     **/
    UPROPERTY(EditDefaultsOnly, Category = WeaponAttributes)
    TSubclassOf<UDamageType> DamageTypeClass;

};

/**
 * 
 */
/*UCLASS()
class OMEGA_API UWeaponAttributes : public UDataTable
{
	GENERATED_BODY()
	
};*/
