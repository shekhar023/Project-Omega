// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
struct FVector;
class UPrimitiveComponent;
class UDamageType;
#ifdef OMEGA_SHealthComponent_generated_h
#error "SHealthComponent.generated.h already included, missing '#pragma once' in SHealthComponent.h"
#endif
#define OMEGA_SHealthComponent_generated_h

#define Omega_Source_Omega_Public_Components_SHealthComponent_h_11_DELEGATE \
struct _Script_Omega_eventOnHit_Parms \
{ \
	bool bIsDead; \
}; \
static inline void FOnHit_DelegateWrapper(const FMulticastScriptDelegate& OnHit, bool bIsDead) \
{ \
	_Script_Omega_eventOnHit_Parms Parms; \
	Parms.bIsDead=bIsDead ? true : false; \
	OnHit.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Omega_Source_Omega_Public_Components_SHealthComponent_h_10_DELEGATE \
static inline void FOnDead_DelegateWrapper(const FMulticastScriptDelegate& OnDead) \
{ \
	OnDead.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Omega_Source_Omega_Public_Components_SHealthComponent_h_16_SPARSE_DATA
#define Omega_Source_Omega_Public_Components_SHealthComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetbIsDead); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define Omega_Source_Omega_Public_Components_SHealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetbIsDead); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define Omega_Source_Omega_Public_Components_SHealthComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend struct Z_Construct_UClass_USHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent)


#define Omega_Source_Omega_Public_Components_SHealthComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend struct Z_Construct_UClass_USHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent)


#define Omega_Source_Omega_Public_Components_SHealthComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public:


#define Omega_Source_Omega_Public_Components_SHealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USHealthComponent)


#define Omega_Source_Omega_Public_Components_SHealthComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define Omega_Source_Omega_Public_Components_SHealthComponent_h_13_PROLOG
#define Omega_Source_Omega_Public_Components_SHealthComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Components_SHealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Components_SHealthComponent_h_16_SPARSE_DATA \
	Omega_Source_Omega_Public_Components_SHealthComponent_h_16_RPC_WRAPPERS \
	Omega_Source_Omega_Public_Components_SHealthComponent_h_16_INCLASS \
	Omega_Source_Omega_Public_Components_SHealthComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Components_SHealthComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Components_SHealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Components_SHealthComponent_h_16_SPARSE_DATA \
	Omega_Source_Omega_Public_Components_SHealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Components_SHealthComponent_h_16_INCLASS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Components_SHealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class USHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_Public_Components_SHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
