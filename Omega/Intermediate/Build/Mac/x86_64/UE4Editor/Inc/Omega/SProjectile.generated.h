// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OMEGA_SProjectile_generated_h
#error "SProjectile.generated.h already included, missing '#pragma once' in SProjectile.h"
#endif
#define OMEGA_SProjectile_generated_h

#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_SPARSE_DATA
#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_RPC_WRAPPERS
#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASProjectile(); \
	friend struct Z_Construct_UClass_ASProjectile_Statics; \
public: \
	DECLARE_CLASS(ASProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(ASProjectile)


#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASProjectile(); \
	friend struct Z_Construct_UClass_ASProjectile_Statics; \
public: \
	DECLARE_CLASS(ASProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(ASProjectile)


#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectile(ASProjectile&&); \
	NO_API ASProjectile(const ASProjectile&); \
public:


#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectile(ASProjectile&&); \
	NO_API ASProjectile(const ASProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASProjectile)


#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ASProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ASProjectile, CollisionComp); }


#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_9_PROLOG
#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_SPARSE_DATA \
	Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_RPC_WRAPPERS \
	Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_INCLASS \
	Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_SPARSE_DATA \
	Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Projectiles_SProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class ASProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_Public_Projectiles_SProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
