// Fill out your copyright notice in the Description page of Project Settings.


#include "DataTables/WeaponAttributes.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/TimelineComponent.h"
#include "Kismet/GameplayStatics.h"

FWeaponAttributes::FWeaponAttributes()
{
    CurrentLevel = 1;        

}
void FWeaponAttributes::UpdateStats(int32 DataTableRow)
{
    FName RowName = FName(*FString::FromInt(DataTableRow));
    FWeaponAttributes* NewStats = DataTable->FindRow<FWeaponAttributes>(RowName, FString(""));
    
    if(NewStats)
    {
        
        WeaponIcon = NewStats->WeaponIcon;
        WeaponName = NewStats->WeaponName;
        MaxAmmo = NewStats->MaxAmmo;
        ClipSize = NewStats->ClipSize;
        CurrentAmmo = NewStats->ClipSize;
        RateOfFire = NewStats->RateOfFire;
        BulletSpread = NewStats->BulletSpread;
        Range = NewStats->Range;
        Damage = NewStats->HeadShotDamageMultiplier;
        DamageTypeClass = NewStats->DamageTypeClass;
        PlayerSpeed = NewStats->PlayerSpeed;
        Aim_FOV = NewStats->Aim_FOV;

    }

    if(!NewStats->AimCurveSystem.IsNull())
    {
       AimCurve = NewStats->AimCurveSystem.LoadSynchronous();
    }
}


void FWeaponAttributes::SetDataTable(class UDataTable* WeaponDataTable)
{
    DataTable = WeaponDataTable;
    UpdateStats(CurrentLevel);
}
