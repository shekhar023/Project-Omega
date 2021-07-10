// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Omega/Public/Components/SInterfaceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInterfaceComponent() {}
// Cross Module References
	OMEGA_API UClass* Z_Construct_UClass_USInterfaceComponent_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_USInterfaceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Omega();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
// End Cross Module References
	void USInterfaceComponent::StaticRegisterNativesUSInterfaceComponent()
	{
	}
	UClass* Z_Construct_UClass_USInterfaceComponent_NoRegister()
	{
		return USInterfaceComponent::StaticClass();
	}
	struct Z_Construct_UClass_USInterfaceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanInteract_MetaData[];
#endif
		static void NewProp_bCanInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractTraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractTraceLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USInterfaceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInterfaceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SInterfaceComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SInterfaceComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_InputComponent_MetaData[] = {
		{ "Comment", "/** Component that handles input for this actor, if input is enabled. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SInterfaceComponent.h" },
		{ "ToolTip", "Component that handles input for this actor, if input is enabled." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USInterfaceComponent, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_bCanInteract_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**set @param bCanInteract true when want to interact with overlapping interactable objects**/" },
		{ "ModuleRelativePath", "Public/Components/SInterfaceComponent.h" },
		{ "ToolTip", "set @param bCanInteract true when want to interact with overlapping interactable objects*" },
	};
#endif
	void Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_bCanInteract_SetBit(void* Obj)
	{
		((USInterfaceComponent*)Obj)->bCanInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USInterfaceComponent), &Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_bCanInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_bCanInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_bCanInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_InteractTraceLength_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**set @param InteractTraceLength set the length of linetrace to interact with objects**/" },
		{ "ModuleRelativePath", "Public/Components/SInterfaceComponent.h" },
		{ "ToolTip", "set @param InteractTraceLength set the length of linetrace to interact with objects*" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_InteractTraceLength = { "InteractTraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USInterfaceComponent, InteractTraceLength), METADATA_PARAMS(Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_InteractTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_InteractTraceLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USInterfaceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_InputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_bCanInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInterfaceComponent_Statics::NewProp_InteractTraceLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USInterfaceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USInterfaceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USInterfaceComponent_Statics::ClassParams = {
		&USInterfaceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USInterfaceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USInterfaceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USInterfaceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USInterfaceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USInterfaceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USInterfaceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USInterfaceComponent, 3038377830);
	template<> OMEGA_API UClass* StaticClass<USInterfaceComponent>()
	{
		return USInterfaceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USInterfaceComponent(Z_Construct_UClass_USInterfaceComponent, &USInterfaceComponent::StaticClass, TEXT("/Script/Omega"), TEXT("USInterfaceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USInterfaceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
