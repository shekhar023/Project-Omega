// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHealthComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDead);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHit, bool, bIsDead);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OMEGA_API USHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
    
    /* Handles OnTakeAnyDamageEvent */
    UFUNCTION()
    void HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

    /* Handles OnTakePointDamage Event */
    UFUNCTION()
    void HandleTakePointDamage(AActor* DamagedActor, float Damage, class AController* InstigatedBy, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const class UDamageType* DamageType, AActor* DamageCauser);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    
    /* @Param - Health - Actor Current health*/
    //UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HealthComponent)
    float Health;
    
    /* @Param - DefaultHealth - Actor health at the start of the game*/
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HealthComponent)
    float DefaultHealth;
    
    /* @Param - bIsDead - Check wether the actor is dead or not. */
    bool bIsDead;
    
    UFUNCTION(BlueprintCallable)
    float GetHealth() const;

    UFUNCTION(BlueprintCallable)
    bool GetbIsDead() const;

    UPROPERTY()
    FOnDead OnDead;
    
    UPROPERTY()
    FOnHit OnHit;

};
