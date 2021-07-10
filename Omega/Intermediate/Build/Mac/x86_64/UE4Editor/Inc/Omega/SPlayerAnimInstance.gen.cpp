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
// End Cross Module References
	DEFINE_FUNCTION(USPlayerAnimInstance::execSetWeaponEquipped)
	{
		P_GET_UBOOL(Z_Param_WeaponEquipped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeaponEquipped(Z_Param_WeaponEquipped);
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
			{ "SetWeaponEquipped", &USPlayerAnimInstance::execSetWeaponEquipped },
			{ "UpdateAnimationProperties", &USPlayerAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics
	{
		struct SPlayerAnimInstance_eventSetWeaponEquipped_Parms
		{
			bool WeaponEquipped;
		};
		static void NewProp_WeaponEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::NewProp_WeaponEquipped_SetBit(void* Obj)
	{
		((SPlayerAnimInstance_eventSetWeaponEquipped_Parms*)Obj)->WeaponEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::NewProp_WeaponEquipped = { "WeaponEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SPlayerAnimInstance_eventSetWeaponEquipped_Parms), &Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::NewProp_WeaponEquipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::NewProp_WeaponEquipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPlayerAnimInstance, nullptr, "SetWeaponEquipped", nullptr, nullptr, sizeof(SPlayerAnimInstance_eventSetWeaponEquipped_Parms), Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEquipWeapon_MetaData[];
#endif
		static void NewProp_bEquipWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquipWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USPlayerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USPlayerAnimInstance_SetWeaponEquipped, "SetWeaponEquipped" }, // 3506881736
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bEquipWeapon_MetaData[] = {
		{ "Category", "SAnimInstance" },
		{ "Comment", "// Indicates whether the ZombieCharacter is idle or not.\n" },
		{ "ModuleRelativePath", "Public/AnimInstances/SPlayerAnimInstance.h" },
		{ "ToolTip", "Indicates whether the ZombieCharacter is idle or not." },
	};
#endif
	void Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bEquipWeapon_SetBit(void* Obj)
	{
		((USPlayerAnimInstance*)Obj)->bEquipWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bEquipWeapon = { "bEquipWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USPlayerAnimInstance), &Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bEquipWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bEquipWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bEquipWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USPlayerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPlayerAnimInstance_Statics::NewProp_bEquipWeapon,
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
	IMPLEMENT_CLASS(USPlayerAnimInstance, 3357808444);
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
