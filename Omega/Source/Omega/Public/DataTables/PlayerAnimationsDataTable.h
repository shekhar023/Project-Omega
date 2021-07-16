// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AnimInstances/SPlayerAnimInstance.h"
#include "PlayerAnimationsDataTable.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct FPlayerAnimations : public FTableRowBase
{
    GENERATED_USTRUCT_BODY();

    public:

    FPlayerAnimations();

	class UDataTable* DataTable;

	int32 CurrentLevel;

	void UpdateStats(int32 DataTableRow);

	void SetDataTable(class UDataTable* WeaponDataTable);

	UPROPERTY()
	TMap<FString, UAnimMontage*> AnimationRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerAnimations")
	TMap<FString, TSoftObjectPtr<UAnimMontage>> AnimSystem;

	UPROPERTY()
	TSubclassOf<UAnimInstance> PlayerInstanceClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerAnimations")
	TSoftClassPtr<UAnimInstance> PlayerInstanceSystem;
	
};
/**
 * 
 */
UCLASS()
class OMEGA_API UPlayerAnimationsDataTable : public UDataTable
{
	GENERATED_BODY()
	
};
