// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OMEGA_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define OMEGA_Weapon_generated_h

#define Omega_Source_Omega_Public_Weapons_Weapon_h_43_SPARSE_DATA
#define Omega_Source_Omega_Public_Weapons_Weapon_h_43_RPC_WRAPPERS
#define Omega_Source_Omega_Public_Weapons_Weapon_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Omega_Source_Omega_Public_Weapons_Weapon_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Omega_Source_Omega_Public_Weapons_Weapon_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Omega_Source_Omega_Public_Weapons_Weapon_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define Omega_Source_Omega_Public_Weapons_Weapon_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define Omega_Source_Omega_Public_Weapons_Weapon_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AWeapon, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__WeaponAttributesDataTable() { return STRUCT_OFFSET(AWeapon, WeaponAttributesDataTable); } \
	FORCEINLINE static uint32 __PPO__WeaponAttributesDataTableSystem() { return STRUCT_OFFSET(AWeapon, WeaponAttributesDataTableSystem); } \
	FORCEINLINE static uint32 __PPO__WeaponVFXDataTable() { return STRUCT_OFFSET(AWeapon, WeaponVFXDataTable); } \
	FORCEINLINE static uint32 __PPO__WeaponVFXDataTableSystem() { return STRUCT_OFFSET(AWeapon, WeaponVFXDataTableSystem); } \
	FORCEINLINE static uint32 __PPO__PlayAnimationsDataTable() { return STRUCT_OFFSET(AWeapon, PlayAnimationsDataTable); } \
	FORCEINLINE static uint32 __PPO__PlayAnimationsDataTableSystem() { return STRUCT_OFFSET(AWeapon, PlayAnimationsDataTableSystem); } \
	FORCEINLINE static uint32 __PPO__WeaponType() { return STRUCT_OFFSET(AWeapon, WeaponType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(AWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachPoint() { return STRUCT_OFFSET(AWeapon, WeaponAttachPoint); } \
	FORCEINLINE static uint32 __PPO__PrimaryWeaponAttachPoint() { return STRUCT_OFFSET(AWeapon, PrimaryWeaponAttachPoint); } \
	FORCEINLINE static uint32 __PPO__SecondaryWeaponAttachPoint() { return STRUCT_OFFSET(AWeapon, SecondaryWeaponAttachPoint); } \
	FORCEINLINE static uint32 __PPO__SideWeaponAttachPoint() { return STRUCT_OFFSET(AWeapon, SideWeaponAttachPoint); } \
	FORCEINLINE static uint32 __PPO__StorageSlot() { return STRUCT_OFFSET(AWeapon, StorageSlot); }


#define Omega_Source_Omega_Public_Weapons_Weapon_h_40_PROLOG
#define Omega_Source_Omega_Public_Weapons_Weapon_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Weapons_Weapon_h_43_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Weapons_Weapon_h_43_SPARSE_DATA \
	Omega_Source_Omega_Public_Weapons_Weapon_h_43_RPC_WRAPPERS \
	Omega_Source_Omega_Public_Weapons_Weapon_h_43_INCLASS \
	Omega_Source_Omega_Public_Weapons_Weapon_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Weapons_Weapon_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Weapons_Weapon_h_43_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Weapons_Weapon_h_43_SPARSE_DATA \
	Omega_Source_Omega_Public_Weapons_Weapon_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Weapons_Weapon_h_43_INCLASS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Weapons_Weapon_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_Public_Weapons_Weapon_h


#define FOREACH_ENUM_EINVENTORYSLOT(op) \
	op(EInventorySlot::Hands) \
	op(EInventorySlot::Primary) \
	op(EInventorySlot::Secondary) \
	op(EInventorySlot::Side) 

enum class EInventorySlot : uint8;
template<> OMEGA_API UEnum* StaticEnum<EInventorySlot>();

#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Knife) \
	op(EWeaponType::Shotgun) \
	op(EWeaponType::Rifle) 

enum class EWeaponType : uint8;
template<> OMEGA_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
