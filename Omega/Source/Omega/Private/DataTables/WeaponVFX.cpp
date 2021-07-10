// Fill out your copyright notice in the Description page of Project Settings.


#include "DataTables/WeaponVFX.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"

FWeaponVFX::FWeaponVFX()
{
    CurrentLevel = 1;
}
void FWeaponVFX::UpdateStats(int32 DataTableRow)
{
    if(!DataTable) return;
    
    FName RowName = FName(*FString::FromInt(DataTableRow));
    FWeaponVFX* NewStatsVFX = DataTable->FindRow<FWeaponVFX>(RowName, FString(""));
    
    //Load the particle if valid
   if (!NewStatsVFX->MuzzleFlashSystem.IsNull())
    {
        MuzzleFlash = NewStatsVFX->MuzzleFlashSystem.LoadSynchronous();
    }

    if(!NewStatsVFX->MuzzleSoundSystem.IsNull())
    {
    
        MuzzleSound = NewStatsVFX->MuzzleSoundSystem.LoadSynchronous();
    }

    if(!NewStatsVFX->TracerEffectSystem.IsNull())
    {
        TracerEffect = NewStatsVFX->TracerEffectSystem.LoadSynchronous();
    }

    if(!NewStatsVFX->ImpactSoundSystem.IsNull())
    {
        ImpactSound = NewStatsVFX->ImpactSoundSystem.LoadSynchronous();
    }
}


void FWeaponVFX::SetDataTable(class UDataTable* WeaponDataTable)
{
    DataTable = WeaponDataTable;
    UpdateStats(CurrentLevel);
}
