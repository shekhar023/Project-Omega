// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Omega/Public/DataTables/PlayerAnimationsDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimationsDataTable() {}
// Cross Module References
	OMEGA_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnimations();
	UPackage* Z_Construct_UPackage__Script_Omega();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_UPlayerAnimationsDataTable_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_UPlayerAnimationsDataTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
// End Cross Module References

static_assert(std::is_polymorphic<FPlayerAnimations>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlayerAnimations cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPlayerAnimations::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OMEGA_API uint32 Get_Z_Construct_UScriptStruct_FPlayerAnimations_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerAnimations, Z_Construct_UPackage__Script_Omega(), TEXT("PlayerAnimations"), sizeof(FPlayerAnimations), Get_Z_Construct_UScriptStruct_FPlayerAnimations_Hash());
	}
	return Singleton;
}
template<> OMEGA_API UScriptStruct* StaticStruct<FPlayerAnimations>()
{
	return FPlayerAnimations::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerAnimations(FPlayerAnimations::StaticStruct, TEXT("/Script/Omega"), TEXT("PlayerAnimations"), false, nullptr, nullptr);
static struct FScriptStruct_Omega_StaticRegisterNativesFPlayerAnimations
{
	FScriptStruct_Omega_StaticRegisterNativesFPlayerAnimations()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerAnimations")),new UScriptStruct::TCppStructOps<FPlayerAnimations>);
	}
} ScriptStruct_Omega_StaticRegisterNativesFPlayerAnimations;
	struct Z_Construct_UScriptStruct_FPlayerAnimations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationRef_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimationRef_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimationRef;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimSystem_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimSystem_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnimations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataTables/PlayerAnimationsDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerAnimations>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimationRef_ValueProp = { "AnimationRef", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimationRef_Key_KeyProp = { "AnimationRef_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimationRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataTables/PlayerAnimationsDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimationRef = { "AnimationRef", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnimations, AnimationRef), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimationRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimationRef_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimSystem_ValueProp = { "AnimSystem", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimSystem_Key_KeyProp = { "AnimSystem_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimSystem_MetaData[] = {
		{ "Category", "PlayerAnimations" },
		{ "ModuleRelativePath", "Public/DataTables/PlayerAnimationsDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimSystem = { "AnimSystem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnimations, AnimSystem), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerAnimations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimationRef_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimationRef_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimationRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimSystem_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimSystem_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnimations_Statics::NewProp_AnimSystem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerAnimations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlayerAnimations",
		sizeof(FPlayerAnimations),
		alignof(FPlayerAnimations),
		Z_Construct_UScriptStruct_FPlayerAnimations_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnimations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnimations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnimations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnimations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerAnimations_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Omega();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerAnimations"), sizeof(FPlayerAnimations), Get_Z_Construct_UScriptStruct_FPlayerAnimations_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerAnimations_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerAnimations_Hash() { return 59996716U; }
	void UPlayerAnimationsDataTable::StaticRegisterNativesUPlayerAnimationsDataTable()
	{
	}
	UClass* Z_Construct_UClass_UPlayerAnimationsDataTable_NoRegister()
	{
		return UPlayerAnimationsDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimationsDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimationsDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimationsDataTable_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DataTables/PlayerAnimationsDataTable.h" },
		{ "ModuleRelativePath", "Public/DataTables/PlayerAnimationsDataTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimationsDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimationsDataTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimationsDataTable_Statics::ClassParams = {
		&UPlayerAnimationsDataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimationsDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimationsDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnimationsDataTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAnimationsDataTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAnimationsDataTable, 4046143480);
	template<> OMEGA_API UClass* StaticClass<UPlayerAnimationsDataTable>()
	{
		return UPlayerAnimationsDataTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAnimationsDataTable(Z_Construct_UClass_UPlayerAnimationsDataTable, &UPlayerAnimationsDataTable::StaticClass, TEXT("/Script/Omega"), TEXT("UPlayerAnimationsDataTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimationsDataTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
