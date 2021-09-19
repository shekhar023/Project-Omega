// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/Weapon.h"
#include "RangeWeapon.generated.h"

/**
 * 
 */

//MARK:ENUM for Weapon Fire trace Type
UENUM(Blueprintable)
enum class EWeaponHitType : uint8
{
    /* For currently equipped weapon uses HitScanTrace */
   	HitScanTrace,
    
    /* For currently equipped weapon uses Projectile */
	Projectile,

};

//MARK:ENUM for Weapon Fire Type
UENUM(Blueprintable)
enum class EWeaponShootType : uint8
{
    /* For currently equipped weapon uses HitScanTrace */
   	Automatic,
    
    /* For currently equipped weapon uses Projectile */
	SingleShot,

};

UCLASS()
class OMEGA_API ARangeWeapon : public AWeapon
{
	GENERATED_BODY()

private:
	float LastTimeWeaponWasFired;

	float TimeBetweenShots;

	FTimerHandle Fire_TimerHandle;

	/*The name of the muzzle socket for the current weapon*/
	/*By convetion, it's the same for all range weapons*/
	FName MuzzleSocket="Muzzle";
	
public:

	ARangeWeapon();

	FORCEINLINE UStaticMesh* GetAmmoPickupSM() { return AmmoPickupMesh; }

	FORCEINLINE FName GetMuzzleSocketName() { return MuzzleSocket; }


protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Weapon)
	class USHitResultComponent* HitResultComp;

	UPROPERTY(EditDefaultsOnly, Category="Weapon")
	EWeaponHitType FireType;

	UPROPERTY(EditDefaultsOnly, Category="Weapon")
	EWeaponShootType ShootType;

	/*The projectile that will be spanwed at the weapon's muzzle*/
	UPROPERTY(EditDefaultsOnly, Category="Weapon")
	TSubclassOf<class ASProjectile> WeaponProjectile;

	/*Projectile's speed multiplier*/
	UPROPERTY(EditAnywhere,Category="Weapon")
	float ProjectileSpeedMultiplier;

	/*The projectiles should get spawned a bit infront of the muzzle so they won't get stuck*/
	UPROPERTY(EditAnywhere, Category = "Weapon")
	float ProjectileSpawnLocationMultiplier;

	/*The static mesh of the ammo pickup*/
	UPROPERTY(EditAnywhere, Category = Weapon)
	class UStaticMesh* AmmoPickupMesh;

public:

	virtual void WeaponStartAttack() override;

	virtual void WeaponStopAttack() override;

	virtual void Reload() override;

private:

	void WeaponFire();

	void WeaponFireType();

	/*Fires the weapon (if fire rate allows it) and applies damage to any hit enemies*/
	UFUNCTION()
	void Fire();

	void WeaponProjectileFireType();

	void SpawnProjectile();

	void ApplyDamage(FHitResult& HitInfo, EPhysicalSurface HitSurfaceType);

	void IncreaseCurrentAmmo(int32 AmmoToAdd);

	void PlayFireVFX(FVector ImpactPoint);
	
};
