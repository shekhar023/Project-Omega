// Fill out your copyright notice in the Description page of Project Settings.
#include "Components/WeaponComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Weapons/Weapon.h"
#include "TimerManager.h"

#include "Components/InputComponent.h"
#include "Components/TimelineComponent.h"

#include "Characters/SCharacter.h"
#include "Weapons/Weapon.h"
#include "AnimInstances/SPlayerAnimInstance.h"

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

    //to track weather the weapon is equipped or not
    bIsWeaponEquipped = false;
    bIsAiming = false;
    bIsReloading = false;
    DefaultCharacterSpeed = 0.0f;

    WeaponEquipKeyName = FString("WeaponEquipAnimation");
    WeaponDeEquipKeyName = FString("WeaponDeEquipAnimation");
    WeaponAttackKeyName = FString("WeaponAttackAnimation");
    WeaponAimKeyName = FString("WeaponAimAnimation");
	// ...
}

void UWeaponComponent::WeaponEquipToggle()
{
    if(!CurrentWeapon) return;

    bIsWeaponEquipped = !bIsWeaponEquipped;
    if(bIsWeaponEquipped)
    {
        EquipAndPlayAnimation_Character(WeaponEquipKeyName);
    }
    else if(!bIsWeaponEquipped)
    {
        EquipAndPlayAnimation_Character(WeaponDeEquipKeyName);
    }
}

void UWeaponComponent::WeaponStartAttack()
{
    if(!bIsWeaponEquipped)
	return;

    if(bIsWeaponEquipped && CurrentWeapon && bIsAiming)
	{
		CurrentWeapon->WeaponStartAttack();
	}
}

void UWeaponComponent::WeaponStopAttack()
{
    if(CurrentWeapon && !bIsAiming)
	CurrentWeapon->WeaponStopAttack();
}

void UWeaponComponent::SetCameraFOV()
{
    if(!Character && !AimCurve) return;
   
    if(!bIsWeaponEquipped)
    {
        StopAim();
        return;
    }

    float TimelineValue = AimTimeline->GetPlaybackPosition();
	auto AimCurveFloatValue = 1.0f * AimCurve->GetFloatValue(TimelineValue);

    float New_FOV = CurrentWeapon->CurrentWeaponAttributes.Aim_FOV;
    float CurrentFOV = FMath::Lerp(Default_FOV, New_FOV, AimCurveFloatValue);
    Character-> GetFollowCamera()->SetFieldOfView(CurrentFOV);
}

void UWeaponComponent::Aim()
{
    AimTimeline->PlayFromStart();
    Character->ChangeToCameraDirectionAndFOV();
    Character->SetCharacterSpeed(CurrentWeapon->CurrentWeaponAttributes.PlayerSpeed);
    Character->SetAimStatus(true);
    Character->bUseControllerRotationYaw = 1;
}

void UWeaponComponent::StopAim()
{
    AimTimeline->Reverse();
    Character->SetCharacterSpeed(DefaultCharacterSpeed);
    Character->SetAimStatus(false);
    Character->bUseControllerRotationYaw = 0;
}

void UWeaponComponent::Reload()
{
     if(bIsWeaponEquipped && CurrentWeapon)
	{
		CurrentWeapon->Reload();
	}
}

///Setup All the inputs
void UWeaponComponent::SetupPlayerInputComponent()
{
    InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
    if(InputComponent)
    {
        
        InputComponent->BindAction("Fire", IE_Pressed, this, &UWeaponComponent::WeaponStartAttack);
        InputComponent->BindAction("Fire", IE_Released, this, &UWeaponComponent::WeaponStopAttack);
        InputComponent->BindAction("Aim", IE_Pressed, this, &UWeaponComponent::Aim);
        InputComponent->BindAction("Aim", IE_Released, this, &UWeaponComponent::StopAim);

        InputComponent->BindAction("Equip/Dequip", IE_Pressed, this, &UWeaponComponent::WeaponEquipToggle);
    
        InputComponent->BindAction("Reload", IE_Pressed, this, &UWeaponComponent::Reload);
        
        
        InputComponent->BindAction("NextWeapon", IE_Pressed, this, &UWeaponComponent::EquipNextWeapon);
        InputComponent->BindAction("PreviousWeapon", IE_Pressed, this, &UWeaponComponent::EquipPreviousWeapon);
    }
}

// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
    
    SetupPlayerInputComponent();
   
   //Store Character Reference
    Character = Cast<ASCharacter>(GetOwner());
    
    /// if character is valid
    if(Character)
    {
        //Check and fill Inventory if any
        SpawnInventory();
        DefaultCharacterSpeed = Character->GetMovementComponent()->GetMaxSpeed();
    }
    AimCurve = CurrentWeapon->CurrentWeaponAttributes.AimCurve;
    if(AimCurve)
    {
        FOnTimelineFloat AimCurveTimeline;
        AimCurveTimeline.BindUFunction(this, FName("SetCameraFOV"));

		AimTimeline = NewObject<UTimelineComponent>(this, FName("AimAnimation"));
        AimTimeline->AddInterpFloat(AimCurve, AimCurveTimeline);
		AimTimeline->RegisterComponent();
        Default_FOV = Character->GetFollowCamera()->FieldOfView;
    }
}

///SpawnDefault Inventory at Begin Play
void UWeaponComponent::SpawnInventory()
{
    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = Character;

    UWorld* World = GetWorld();
    
    //Spawn all Weapons
    for(auto Iterator = AvailableWeaponBlueprintReferences.CreateIterator(); Iterator; ++Iterator)
    {
        //Store Weapon in a local variable
        AWeapon* WeaponRef = World->SpawnActor<AWeapon>(Iterator->GetDefaultObject()->GetClass(), Character->GetTransform(), SpawnParams);
        //Add the local weapon reference in the array
        WeaponsArray.Emplace(WeaponRef);

        //Attach all the Inventory to their storage slot
        WeaponRef->AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, WeaponRef->GetStorageSlotName(WeaponRef->GetStorageSlot()));
    }
    
    //if inventory is valid
    if(WeaponsArray.Num() > 0)
    {
        //Assign weapon at the 0th index(i.e First weapon in inventory) as the Primary Weapon at the Start.
        CurrentWeapon = WeaponsArray[WeaponIndex];
    }
}

///Play playeranimations and change state of the player in the Player AnimInstace
void UWeaponComponent::EquipAndPlayAnimation_Character(FString AnimationKeyName)
{
    ///switch of/to weapon meshes is done via animNotifies as well as animblueprints from the animation itself
    ///fetch animation reference via AnimationKeyName
    UAnimMontage* Animation = CurrentWeapon->PlayerAnimations.AnimationRef.FindRef(AnimationKeyName);
    if(Animation)
    { 
        //Play animation
        float AnimDuration = Character->PlayAnimations(Animation);
    }   
}

//call recieved from anim notify in AnimBP
void UWeaponComponent::SwitchAnimLayer()
{
    //get the animblueprint class i.e. to be linked as layer
    auto WeaponAnimClass = CurrentWeapon->PlayerAnimations.PlayerInstanceClass;

    //do nothing is not valid
    if(!WeaponAnimClass) return;

    ///switch between the anim layers
    /* @Param 1 - is UClass(Animblueprintclass) that is to be linked
    * @Param 2 - is a boolean to link or unlink the AnimLayers.
    */
    Character->SwitchAnimLayer(WeaponAnimClass, bIsWeaponEquipped);
}

///To Swap Weapon Meshes in The Game (to be called in in blueprint AnimNotify)
void UWeaponComponent::SwapToNewWeaponMesh()
{
    if(bIsWeaponEquipped)
    {
        //if weapon is equipped then attach the weapon to hands of the player
        CurrentWeapon->AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, CurrentWeapon->GetStorageSlotName(EInventorySlot::Hands));
    }
    if (!bIsWeaponEquipped)
    {
         //if weapon is  De-equipped then attach the weapon to Storageslot of the player instantly
        DeEquip();
    }
}

