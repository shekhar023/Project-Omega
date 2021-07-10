// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Omega/Public/Interfaces/SInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInterface() {}
// Cross Module References
	OMEGA_API UClass* Z_Construct_UClass_USInterface_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_USInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Omega();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISInterface::execEndFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndFocus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISInterface::execStartFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFocus_Implementation();
		P_NATIVE_END;
	}
	void ISInterface::EndFocus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EndFocus instead.");
	}
	void ISInterface::OnInteract(AActor* Caller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
	}
	void ISInterface::StartFocus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartFocus instead.");
	}
	void USInterface::StaticRegisterNativesUSInterface()
	{
		UClass* Class = USInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndFocus", &ISInterface::execEndFocus },
			{ "StartFocus", &ISInterface::execStartFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USInterface_EndFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USInterface_EndFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interfaces/SInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USInterface_EndFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInterface, nullptr, "EndFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USInterface_EndFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USInterface_EndFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USInterface_EndFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USInterface_EndFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USInterface_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USInterface_OnInteract_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SInterface_eventOnInteract_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USInterface_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USInterface_OnInteract_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USInterface_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interfaces/SInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USInterface_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInterface, nullptr, "OnInteract", nullptr, nullptr, sizeof(SInterface_eventOnInteract_Parms), Z_Construct_UFunction_USInterface_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USInterface_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USInterface_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USInterface_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USInterface_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USInterface_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USInterface_StartFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USInterface_StartFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interfaces/SInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USInterface_StartFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInterface, nullptr, "StartFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USInterface_StartFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USInterface_StartFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USInterface_StartFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USInterface_StartFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USInterface_NoRegister()
	{
		return USInterface::StaticClass();
	}
	struct Z_Construct_UClass_USInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USInterface_EndFocus, "EndFocus" }, // 4111923700
		{ &Z_Construct_UFunction_USInterface_OnInteract, "OnInteract" }, // 15316311
		{ &Z_Construct_UFunction_USInterface_StartFocus, "StartFocus" }, // 2761869647
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/SInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USInterface_Statics::ClassParams = {
		&USInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USInterface, 4009295735);
	template<> OMEGA_API UClass* StaticClass<USInterface>()
	{
		return USInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USInterface(Z_Construct_UClass_USInterface, &USInterface::StaticClass, TEXT("/Script/Omega"), TEXT("USInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USInterface);
	static FName NAME_USInterface_EndFocus = FName(TEXT("EndFocus"));
	void ISInterface::Execute_EndFocus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USInterface_EndFocus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISInterface*)(O->GetNativeInterfaceAddress(USInterface::StaticClass())))
		{
			I->EndFocus_Implementation();
		}
	}
	static FName NAME_USInterface_OnInteract = FName(TEXT("OnInteract"));
	void ISInterface::Execute_OnInteract(UObject* O, AActor* Caller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USInterface::StaticClass()));
		SInterface_eventOnInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USInterface_OnInteract);
		if (Func)
		{
			Parms.Caller=Caller;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USInterface_StartFocus = FName(TEXT("StartFocus"));
	void ISInterface::Execute_StartFocus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USInterface_StartFocus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISInterface*)(O->GetNativeInterfaceAddress(USInterface::StaticClass())))
		{
			I->StartFocus_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
