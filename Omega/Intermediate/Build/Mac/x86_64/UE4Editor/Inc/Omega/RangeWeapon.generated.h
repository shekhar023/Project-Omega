// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OMEGA_RangeWeapon_generated_h
#error "RangeWeapon.generated.h already included, missing '#pragma once' in RangeWeapon.h"
#endif
#define OMEGA_RangeWeapon_generated_h

#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_SPARSE_DATA
#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire);


#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire);


#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARangeWeapon(); \
	friend struct Z_Construct_UClass_ARangeWeapon_Statics; \
public: \
	DECLARE_CLASS(ARangeWeapon, AWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(ARangeWeapon)


#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_INCLASS \
private: \
	static void StaticRegisterNativesARangeWeapon(); \
	friend struct Z_Construct_UClass_ARangeWeapon_Statics; \
public: \
	DECLARE_CLASS(ARangeWeapon, AWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(ARangeWeapon)


#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARangeWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARangeWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARangeWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARangeWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARangeWeapon(ARangeWeapon&&); \
	NO_API ARangeWeapon(const ARangeWeapon&); \
public:


#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARangeWeapon(ARangeWeapon&&); \
	NO_API ARangeWeapon(const ARangeWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARangeWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARangeWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARangeWeapon)


#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HitResultComp() { return STRUCT_OFFSET(ARangeWeapon, HitResultComp); } \
	FORCEINLINE static uint32 __PPO__FireType() { return STRUCT_OFFSET(ARangeWeapon, FireType); } \
	FORCEINLINE static uint32 __PPO__ShootType() { return STRUCT_OFFSET(ARangeWeapon, ShootType); } \
	FORCEINLINE static uint32 __PPO__WeaponProjectile() { return STRUCT_OFFSET(ARangeWeapon, WeaponProjectile); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpeedMultiplier() { return STRUCT_OFFSET(ARangeWeapon, ProjectileSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnLocationMultiplier() { return STRUCT_OFFSET(ARangeWeapon, ProjectileSpawnLocationMultiplier); } \
	FORCEINLINE static uint32 __PPO__AmmoPickupMesh() { return STRUCT_OFFSET(ARangeWeapon, AmmoPickupMesh); }


#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_37_PROLOG
#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_SPARSE_DATA \
	Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_RPC_WRAPPERS \
	Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_INCLASS \
	Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_SPARSE_DATA \
	Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_INCLASS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Weapons_RangeWeapon_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class ARangeWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_Public_Weapons_RangeWeapon_h


#define FOREACH_ENUM_EWEAPONSHOOTTYPE(op) \
	op(EWeaponShootType::Automatic) \
	op(EWeaponShootType::SingleShot) 

enum class EWeaponShootType : uint8;
template<> OMEGA_API UEnum* StaticEnum<EWeaponShootType>();

#define FOREACH_ENUM_EWEAPONHITTYPE(op) \
	op(EWeaponHitType::HitScanTrace) \
	op(EWeaponHitType::Projectile) 

enum class EWeaponHitType : uint8;
template<> OMEGA_API UEnum* StaticEnum<EWeaponHitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
