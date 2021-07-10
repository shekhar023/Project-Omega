// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SInterfaceComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OMEGA_API USInterfaceComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USInterfaceComponent();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;
    
    FHitResult GetHitResult();

    FVector GetPlayerWorldPosition();

    FVector GetEndPoint();

    FVector GetDirection();
    

    void SetFocusedActor(AActor* HitActor);

     /** Component that handles input for this actor, if input is enabled. */
     UPROPERTY()
    class UInputComponent* InputComponent;  //already defined in scope AActor

    void SetupPlayerInputComponent();


public:
    
    /**set @param bCanInteract true when want to interact with overlapping interactable objects**/
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Interaction)
    bool bCanInteract;
    
    /**set @param InteractTraceLength set the length of linetrace to interact with objects**/
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Interaction)
    float InteractTraceLength;

    AActor* FocusedActor;
    
    class ASCharacter* PlayerCharacter = nullptr;

public:
    
    void InteractWithObjects();
    
    bool GetbCanInteract() const { return bCanInteract;}

		
};
