// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OMEGA_SInterfaceComponent_generated_h
#error "SInterfaceComponent.generated.h already included, missing '#pragma once' in SInterfaceComponent.h"
#endif
#define OMEGA_SInterfaceComponent_generated_h

#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_SPARSE_DATA
#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_RPC_WRAPPERS
#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSInterfaceComponent(); \
	friend struct Z_Construct_UClass_USInterfaceComponent_Statics; \
public: \
	DECLARE_CLASS(USInterfaceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(USInterfaceComponent)


#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSInterfaceComponent(); \
	friend struct Z_Construct_UClass_USInterfaceComponent_Statics; \
public: \
	DECLARE_CLASS(USInterfaceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(USInterfaceComponent)


#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USInterfaceComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInterfaceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInterfaceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInterfaceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USInterfaceComponent(USInterfaceComponent&&); \
	NO_API USInterfaceComponent(const USInterfaceComponent&); \
public:


#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USInterfaceComponent(USInterfaceComponent&&); \
	NO_API USInterfaceComponent(const USInterfaceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInterfaceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInterfaceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USInterfaceComponent)


#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(USInterfaceComponent, InputComponent); }


#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_10_PROLOG
#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_SPARSE_DATA \
	Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_RPC_WRAPPERS \
	Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_INCLASS \
	Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_SPARSE_DATA \
	Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_INCLASS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Components_SInterfaceComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class USInterfaceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_Public_Components_SInterfaceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
