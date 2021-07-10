// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OMEGA_SPlayerAnimInstance_generated_h
#error "SPlayerAnimInstance.generated.h already included, missing '#pragma once' in SPlayerAnimInstance.h"
#endif
#define OMEGA_SPlayerAnimInstance_generated_h

#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_SPARSE_DATA
#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWeaponEquipped); \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWeaponEquipped); \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_USPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(USPlayerAnimInstance)


#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_USPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(USPlayerAnimInstance)


#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USPlayerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USPlayerAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USPlayerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USPlayerAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USPlayerAnimInstance(USPlayerAnimInstance&&); \
	NO_API USPlayerAnimInstance(const USPlayerAnimInstance&); \
public:


#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USPlayerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USPlayerAnimInstance(USPlayerAnimInstance&&); \
	NO_API USPlayerAnimInstance(const USPlayerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USPlayerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USPlayerAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USPlayerAnimInstance)


#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_12_PROLOG
#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_SPARSE_DATA \
	Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_RPC_WRAPPERS \
	Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_INCLASS \
	Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_SPARSE_DATA \
	Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class USPlayerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_Public_AnimInstances_SPlayerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
