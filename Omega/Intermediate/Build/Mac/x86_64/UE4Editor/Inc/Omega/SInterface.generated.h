// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef OMEGA_SInterface_generated_h
#error "SInterface.generated.h already included, missing '#pragma once' in SInterface.h"
#endif
#define OMEGA_SInterface_generated_h

#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_SPARSE_DATA
#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_RPC_WRAPPERS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus);


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus);


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_EVENT_PARMS \
	struct SInterface_eventOnInteract_Parms \
	{ \
		AActor* Caller; \
	};


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_CALLBACK_WRAPPERS
#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OMEGA_API USInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OMEGA_API, USInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OMEGA_API USInterface(USInterface&&); \
	OMEGA_API USInterface(const USInterface&); \
public:


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OMEGA_API USInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OMEGA_API USInterface(USInterface&&); \
	OMEGA_API USInterface(const USInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OMEGA_API, USInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USInterface)


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSInterface(); \
	friend struct Z_Construct_UClass_USInterface_Statics; \
public: \
	DECLARE_CLASS(USInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Omega"), OMEGA_API) \
	DECLARE_SERIALIZER(USInterface)


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISInterface() {} \
public: \
	typedef USInterface UClassType; \
	typedef ISInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISInterface() {} \
public: \
	typedef USInterface UClassType; \
	typedef ISInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_10_PROLOG \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_EVENT_PARMS


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_SPARSE_DATA \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_RPC_WRAPPERS \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_CALLBACK_WRAPPERS \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Interfaces_SInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_SPARSE_DATA \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_CALLBACK_WRAPPERS \
	Omega_Source_Omega_Public_Interfaces_SInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class USInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_Public_Interfaces_SInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
