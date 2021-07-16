// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Omega/Public/Components/WeaponComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}
// Cross Module References
	OMEGA_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_UWeaponComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Omega();
	OMEGA_API UEnum* Z_Construct_UEnum_Omega_EWeaponType();
	OMEGA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_USPlayerAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UWeaponComponent::execSwitchAnimLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchAnimLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponComponent::execSwapToNewWeaponMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapToNewWeaponMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponComponent::execGetWeaponBasedOnType)
	{
		P_GET_ENUM(EWeaponType,Z_Param_WeaponType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeapon**)Z_Param__Result=P_THIS->GetWeaponBasedOnType(EWeaponType(Z_Param_WeaponType));
		P_NATIVE_END;
	}
	void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
	{
		UClass* Class = UWeaponComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeaponBasedOnType", &UWeaponComponent::execGetWeaponBasedOnType },
			{ "SwapToNewWeaponMesh", &UWeaponComponent::execSwapToNewWeaponMesh },
			{ "SwitchAnimLayer", &UWeaponComponent::execSwitchAnimLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics
	{
		struct WeaponComponent_eventGetWeaponBasedOnType_Parms
		{
			EWeaponType WeaponType;
			AWeapon* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponComponent_eventGetWeaponBasedOnType_Parms, WeaponType), Z_Construct_UEnum_Omega_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponComponent_eventGetWeaponBasedOnType_Parms, ReturnValue), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::NewProp_WeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::NewProp_WeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "GetWeaponBasedOnType", nullptr, nullptr, sizeof(WeaponComponent_eventGetWeaponBasedOnType_Parms), Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponComponent_SwapToNewWeaponMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_SwapToNewWeaponMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* Update the weapon mesh to the newly equipped weapon, this is triggered during an anim montage.\n        NOTE: Requires an AnimNotify created in the Equip animation to tell us when to swap the meshes. */" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
		{ "ToolTip", "Update the weapon mesh to the newly equipped weapon, this is triggered during an anim montage.\n       NOTE: Requires an AnimNotify created in the Equip animation to tell us when to swap the meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_SwapToNewWeaponMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "SwapToNewWeaponMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_SwapToNewWeaponMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SwapToNewWeaponMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_SwapToNewWeaponMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponComponent_SwapToNewWeaponMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponComponent_SwitchAnimLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_SwitchAnimLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* Update the weapon mesh to the newly equipped weapon, this is triggered during an anim montage.\n        NOTE: Requires an AnimNotify created in the Equip animation to tell us when to swap the meshes. */" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
		{ "ToolTip", "Update the weapon mesh to the newly equipped weapon, this is triggered during an anim montage.\n       NOTE: Requires an AnimNotify created in the Equip animation to tell us when to swap the meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_SwitchAnimLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "SwitchAnimLayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_SwitchAnimLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_SwitchAnimLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_SwitchAnimLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponComponent_SwitchAnimLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
	{
		return UWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEquipKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponEquipKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDeEquipKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponDeEquipKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttackKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponAttackKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAimKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponAimKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWeaponEquipped_MetaData[];
#endif
		static void NewProp_bIsWeaponEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponsArray;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AvailableWeaponBlueprintReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableWeaponBlueprintReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableWeaponBlueprintReferences;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponComponent_GetWeaponBasedOnType, "GetWeaponBasedOnType" }, // 3340148962
		{ &Z_Construct_UFunction_UWeaponComponent_SwapToNewWeaponMesh, "SwapToNewWeaponMesh" }, // 1736824945
		{ &Z_Construct_UFunction_UWeaponComponent_SwitchAnimLayer, "SwitchAnimLayer" }, // 3168818525
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/WeaponComponent.h" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponEquipKeyName_MetaData[] = {
		{ "Category", "Animations Keys List" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponEquipKeyName = { "WeaponEquipKeyName", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponComponent, WeaponEquipKeyName), METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponEquipKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponEquipKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponDeEquipKeyName_MetaData[] = {
		{ "Category", "Animations Keys List" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponDeEquipKeyName = { "WeaponDeEquipKeyName", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponComponent, WeaponDeEquipKeyName), METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponDeEquipKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponDeEquipKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponAttackKeyName_MetaData[] = {
		{ "Category", "Animations Keys List" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponAttackKeyName = { "WeaponAttackKeyName", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponComponent, WeaponAttackKeyName), METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponAttackKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponAttackKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponAimKeyName_MetaData[] = {
		{ "Category", "Animations Keys List" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponAimKeyName = { "WeaponAimKeyName", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponComponent, WeaponAimKeyName), METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponAimKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponAimKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponComponent, Character), Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponComponent, AnimInstance), Z_Construct_UClass_USPlayerAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AnimInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_InputComponent_MetaData[] = {
		{ "Comment", "// Component that handles input for this actor, if input is enabled.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
		{ "ToolTip", "Component that handles input for this actor, if input is enabled." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponComponent, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsWeaponEquipped_MetaData[] = {
		{ "Category", "Weapons" },
		{ "Comment", "//Start Game with Weapon Equipped or Not. True for with and false without.\n//and to track weather the weapon is equipped or not\n" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
		{ "ToolTip", "Start Game with Weapon Equipped or Not. True for with and false without.\nand to track weather the weapon is equipped or not" },
	};
#endif
	void Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsWeaponEquipped_SetBit(void* Obj)
	{
		((UWeaponComponent*)Obj)->bIsWeaponEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsWeaponEquipped = { "bIsWeaponEquipped", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponComponent), &Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsWeaponEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsWeaponEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsWeaponEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "Comment", "/*Holds a reference to the currently bIsWeaponEquipped weapon*/" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
		{ "ToolTip", "Holds a reference to the currently bIsWeaponEquipped weapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponComponent, CurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponsArray_Inner = { "WeaponsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponsArray_MetaData[] = {
		{ "Comment", "/*Weapons array. It's used to hold a reference to all available weapons*/" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
		{ "ToolTip", "Weapons array. It's used to hold a reference to all available weapons" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponsArray = { "WeaponsArray", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponComponent, WeaponsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponsArray_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AvailableWeaponBlueprintReferences_Inner = { "AvailableWeaponBlueprintReferences", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AvailableWeaponBlueprintReferences_MetaData[] = {
		{ "Category", "Weapons" },
		{ "Comment", "//Set limit of weapon inventory to 3.\n" },
		{ "ModuleRelativePath", "Public/Components/WeaponComponent.h" },
		{ "ToolTip", "Set limit of weapon inventory to 3." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AvailableWeaponBlueprintReferences = { "AvailableWeaponBlueprintReferences", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponComponent, AvailableWeaponBlueprintReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AvailableWeaponBlueprintReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AvailableWeaponBlueprintReferences_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponEquipKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponDeEquipKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponAttackKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponAimKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_InputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsWeaponEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AvailableWeaponBlueprintReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_AvailableWeaponBlueprintReferences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
		&UWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponComponent, 3552697965);
	template<> OMEGA_API UClass* StaticClass<UWeaponComponent>()
	{
		return UWeaponComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponComponent(Z_Construct_UClass_UWeaponComponent, &UWeaponComponent::StaticClass, TEXT("/Script/Omega"), TEXT("UWeaponComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
