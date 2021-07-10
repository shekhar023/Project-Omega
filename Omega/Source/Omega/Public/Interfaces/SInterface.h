// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class OMEGA_API ISInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
    
    virtual void Pickup();

    virtual void Interact();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent,Category = Interaction)
    void OnInteract(AActor* Caller);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable,Category = Interaction)
    void StartFocus();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable,Category = Interaction)
    void EndFocus();
};
