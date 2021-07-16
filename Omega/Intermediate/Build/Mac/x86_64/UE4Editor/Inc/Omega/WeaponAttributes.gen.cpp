// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Omega/Public/DataTables/WeaponAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponAttributes() {}
// Cross Module References
	OMEGA_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAttributes();
	UPackage* Z_Construct_UPackage__Script_Omega();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References

static_assert(std::is_polymorphic<FWeaponAttributes>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponAttributes cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FWeaponAttributes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OMEGA_API uint32 Get_Z_Construct_UScriptStruct_FWeaponAttributes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponAttributes, Z_Construct_UPackage__Script_Omega(), TEXT("WeaponAttributes"), sizeof(FWeaponAttributes), Get_Z_Construct_UScriptStruct_FWeaponAttributes_Hash());
	}
	return Singleton;
}
template<> OMEGA_API UScriptStruct* StaticStruct<FWeaponAttributes>()
{
	return FWeaponAttributes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponAttributes(FWeaponAttributes::StaticStruct, TEXT("/Script/Omega"), TEXT("WeaponAttributes"), false, nullptr, nullptr);
static struct FScriptStruct_Omega_StaticRegisterNativesFWeaponAttributes
{
	FScriptStruct_Omega_StaticRegisterNativesFWeaponAttributes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponAttributes")),new UScriptStruct::TCppStructOps<FWeaponAttributes>);
	}
} ScriptStruct_Omega_StaticRegisterNativesFWeaponAttributes;
	struct Z_Construct_UScriptStruct_FWeaponAttributes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClipSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadShotDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadShotDamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSpeedDivider_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerSpeedDivider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponAttributes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_WeaponIcon_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param WeaponIcon - Set Weapon Icon For UI\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param WeaponIcon - Set Weapon Icon For UI" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_WeaponIcon = { "WeaponIcon", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, WeaponIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_WeaponIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_WeaponIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param WeaponName - Name of the Weapon\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param WeaponName - Name of the Weapon" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, WeaponName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_WeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_WeaponName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param MaxAmmo - Max Ammo player can store of weapon\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param MaxAmmo - Max Ammo player can store of weapon" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, MaxAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_ClipSize_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param AmmoPerClip - Size of the clip of the weapon\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param AmmoPerClip - Size of the clip of the weapon" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_ClipSize = { "ClipSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, ClipSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_ClipSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_ClipSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param CurrentAmmo - Ammo remaining in the clip\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param CurrentAmmo - Ammo remaining in the clip" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, CurrentAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param RateOfFire - firing speed of the weapon\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param RateOfFire - firing speed of the weapon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, RateOfFire), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_RateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_BulletSpread_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param BulletSpread - Weapon BulletSpread\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param BulletSpread - Weapon BulletSpread" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_BulletSpread = { "BulletSpread", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, BulletSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_BulletSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param Range - Range of the weapon\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param Range - Range of the weapon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, Range), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param Damage - Damage of the weapon\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param Damage - Damage of the weapon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_HeadShotDamageMultiplier_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param HeadShotDamageMultiplier - How times the damage to be increased when shot hit the SurfaceType_Head\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param HeadShotDamageMultiplier - How times the damage to be increased when shot hit the SurfaceType_Head" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_HeadShotDamageMultiplier = { "HeadShotDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, HeadShotDamageMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_HeadShotDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_HeadShotDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_PlayerSpeedDivider_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_PlayerSpeedDivider = { "PlayerSpeedDivider", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, PlayerSpeedDivider), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_PlayerSpeedDivider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_PlayerSpeedDivider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "Comment", "/**\n     * @Param DamageTypeClass - Specifies DamageType of the weapon.\n     **/" },
		{ "ModuleRelativePath", "Public/DataTables/WeaponAttributes.h" },
		{ "ToolTip", "@Param DamageTypeClass - Specifies DamageType of the weapon." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAttributes, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_DamageTypeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_WeaponIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_WeaponName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_ClipSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_BulletSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_HeadShotDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_PlayerSpeedDivider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_DamageTypeClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WeaponAttributes",
		sizeof(FWeaponAttributes),
		alignof(FWeaponAttributes),
		Z_Construct_UScriptStruct_FWeaponAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponAttributes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponAttributes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Omega();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponAttributes"), sizeof(FWeaponAttributes), Get_Z_Construct_UScriptStruct_FWeaponAttributes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponAttributes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponAttributes_Hash() { return 3670620466U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
