// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapons/RangeWeapon.h"
#include "Projectiles/SProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Components/SHitResultComponent.h"

#define OUT

ARangeWeapon::ARangeWeapon()
{
	//Initialize Components

	HitResultComp = CreateDefaultSubobject<USHitResultComponent>(TEXT("HitResultComp"));

	//Initialize properties
	bIsMelee = false;
	ProjectileSpeedMultiplier = 1.f;
	ProjectileSpawnLocationMultiplier = 50.f;
	
}

void ARangeWeapon::BeginPlay() 
{
	Super::BeginPlay();
	TimeBetweenShots = 60 / CurrentWeaponAttributes.RateOfFire;
}

void ARangeWeapon::WeaponStartAttack()
{
	WeaponFire();
}

void ARangeWeapon::WeaponStopAttack()
{
	GetWorldTimerManager().ClearTimer(Fire_TimerHandle);
}

#pragma endregion

#pragma region WeaponFire
/*
* switch according to weapon fire type
* is weapon using Hitscantrace?
* is weapon spawning projectile?
*/
void ARangeWeapon::WeaponFire()
{
	
	if(FireType == EWeaponHitType::HitScanTrace)
	{
		//PrintToScreen(FString("Weapon Fire"), FColor::Red);
		WeaponFireType();
	}
	else if(FireType == EWeaponHitType::Projectile)
	{
		//PrintToScreen(FString("SingleShot Fire"), FColor::Red);
		WeaponProjectileFireType();
	}
}

#pragma endregion

#pragma region WeaponFireType
/*
* switch according to weapon fire type
* is weapon using Automatic Fire?
* is weapon using Singleshot?
*/
void ARangeWeapon::WeaponFireType()
{
	//Delay between stop fire and start fire
	float FirstDelay = FMath::Max(LastTimeWeaponWasFired + TimeBetweenShots - GetWorld()->TimeSeconds, 0.0f);

	if(ShootType == EWeaponShootType::Automatic)
	{
		//PrintToScreen(FString("Automatic Fire"), FColor::Red);
		GetWorldTimerManager().SetTimer(Fire_TimerHandle, this, &ARangeWeapon::Fire, TimeBetweenShots, true, FirstDelay);
	}
	else if(ShootType == EWeaponShootType::SingleShot)
	{
		//PrintToScreen(FString("SingleShot Fire"), FColor::Red);
		Fire();
	}
}

void ARangeWeapon::Fire()
{
	//(GetWorld()->GetTimeSeconds() - LastTimeWeaponWasFired >= CurrentWeaponAttributes.RateOfFire) && 
	UE_LOG(LogTemp, Warning, TEXT("Current Ammo is: %d"), CurrentWeaponAttributes.CurrentAmmo);
	if(CurrentWeaponAttributes.CurrentAmmo > 0)
	{
		-- CurrentWeaponAttributes.CurrentAmmo;

			 //Storing Hit Result
    		FHitResult HitInfo = HitResultComp->GetHitResult();
			EPhysicalSurface SurfaceType = SurfaceType_Default;
			SurfaceType = UPhysicalMaterial::DetermineSurfaceType(HitInfo.PhysMaterial.Get());
			SurfaceType = UGameplayStatics::GetSurfaceType(HitInfo);

			ApplyDamage(HitInfo, SurfaceType);
			PlayFireVFX(HitInfo.ImpactPoint);

	}

	LastTimeWeaponWasFired = GetWorld()->GetTimeSeconds();
}

void ARangeWeapon::PlayFireVFX(FVector ImpactPoint)
{ 
	FVector MuzzleLocation = WeaponMesh->GetSocketLocation(MuzzleSocketName);
	FRotator MuzzleRotation = WeaponMesh->GetSocketRotation(MuzzleSocketName);
	if(CurrentWeaponVFX.MuzzleFlash)
	{
		
		UGameplayStatics::SpawnEmitterAttached(CurrentWeaponVFX.MuzzleFlash, WeaponMesh, MuzzleSocketName);
	}


	if(CurrentWeaponVFX.MuzzleSound)
	{
		
		UGameplayStatics::SpawnSoundAttached(CurrentWeaponVFX.MuzzleSound, WeaponMesh, MuzzleSocketName);
		UAISense_Hearing::ReportNoiseEvent(GetWorld(), GetActorLocation(), 1.0f, this, 0.0f, FName("WeaponFire"));
	}

	if(CurrentWeaponVFX.TracerEffect)
	{

		UParticleSystemComponent* TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), CurrentWeaponVFX.TracerEffect, MuzzleLocation);
		if(ensure(TracerComp))
		{
			TracerComp->SetVectorParameter("Target", ImpactPoint);
		}
	}
	
	if(CurrentWeaponVFX.ImpactSound && (FireType == EWeaponHitType::HitScanTrace))
	{
		UGameplayStatics::SpawnSoundAtLocation(GetWorld(), CurrentWeaponVFX.ImpactSound, ImpactPoint);
	}

}

