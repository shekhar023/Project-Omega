// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DataTables/WeaponAttributes.h"
#include "DataTables/WeaponVFX.h"
#include "DataTables/PlayerAnimationsDataTable.h"
#include "Weapon.generated.h"

class UAnimMontage;

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
    Knife,
    Shotgun,
    Rifle
};

//MARK:ENUM for sockets
UENUM(Blueprintable)
enum class EInventorySlot : uint8
{
    /* For currently equipped items/weapons */
    Hands,
    
    /* For Primary weapons on spine bone */
    Primary,
    
    /* For Secondary weapons on spine bone */
    Secondary,
    
    /* For Side weapons on Pelvis bone */
    Side,
    
};

UCLASS()
class OMEGA_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();
    
    /*Returns true if the weapon has a populated TArray of Actors that were hit - false otherwise
    Before called, SetRaycasting must be true.
    WARNING:Must be overriden in every weapon*/
    virtual bool GetHitActors(TArray<FHitResult> &WeaponHitActors)
    {
        //This macro means that the function MUST be overriden!
        unimplemented();
        return false;
    };


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
    /*Skeletal mesh of the weapon*/
    UPROPERTY(VisibleAnywhere, Category = "Weapon")
    class USkeletalMeshComponent* WeaponMesh;
    
    /*The weapon Attributes table responsible for this weapon*/
    UPROPERTY()
    UDataTable* WeaponAttributesDataTable;

    UPROPERTY(EditAnywhere, Category = "Weapon")
    TSoftObjectPtr<UDataTable> WeaponAttributesDataTableSystem;
    
    /*The weapon VFX table responsible for this weapon*/
    UPROPERTY()
    UDataTable* WeaponVFXDataTable;

    UPROPERTY(EditAnywhere, Category = "Weapon")
    TSoftObjectPtr<UDataTable> WeaponVFXDataTableSystem;

    /*The weapon VFX table responsible for this weapon*/
    UPROPERTY()
    UDataTable* PlayAnimationsDataTable;

    UPROPERTY(EditAnywhere, Category = "Weapon")
    TSoftObjectPtr<UDataTable> PlayAnimationsDataTableSystem;
    
    /*The weapon type*/
    UPROPERTY(EditDefaultsOnly, Category="Weapon")
    EWeaponType WeaponType;
    
protected:
     
    /*The socket's name of the character's skeletal mesh holding that we weapon is going to get attached to*/
    UPROPERTY(VisibleAnywhere, Category = WeaponsAttachSockets)
    FName MuzzleSocketName;

    /*The socket's name of the character's skeletal mesh holding that we weapon is going to get attached to*/
    UPROPERTY(VisibleAnywhere, Category = WeaponsAttachSockets)
    FName WeaponAttachPoint;

    UPROPERTY(VisibleAnywhere, Category = WeaponsAttachSockets)
    FName PrimaryWeaponAttachPoint;

    UPROPERTY(VisibleAnywhere, Category = WeaponsAttachSockets)
    FName SecondaryWeaponAttachPoint;

    UPROPERTY(VisibleAnywhere, Category = WeaponsAttachSockets)
    FName SideWeaponAttachPoint;

    /*The storage socket's name of the character's skeletal mesh that we weapon is going to get attached to*/
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    EInventorySlot StorageSlot;

public:
    
    /*Instance of weapon Attributes*/
    UPROPERTY(BlueprintReadOnly);
    FWeaponAttributes CurrentWeaponAttributes;
    
    /*Instance of weapon VFX*/
    UPROPERTY(BlueprintReadOnly);
    FWeaponVFX CurrentWeaponVFX;

    /*Instance of weapon PlayerAnimations*/
    UPROPERTY(BlueprintReadOnly);
    FPlayerAnimations PlayerAnimations;
    
public:
    
    /*True if the weapon is raycasting*/
    bool bIsRaycasting;
    
    /*Enable this in order for the weapon to raycast for possible hits*/
    void SetRaycasting(bool RaycastStatus) { bIsRaycasting = RaycastStatus; }


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    FName GetStorageSlotName(EInventorySlot Slot) const;
    
    /*Returns the skeletal mesh of the weapon*/
    FORCEINLINE USkeletalMeshComponent* GetWeaponSkeletalMesh() { return WeaponMesh; }
    
    /*Returns the attached socket name*/
    FORCEINLINE EInventorySlot GetStorageSlot() { return StorageSlot; }
    
    /*Returns the attached socket name*/
    FORCEINLINE FName GetCharacterSocket() { return WeaponAttachPoint; }
    
    /*Returns the weapon type*/
    EWeaponType GetWeaponType() { return WeaponType; }

};
