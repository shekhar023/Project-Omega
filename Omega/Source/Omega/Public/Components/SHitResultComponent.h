// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHitResultComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OMEGA_API USHitResultComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USHitResultComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
    
    UPROPERTY()
    class ASCharacter* PlayerCharacter = nullptr;
    
    UPROPERTY()
    class AWeapon* Weapon;
        
public:
    /**
     * Returns Hit Result
     **/
    FHitResult GetHitResult();

    /**
     * Returns Gun range end point
     **/
    FVector GetEndTracePoint();

    /**
     * Returns Camera Postion
     **/
    FVector GetCameraPosition();

    /**
     * Returns Camera Direction
     **/
    FVector GetCameraDirection();
		
};
