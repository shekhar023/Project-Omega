// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OMEGA_OmegaGameMode_generated_h
#error "OmegaGameMode.generated.h already included, missing '#pragma once' in OmegaGameMode.h"
#endif
#define OMEGA_OmegaGameMode_generated_h

#define Omega_Source_Omega_OmegaGameMode_h_12_SPARSE_DATA
#define Omega_Source_Omega_OmegaGameMode_h_12_RPC_WRAPPERS
#define Omega_Source_Omega_OmegaGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Omega_Source_Omega_OmegaGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOmegaGameMode(); \
	friend struct Z_Construct_UClass_AOmegaGameMode_Statics; \
public: \
	DECLARE_CLASS(AOmegaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), OMEGA_API) \
	DECLARE_SERIALIZER(AOmegaGameMode)


#define Omega_Source_Omega_OmegaGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOmegaGameMode(); \
	friend struct Z_Construct_UClass_AOmegaGameMode_Statics; \
public: \
	DECLARE_CLASS(AOmegaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), OMEGA_API) \
	DECLARE_SERIALIZER(AOmegaGameMode)


#define Omega_Source_Omega_OmegaGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OMEGA_API AOmegaGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOmegaGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OMEGA_API, AOmegaGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOmegaGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OMEGA_API AOmegaGameMode(AOmegaGameMode&&); \
	OMEGA_API AOmegaGameMode(const AOmegaGameMode&); \
public:


#define Omega_Source_Omega_OmegaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OMEGA_API AOmegaGameMode(AOmegaGameMode&&); \
	OMEGA_API AOmegaGameMode(const AOmegaGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OMEGA_API, AOmegaGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOmegaGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOmegaGameMode)


#define Omega_Source_Omega_OmegaGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Omega_Source_Omega_OmegaGameMode_h_9_PROLOG
#define Omega_Source_Omega_OmegaGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_OmegaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_OmegaGameMode_h_12_SPARSE_DATA \
	Omega_Source_Omega_OmegaGameMode_h_12_RPC_WRAPPERS \
	Omega_Source_Omega_OmegaGameMode_h_12_INCLASS \
	Omega_Source_Omega_OmegaGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_OmegaGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_OmegaGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_OmegaGameMode_h_12_SPARSE_DATA \
	Omega_Source_Omega_OmegaGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_OmegaGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Omega_Source_Omega_OmegaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class AOmegaGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_OmegaGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
