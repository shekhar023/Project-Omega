// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWeaponType : uint8;
class AWeapon;
#ifdef OMEGA_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define OMEGA_WeaponComponent_generated_h

#define Omega_Source_Omega_Public_Components_WeaponComponent_h_16_SPARSE_DATA
#define Omega_Source_Omega_Public_Components_WeaponComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwapToNewWeaponMesh); \
	DECLARE_FUNCTION(execGetWeaponBasedOnType);


#define Omega_Source_Omega_Public_Components_WeaponComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwapToNewWeaponMesh); \
	DECLARE_FUNCTION(execGetWeaponBasedOnType);


#define Omega_Source_Omega_Public_Components_WeaponComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define Omega_Source_Omega_Public_Components_WeaponComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define Omega_Source_Omega_Public_Components_WeaponComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public:


#define Omega_Source_Omega_Public_Components_WeaponComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent)


#define Omega_Source_Omega_Public_Components_WeaponComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponEquipKeyName() { return STRUCT_OFFSET(UWeaponComponent, WeaponEquipKeyName); } \
	FORCEINLINE static uint32 __PPO__WeaponDeEquipKeyName() { return STRUCT_OFFSET(UWeaponComponent, WeaponDeEquipKeyName); } \
	FORCEINLINE static uint32 __PPO__WeaponAttackKeyName() { return STRUCT_OFFSET(UWeaponComponent, WeaponAttackKeyName); } \
	FORCEINLINE static uint32 __PPO__WeaponAimKeyName() { return STRUCT_OFFSET(UWeaponComponent, WeaponAimKeyName); } \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(UWeaponComponent, Character); } \
	FORCEINLINE static uint32 __PPO__AnimInstance() { return STRUCT_OFFSET(UWeaponComponent, AnimInstance); } \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(UWeaponComponent, InputComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(UWeaponComponent, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__PreviousWeapon() { return STRUCT_OFFSET(UWeaponComponent, PreviousWeapon); } \
	FORCEINLINE static uint32 __PPO__PrimaryGun() { return STRUCT_OFFSET(UWeaponComponent, PrimaryGun); } \
	FORCEINLINE static uint32 __PPO__SecondaryGun() { return STRUCT_OFFSET(UWeaponComponent, SecondaryGun); } \
	FORCEINLINE static uint32 __PPO__SideGun() { return STRUCT_OFFSET(UWeaponComponent, SideGun); } \
	FORCEINLINE static uint32 __PPO__WeaponsArray() { return STRUCT_OFFSET(UWeaponComponent, WeaponsArray); } \
	FORCEINLINE static uint32 __PPO__AvailableWeaponBlueprintReferences() { return STRUCT_OFFSET(UWeaponComponent, AvailableWeaponBlueprintReferences); }


#define Omega_Source_Omega_Public_Components_WeaponComponent_h_13_PROLOG
#define Omega_Source_Omega_Public_Components_WeaponComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Components_WeaponComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Components_WeaponComponent_h_16_SPARSE_DATA \
	Omega_Source_Omega_Public_Components_WeaponComponent_h_16_RPC_WRAPPERS \
	Omega_Source_Omega_Public_Components_WeaponComponent_h_16_INCLASS \
	Omega_Source_Omega_Public_Components_WeaponComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Components_WeaponComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Components_WeaponComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Components_WeaponComponent_h_16_SPARSE_DATA \
	Omega_Source_Omega_Public_Components_WeaponComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Components_WeaponComponent_h_16_INCLASS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Components_WeaponComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class UWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_Public_Components_WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
