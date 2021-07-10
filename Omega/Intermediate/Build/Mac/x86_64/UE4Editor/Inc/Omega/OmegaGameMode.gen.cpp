// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Omega/OmegaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOmegaGameMode() {}
// Cross Module References
	OMEGA_API UClass* Z_Construct_UClass_AOmegaGameMode_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_AOmegaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Omega();
// End Cross Module References
	void AOmegaGameMode::StaticRegisterNativesAOmegaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AOmegaGameMode_NoRegister()
	{
		return AOmegaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOmegaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOmegaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOmegaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OmegaGameMode.h" },
		{ "ModuleRelativePath", "OmegaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOmegaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOmegaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOmegaGameMode_Statics::ClassParams = {
		&AOmegaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOmegaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOmegaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOmegaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOmegaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOmegaGameMode, 3449948605);
	template<> OMEGA_API UClass* StaticClass<AOmegaGameMode>()
	{
		return AOmegaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOmegaGameMode(Z_Construct_UClass_AOmegaGameMode, &AOmegaGameMode::StaticClass, TEXT("/Script/Omega"), TEXT("AOmegaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOmegaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
