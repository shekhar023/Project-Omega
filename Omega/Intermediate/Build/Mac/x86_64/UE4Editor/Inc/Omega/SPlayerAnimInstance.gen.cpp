// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Omega/Public/AnimInstances/SPlayerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerAnimInstance() {}
// Cross Module References
	OMEGA_API UClass* Z_Construct_UClass_USPlayerAnimInstance_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_USPlayerAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Omega();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USPlayerAnimInstance::execSetAim)
	{
		P_GET_UBOOL(Z_Param_IsAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAim(Z_Param_IsAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPlayerAnimInstance::execSwitchAnimLayer)
	{
		P_GET_OBJECT(UClass,Z_Param_AnimClass);
		P_GET_UBOOL(Z_Param_SwitchToDefaultClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchAnimLayer(Z_Param_AnimClass,Z_Param_SwitchToDefaultClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPlayerAnimInstance::execSpeedAndDirectionCalculation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeedAndDirectionCalculation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPlayerAnimInstance::execUpdateAnimationProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties();
		P_NATIVE_END;
	}
	void USPlayerAnimInstance::StaticRegisterNativesUSPlayerAnimInstance()
	{
		UClass* Class = USPlayerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAim", &USPlayerAnimInstance::execSetAim },
			{ "SpeedAndDirectionCalculation", &USPlayerAnimInstance::execSpeedAndDirectionCalculation },
			{ "SwitchAnimLayer", &USPlayerAnimInstance::execSwitchAnimLayer },
			{ "UpdateAnimationProperties", &USPlayerAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics
	{
		struct SPlayerAnimInstance_eventSetAim_Parms
		{
			bool IsAiming;
		};
		static void NewProp_IsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::NewProp_IsAiming_SetBit(void* Obj)
	{
		((SPlayerAnimInstance_eventSetAim_Parms*)Obj)->IsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::NewProp_IsAiming = { "IsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SPlayerAnimInstance_eventSetAim_Parms), &Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::NewProp_IsAiming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::NewProp_IsAiming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPlayerAnimInstance, nullptr, "SetAim", nullptr, nullptr, sizeof(SPlayerAnimInstance_eventSetAim_Parms), Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USPlayerAnimInstance_SetAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USPlayerAnimInstance_SetAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPlayerAnimInstance_SpeedAndDirectionCalculation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAnimInstance_SpeedAndDirectionCalculation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USPlayerAnimInstance_SpeedAndDirectionCalculation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPlayerAnimInstance, nullptr, "SpeedAndDirectionCalculation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAnimInstance_SpeedAndDirectionCalculation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAnimInstance_SpeedAndDirectionCalculation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USPlayerAnimInstance_SpeedAndDirectionCalculation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USPlayerAnimInstance_SpeedAndDirectionCalculation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics
	{
		struct SPlayerAnimInstance_eventSwitchAnimLayer_Parms
		{
			UClass* AnimClass;
			bool SwitchToDefaultClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimClass;
		static void NewProp_SwitchToDefaultClass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SwitchToDefaultClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::NewProp_AnimClass = { "AnimClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerAnimInstance_eventSwitchAnimLayer_Parms, AnimClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::NewProp_SwitchToDefaultClass_SetBit(void* Obj)
	{
		((SPlayerAnimInstance_eventSwitchAnimLayer_Parms*)Obj)->SwitchToDefaultClass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::NewProp_SwitchToDefaultClass = { "SwitchToDefaultClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SPlayerAnimInstance_eventSwitchAnimLayer_Parms), &Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::NewProp_SwitchToDefaultClass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::NewProp_AnimClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::NewProp_SwitchToDefaultClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPlayerAnimInstance, nullptr, "SwitchAnimLayer", nullptr, nullptr, sizeof(SPlayerAnimInstance_eventSwitchAnimLayer_Parms), Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPlayerAnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "UpdateAnimationProperties" },
		{ "Comment", "// Used by the animation blueprint to update the animation properties above\n// and decide what animations to play.\n" },
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
		{ "ToolTip", "Used by the animation blueprint to update the animation properties above\nand decide what animations to play." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USPlayerAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPlayerAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USPlayerAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USPlayerAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USPlayerAnimInstance_NoRegister()
	{
		return USPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInAir_MetaData[];
#endif
		static void NewProp_IsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USPlayerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USPlayerAnimInstance_SetAim, "SetAim" }, // 3856805033
		{ &Z_Construct_UFunction_USPlayerAnimInstance_SpeedAndDirectionCalculation, "SpeedAndDirectionCalculation" }, // 3004257990
		{ &Z_Construct_UFunction_USPlayerAnimInstance_SwitchAnimLayer, "SwitchAnimLayer" }, // 737115841
		{ &Z_Construct_UFunction_USPlayerAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 3169383463
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/SPlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USPlayerAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "SAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USPlayerAnimInstance, Character), Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_IsInAir_MetaData[] = {
		{ "Category", "SAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_IsInAir_SetBit(void* Obj)
	{
		((USPlayerAnimInstance*)Obj)->IsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USPlayerAnimInstance), &Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_IsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_IsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "SAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USPlayerAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "SAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USPlayerAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "Category", "SAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((USPlayerAnimInstance*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USPlayerAnimInstance), &Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bIsAiming_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USPlayerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_IsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bIsAiming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USPlayerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USPlayerAnimInstance_Statics::ClassParams = {
		&USPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USPlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USPlayerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USPlayerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USPlayerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USPlayerAnimInstance, 1158457604);
	template<> OMEGA_API UClass* StaticClass<USPlayerAnimInstance>()
	{
		return USPlayerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USPlayerAnimInstance(Z_Construct_UClass_USPlayerAnimInstance, &USPlayerAnimInstance::StaticClass, TEXT("/Script/Omega"), TEXT("USPlayerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USPlayerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