///Detach Current Weapon And Attach to Storage Slot
void UWeaponComponent::DeEquip()
{
    //Attach Weapon to Holster
    CurrentWeapon->AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, CurrentWeapon->GetStorageSlotName(CurrentWeapon->GetStorageSlot())); 
}

///Toggle to next weapon if available in inventory
void UWeaponComponent::EquipNextWeapon()
{
    //Toggle Only if Current equipped with a weapon
    if(!bIsWeaponEquipped || WeaponsArray.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("bIsWeaponEquipped is true and WeaponArray is > 0 in EquipNext Weapon"));
        return;
    } 
    
    //increment the weapon index(tracks the weapons stored in an array.
    ++WeaponIndex;

    //check if weaponindex is valid or not
    if(WeaponsArray.IsValidIndex(WeaponIndex))
    {
        //detach the currently equipped weapon to the storage slot instantly.
        DeEquip();

        //set current weapon to the new element in the 
        //weapons array by the value of weaponindex
        CurrentWeapon = WeaponsArray[WeaponIndex];

        //equip weapon and play animation
        EquipAndPlayAnimation_Character(WeaponEquipKeyName);
    }
    else
    {
        //if weaponindex is not valid then reset it to the 1st element of weapons array
        WeaponIndex = 0;

        //detach the currently equipped weapon to the storage slot instantly.
        DeEquip();

        //set current weapon to the new element in the 
        //weapons array by the value of weaponindex
        CurrentWeapon = WeaponsArray[WeaponIndex];

        //equip weapon and play animation
        EquipAndPlayAnimation_Character(WeaponEquipKeyName);
    }
    
}

///Toggle to previous weapon if available in inventory
void UWeaponComponent::EquipPreviousWeapon()
{
    //Toggle Only if Current equipped with a weapon
    if(!bIsWeaponEquipped || WeaponsArray.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("bIsWeaponEquipped is false and WeaponArray is > 0 in EquipPrevious Weapon"));
        return;
    } 
    
    //increment the weapon index(tracks the weapons stored in an array.
    --WeaponIndex;

    //check if weaponindex is valid or not and weapon index is not at its default value
    if(WeaponsArray.IsValidIndex(WeaponIndex)  && WeaponIndex >= 0)
    {
         //detach the currently equipped weapon to the storage slot instantly.
        DeEquip();
        //set current weapon to the new element in the 
        //weapons array by the value of weaponindex
        CurrentWeapon = WeaponsArray[WeaponIndex];
        //equip weapon and play animation
        EquipAndPlayAnimation_Character(WeaponEquipKeyName);
    }
    //if weaponindex is -ve 
    else if(WeaponIndex < 0)
    {
        //set weapon index to last element available in weapon aray i.e. the last weapon
        WeaponIndex = WeaponsArray.Num() - 1;

         //detach the currently equipped weapon to the storage slot instantly.
        DeEquip();

        //set current weapon to the new element in the 
        //weapons array by the value of weaponindex
        CurrentWeapon = WeaponsArray[WeaponIndex];
        //equip weapon and play animation
        EquipAndPlayAnimation_Character(WeaponEquipKeyName);
    }
}

//------------------------------------------------------------------------------------------------------------
//Returns a reference of the desired weapon
//------------------------------------------------------------------------------------------------------------
AWeapon* UWeaponComponent::GetWeaponBasedOnType(EWeaponType WeaponType)
{
    for ( auto iterator = WeaponsArray.CreateConstIterator(); iterator; iterator++)
    {
        if( (*iterator)&& (*iterator)->GetWeaponType() == WeaponType)
        {
            //valid reference
            return *iterator;
        }
    }
    //didn't find a valid reference
    return nullptr;
}


void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if(AimTimeline)
	{
		AimTimeline->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, NULL);
	}
}