#pragma region WeaponProjectileFireType
/*
* switch according to weapon fire type
* is projectile weapon using Automatic Fire?
* is projectile weapon using Singleshot?
*/
void ARangeWeapon::WeaponProjectileFireType()
{
	//Delay between stop fire and start fire
	float FirstDelay = FMath::Max(LastTimeWeaponWasFired + TimeBetweenShots - GetWorld()->TimeSeconds, 0.0f);
	if(ShootType == EWeaponShootType::Automatic)
	{
		
		GetWorldTimerManager().SetTimer(Fire_TimerHandle, this, &ARangeWeapon::SpawnProjectile, TimeBetweenShots, true, FirstDelay);
	}
	else if(ShootType == EWeaponShootType::SingleShot)
	{
		
		SpawnProjectile();
	}
}

#pragma endregion

#pragma region SpawnProjectile

void ARangeWeapon::SpawnProjectile()
{
	//Check if the weapon allow the character to fire
	if( (GetWorld()->GetTimeSeconds() - LastTimeWeaponWasFired >= CurrentWeaponAttributes.RateOfFire) && CurrentWeaponAttributes.CurrentAmmo>0)
	{
		
		CurrentWeaponAttributes.CurrentAmmo--;

		//Calculate the projectile travel path for raycast
		FVector SocketLocation = WeaponMesh->GetSocketLocation(MuzzleSocket);
		FVector BulletEndTarget = SocketLocation + (GetActorForwardVector()* CurrentWeaponAttributes.Range);

		//Apply a relatively smooth fix in Z axis because I don't have an animator and
		//I must make the most out of my animations (the attached weapon is too high because of the animation)
		BulletEndTarget.Z -= 50;

		//Debug line - for debug purposes
		//DrawDebugLine(GetWorld(), SocketLocation, BulletEndTarget, FColor::Blue, false, 2.f);


		if(WeaponProjectile)
		{
			FActorSpawnParameters SpawnParams;

			SpawnParams.Owner = this;

			//Calculate the new velocity for our projectile and normalize it
			FVector ProjectileVelocity = BulletEndTarget-SocketLocation;
			ProjectileVelocity.Normalize();


			FTransform ProjectileSpawnTransform = WeaponMesh->GetSocketTransform(MuzzleSocket);
			ProjectileSpawnTransform.SetLocation(ProjectileSpawnTransform.GetLocation() + GetActorForwardVector() * ProjectileSpawnLocationMultiplier);

			//Access the player to determine if the projectiles should bounce
			ASCharacter* MainChar = Cast<ASCharacter>(GetOwner());
			bool ProjectilesBounceEffect = false;
			if (MainChar)
			{
				//ProjectilesBounceEffect = MainChar->GetProjectileBounceEffect();
			}

			//Spawn the projectile
			ASProjectile* Projectile=Cast<ASProjectile>(GetWorld()->SpawnActor<ASProjectile>(WeaponProjectile, ProjectileSpawnTransform, SpawnParams));

			if(Projectile)
			{
				if(ProjectilesBounceEffect)
				{
					Projectile->ProjectileMovementComp->bShouldBounce = true;
				}

				//Update the new velocity based on values we entered through the editor
				Projectile->ProjectileMovementComp->Velocity = ProjectileVelocity * Projectile->ProjectileMovementComp->InitialSpeed * ProjectileSpeedMultiplier;
				Projectile->ProjectileMovementComp->UpdateComponentVelocity();

				
			}
			LastTimeWeaponWasFired = GetWorld()->GetTimeSeconds();
		}
	}
}

#pragma endregion

void ARangeWeapon::ApplyDamage(FHitResult& HitInfo, EPhysicalSurface HitSurfaceType)
{
	AActor* HitActor = HitInfo.GetActor();

	float AppliedDamage = CurrentWeaponAttributes.Damage;
	//CurrentWeaponStats.GetDamageOnCurrentLevel();
	if(HitSurfaceType == SurfaceType_Head)
	{
		AppliedDamage *= CurrentWeaponAttributes.HeadShotDamageMultiplier;
	}

	if(HitActor)
	{
		UGameplayStatics::ApplyPointDamage(HitActor, AppliedDamage, OUT HitResultComp->GetCameraDirection(), OUT HitInfo, GetOwner()->GetInstigatorController(), GetOwner(), CurrentWeaponAttributes.DamageTypeClass);
		PrintToScreen(FString("Damage Applied is: ").Append(FString::SanitizeFloat(AppliedDamage)), FColor::Red);
	}
}

#pragma endregion

void ARangeWeapon::Reload()
{
    if(bIsMelee) return;

	int32 AmmoDifference = CurrentWeaponAttributes.ClipSize - CurrentWeaponAttributes.CurrentAmmo;
	//pseudo code
	IncreaseCurrentAmmo(AmmoDifference);
}

//-------------------------------------------------------------------------------------
//Increases the current ammo of the weapon
//-------------------------------------------------------------------------------------
void ARangeWeapon::IncreaseCurrentAmmo(int32 AmmoToAdd)
{
	UE_LOG(LogTemp, Warning, TEXT("IncreaseCurrentAmmo function is called you should not be seeing it"));
	(CurrentWeaponAttributes.CurrentAmmo + AmmoToAdd <CurrentWeaponAttributes.MaxAmmo) ? CurrentWeaponAttributes.CurrentAmmo += AmmoToAdd : CurrentWeaponAttributes.CurrentAmmo = CurrentWeaponAttributes.MaxAmmo;
	

	if(CurrentWeaponAttributes.MaxAmmo > 0)
	{
		CurrentWeaponAttributes.MaxAmmo -= AmmoToAdd;
	}
}