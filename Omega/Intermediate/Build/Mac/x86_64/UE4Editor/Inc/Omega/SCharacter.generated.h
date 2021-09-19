// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OMEGA_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define OMEGA_SCharacter_generated_h

#define Omega_Source_Omega_Public_Characters_SCharacter_h_15_SPARSE_DATA
#define Omega_Source_Omega_Public_Characters_SCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayHit); \
	DECLARE_FUNCTION(execOnPlayerDead);


#define Omega_Source_Omega_Public_Characters_SCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayHit); \
	DECLARE_FUNCTION(execOnPlayerDead);


#define Omega_Source_Omega_Public_Characters_SCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, AOmegaCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define Omega_Source_Omega_Public_Characters_SCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, AOmegaCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define Omega_Source_Omega_Public_Characters_SCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define Omega_Source_Omega_Public_Characters_SCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define Omega_Source_Omega_Public_Characters_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HitSound() { return STRUCT_OFFSET(ASCharacter, HitSound); } \
	FORCEINLINE static uint32 __PPO__DeathSound() { return STRUCT_OFFSET(ASCharacter, DeathSound); }


#define Omega_Source_Omega_Public_Characters_SCharacter_h_12_PROLOG
#define Omega_Source_Omega_Public_Characters_SCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Characters_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Characters_SCharacter_h_15_SPARSE_DATA \
	Omega_Source_Omega_Public_Characters_SCharacter_h_15_RPC_WRAPPERS \
	Omega_Source_Omega_Public_Characters_SCharacter_h_15_INCLASS \
	Omega_Source_Omega_Public_Characters_SCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Characters_SCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Characters_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Characters_SCharacter_h_15_SPARSE_DATA \
	Omega_Source_Omega_Public_Characters_SCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Characters_SCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Characters_SCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_Public_Characters_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
