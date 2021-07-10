// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SHealthComponent.h"
#include "Perception/AISense_Damage.h"

// Sets default values for this component's properties
USHealthComponent::USHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
    
    DefaultHealth = 100;
        bIsDead = false;

	// ...
}


// Called when the game starts
void USHealthComponent::BeginPlay()
{
	Super::BeginPlay();
    
	// ...
    AActor* MyOwner = GetOwner();
        if(MyOwner)
        {
            //Apply Damage to the player
            MyOwner->OnTakeAnyDamage.AddDynamic(this, &USHealthComponent::HandleTakeAnyDamage);
            MyOwner->OnTakePointDamage.AddDynamic(this, &USHealthComponent::HandleTakePointDamage);
            
        }
        Health = DefaultHealth;
}

//function to handle OnTakeAnyDamage event.
void USHealthComponent::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
    if(Damage <= 0 || bIsDead)
    {
        return;
    }
    
    // Update health clamped
    Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);
    
    //check is health is less than equals to zero
    bIsDead = Health <= 0.0f;
    
    UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));
    
    if(bIsDead)
    {
        OnDead.Broadcast();
    }
    OnHit.Broadcast(bIsDead);


    UAISense_Damage::ReportDamageEvent(GetWorld(), DamagedActor, InstigatedBy, Damage, DamageCauser->GetActorLocation(), DamageCauser->GetActorLocation());
    
    /*AWraithShooterGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AWraithShooterGameModeBase>();
    if(bIsDead)
    {
        if(GameMode != nullptr)
        {
            APawn* OwnerPawn = Cast<APawn>(GetOwner());
            GameMode->PawnKilled(OwnerPawn);
            OnDead.ExecuteIfBound();
        }
    }*/
}

//function to handle OnTakePointDamage event.
void USHealthComponent::HandleTakePointDamage(AActor* DamagedActor, float Damage, class AController* InstigatedBy, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const class UDamageType* DamageType, AActor* DamageCauser )
{
      if(Damage <= 0 || bIsDead)
    {
        return;
    }
    
    // Update health clamped
    Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);
    
    //check is health is less than equals to zero
    bIsDead = Health <= 0.0f;
    
    UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));
    if(bIsDead)
    {
        OnDead.Broadcast();
    }
    
    

    UAISense_Damage::ReportDamageEvent(GetWorld(), DamagedActor, InstigatedBy, Damage, ShotFromDirection, HitLocation);
    
}

float USHealthComponent::GetHealth() const
{
    return Health;
}

bool USHealthComponent::GetbIsDead() const
{
    return bIsDead;
}


// Called every frame
void USHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

