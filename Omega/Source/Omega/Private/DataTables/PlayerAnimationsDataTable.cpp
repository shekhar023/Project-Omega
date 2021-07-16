// Fill out your copyright notice in the Description page of Project Settings.


#include "DataTables/PlayerAnimationsDataTable.h"
#include "Kismet/GameplayStatics.h"

FPlayerAnimations::FPlayerAnimations()
{
    CurrentLevel = 1;
}
void FPlayerAnimations::UpdateStats(int32 DataTableRow)
{

    FName RowName = FName(*FString::FromInt(DataTableRow));
    FPlayerAnimations* NewStats = DataTable->FindRow<FPlayerAnimations>(RowName, FString(""));

   if(NewStats)
    {
        if(NewStats->AnimSystem.Num() > 0)
        {
            for(auto& Anim : NewStats->AnimSystem)
            {
                if(!Anim.Value.IsNull())
                {
                    AnimationRef.Emplace(*Anim.Key,Anim.Value.LoadSynchronous());
                }
            }
        }

        if(!NewStats->PlayerInstanceSystem.IsNull())
        {
            PlayerInstanceClass = NewStats->PlayerInstanceSystem.LoadSynchronous();
        }
    }
}

void FPlayerAnimations::SetDataTable(class UDataTable* WeaponDataTable)
{
    DataTable = WeaponDataTable;
    UpdateStats(CurrentLevel);
}
