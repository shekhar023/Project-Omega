// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponVFX.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct FWeaponVFX : public FTableRowBase
{
    GENERATED_USTRUCT_BODY();
    
    FWeaponVFX();

public:
    
    /*Data table associated with the specific instance of the weapon*/
    class UDataTable* DataTable;
    
    /*The current level of the weapon*/
    int32 CurrentLevel;

    /*Associates the data table with the current instance*/
    void SetDataTable(class UDataTable* WeaponDataTable);

    void UpdateStats(int32 DataTableRow);
    

    /*Particle system used for ranged weapons only*/
    UPROPERTY()
    class UParticleSystem* MuzzleFlash;

        /**
     * @Param - MuzzleSound - Sound to play from the muzzle.
     **/
    UPROPERTY()
    class USoundBase* MuzzleSound;

    /**
     * @Param - ImpactSound - Play Impact sound at hit location.
     **/
    UPROPERTY()
    class USoundBase* ImpactSound;

    /**
     * @Param - TracerEffect - Particle system to spawn Tracer.
     **/
    UPROPERTY()
    class UParticleSystem* TracerEffect;

    /*The Particle System (if any) associated with the specific weapon's level - leave this empty for melee weapons*/
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TAssetPtr<UParticleSystem> MuzzleFlashSystem;

    /*The Sound System (if any) associated with the specific weapon's level - leave this empty for melee weapons*/
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<USoundBase> MuzzleSoundSystem;

    /*The Sound System (if any) associated with the specific weapon's level - leave this empty for melee weapons*/
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TAssetPtr<USoundBase> ImpactSoundSystem;

    /*The Particle System (if any) associated with the specific weapon's level - leave this empty for melee weapons*/
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TAssetPtr<UParticleSystem> TracerEffectSystem;

};
