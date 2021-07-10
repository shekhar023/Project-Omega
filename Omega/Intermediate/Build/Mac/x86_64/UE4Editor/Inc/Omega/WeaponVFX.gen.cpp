// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Omega/Public/DataTables/WeaponVFX.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponVFX() {}
// Cross Module References
	OMEGA_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponVFX();
	UPackage* Z_Construct_UPackage__Script_Omega();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FWeaponVFX>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponVFX cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FWeaponVFX::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OMEGA_API uint32 Get_Z_Construct_UScriptStruct_FWeaponVFX_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponVFX, Z_Construct_UPackage__Script_Omega(), TEXT("WeaponVFX"), sizeof(FWeaponVFX), Get_Z_Construct_UScriptStruct_FWeaponVFX_Hash());
	}
	return Singleton;
}
template<> OMEGA_API UScriptStruct* StaticStruct<FWeaponVFX>()
{
	return FWeaponVFX::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponVFX(FWeaponVFX::StaticStruct, TEXT("/Script/Omega"), TEXT("WeaponVFX"), false, nullptr, nullptr);
static struct FScriptStruct_Omega_StaticRegisterNativesFWeaponVFX
{
	FScriptStruct_Omega_StaticRegisterNativesFWeaponVFX()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponVFX")),new UScriptStruct::TCppStructOps<FWeaponVFX>);
	}
} ScriptStruct_Omega_StaticRegisterNativesFWeaponVFX;
	struct Z_Construct_UScriptStruct_FWeaponVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TracerEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MuzzleFlashSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSoundSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MuzzleSoundSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactSoundSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ImpactSoundSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerEffectSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TracerEffectSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVFX_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponVFX.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponVFX>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Comment", "/*Particle system used for ranged weapons only*/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponVFX.h" },
		{ "ToolTip", "Particle system used for ranged weapons only" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVFX, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleSound_MetaData[] = {
		{ "Comment", "/**\n     * @Param - MuzzleSound - Sound to play from the muzzle.\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponVFX.h" },
		{ "ToolTip", "@Param - MuzzleSound - Sound to play from the muzzle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleSound = { "MuzzleSound", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVFX, MuzzleSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Comment", "/**\n     * @Param - ImpactSound - Play Impact sound at hit location.\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponVFX.h" },
		{ "ToolTip", "@Param - ImpactSound - Play Impact sound at hit location." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVFX, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_TracerEffect_MetaData[] = {
		{ "Comment", "/**\n     * @Param - TracerEffect - Particle system to spawn Tracer.\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponVFX.h" },
		{ "ToolTip", "@Param - TracerEffect - Particle system to spawn Tracer." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_TracerEffect = { "TracerEffect", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVFX, TracerEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_TracerEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_TracerEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleFlashSystem_MetaData[] = {
		{ "Category", "WeaponVFX" },
		{ "Comment", "/*The Particle System (if any) associated with the specific weapon's level - leave this empty for melee weapons*/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponVFX.h" },
		{ "ToolTip", "The Particle System (if any) associated with the specific weapon's level - leave this empty for melee weapons" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleFlashSystem = { "MuzzleFlashSystem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVFX, MuzzleFlashSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleFlashSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleFlashSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleSoundSystem_MetaData[] = {
		{ "Category", "WeaponVFX" },
		{ "Comment", "/*The Sound System (if any) associated with the specific weapon's level - leave this empty for melee weapons*/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponVFX.h" },
		{ "ToolTip", "The Sound System (if any) associated with the specific weapon's level - leave this empty for melee weapons" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleSoundSystem = { "MuzzleSoundSystem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVFX, MuzzleSoundSystem), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleSoundSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleSoundSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_ImpactSoundSystem_MetaData[] = {
		{ "Category", "WeaponVFX" },
		{ "Comment", "/*The Sound System (if any) associated with the specific weapon's level - leave this empty for melee weapons*/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponVFX.h" },
		{ "ToolTip", "The Sound System (if any) associated with the specific weapon's level - leave this empty for melee weapons" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_ImpactSoundSystem = { "ImpactSoundSystem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVFX, ImpactSoundSystem), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_ImpactSoundSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_ImpactSoundSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_TracerEffectSystem_MetaData[] = {
		{ "Category", "WeaponVFX" },
		{ "Comment", "/*The Particle System (if any) associated with the specific weapon's level - leave this empty for melee weapons*/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponVFX.h" },
		{ "ToolTip", "The Particle System (if any) associated with the specific weapon's level - leave this empty for melee weapons" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_TracerEffectSystem = { "TracerEffectSystem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVFX, TracerEffectSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_TracerEffectSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_TracerEffectSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponVFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_ImpactSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_TracerEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleFlashSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_MuzzleSoundSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_ImpactSoundSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVFX_Statics::NewProp_TracerEffectSystem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponVFX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WeaponVFX",
		sizeof(FWeaponVFX),
		alignof(FWeaponVFX),
		Z_Construct_UScriptStruct_FWeaponVFX_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVFX_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVFX_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVFX_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponVFX()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponVFX_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Omega();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponVFX"), sizeof(FWeaponVFX), Get_Z_Construct_UScriptStruct_FWeaponVFX_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponVFX_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponVFX_Hash() { return 1201163603U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
