// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OMEGA_SController_generated_h
#error "SController.generated.h already included, missing '#pragma once' in SController.h"
#endif
#define OMEGA_SController_generated_h

#define Omega_Source_Omega_Public_Controllers_SController_h_15_SPARSE_DATA
#define Omega_Source_Omega_Public_Controllers_SController_h_15_RPC_WRAPPERS
#define Omega_Source_Omega_Public_Controllers_SController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Omega_Source_Omega_Public_Controllers_SController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASController(); \
	friend struct Z_Construct_UClass_ASController_Statics; \
public: \
	DECLARE_CLASS(ASController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(ASController)


#define Omega_Source_Omega_Public_Controllers_SController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASController(); \
	friend struct Z_Construct_UClass_ASController_Statics; \
public: \
	DECLARE_CLASS(ASController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Omega"), NO_API) \
	DECLARE_SERIALIZER(ASController)


#define Omega_Source_Omega_Public_Controllers_SController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASController(ASController&&); \
	NO_API ASController(const ASController&); \
public:


#define Omega_Source_Omega_Public_Controllers_SController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASController(ASController&&); \
	NO_API ASController(const ASController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASController)


#define Omega_Source_Omega_Public_Controllers_SController_h_15_PRIVATE_PROPERTY_OFFSET
#define Omega_Source_Omega_Public_Controllers_SController_h_12_PROLOG
#define Omega_Source_Omega_Public_Controllers_SController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Controllers_SController_h_15_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Controllers_SController_h_15_SPARSE_DATA \
	Omega_Source_Omega_Public_Controllers_SController_h_15_RPC_WRAPPERS \
	Omega_Source_Omega_Public_Controllers_SController_h_15_INCLASS \
	Omega_Source_Omega_Public_Controllers_SController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Omega_Source_Omega_Public_Controllers_SController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Omega_Source_Omega_Public_Controllers_SController_h_15_PRIVATE_PROPERTY_OFFSET \
	Omega_Source_Omega_Public_Controllers_SController_h_15_SPARSE_DATA \
	Omega_Source_Omega_Public_Controllers_SController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Controllers_SController_h_15_INCLASS_NO_PURE_DECLS \
	Omega_Source_Omega_Public_Controllers_SController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OMEGA_API UClass* StaticClass<class ASController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Omega_Source_Omega_Public_Controllers_SController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
