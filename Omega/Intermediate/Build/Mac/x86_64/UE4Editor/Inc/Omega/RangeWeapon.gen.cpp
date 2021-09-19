// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Omega/Public/Weapons/RangeWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeWeapon() {}
// Cross Module References
	OMEGA_API UEnum* Z_Construct_UEnum_Omega_EWeaponShootType();
	UPackage* Z_Construct_UPackage__Script_Omega();
	OMEGA_API UEnum* Z_Construct_UEnum_Omega_EWeaponHitType();
	OMEGA_API UClass* Z_Construct_UClass_ARangeWeapon_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_ARangeWeapon();
	OMEGA_API UClass* Z_Construct_UClass_AWeapon();
	OMEGA_API UClass* Z_Construct_UClass_USHitResultComponent_NoRegister();
	OMEGA_API UClass* Z_Construct_UClass_ASProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* EWeaponShootType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Omega_EWeaponShootType, Z_Construct_UPackage__Script_Omega(), TEXT("EWeaponShootType"));
		}
		return Singleton;
	}
	template<> OMEGA_API UEnum* StaticEnum<EWeaponShootType>()
	{
		return EWeaponShootType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponShootType(EWeaponShootType_StaticEnum, TEXT("/Script/Omega"), TEXT("EWeaponShootType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Omega_EWeaponShootType_Hash() { return 2129510079U; }
	UEnum* Z_Construct_UEnum_Omega_EWeaponShootType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Omega();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponShootType"), 0, Get_Z_Construct_UEnum_Omega_EWeaponShootType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponShootType::Automatic", (int64)EWeaponShootType::Automatic },
				{ "EWeaponShootType::SingleShot", (int64)EWeaponShootType::SingleShot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Automatic.Comment", "/* For currently equipped weapon uses HitScanTrace */" },
				{ "Automatic.Name", "EWeaponShootType::Automatic" },
				{ "Automatic.ToolTip", "For currently equipped weapon uses HitScanTrace" },
				{ "BlueprintType", "true" },
				{ "Comment", "//MARK:ENUM for Weapon Fire Type\n" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
				{ "SingleShot.Comment", "/* For currently equipped weapon uses Projectile */" },
				{ "SingleShot.Name", "EWeaponShootType::SingleShot" },
				{ "SingleShot.ToolTip", "For currently equipped weapon uses Projectile" },
				{ "ToolTip", "MARK:ENUM for Weapon Fire Type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Omega,
				nullptr,
				"EWeaponShootType",
				"EWeaponShootType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWeaponHitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Omega_EWeaponHitType, Z_Construct_UPackage__Script_Omega(), TEXT("EWeaponHitType"));
		}
		return Singleton;
	}
	template<> OMEGA_API UEnum* StaticEnum<EWeaponHitType>()
	{
		return EWeaponHitType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponHitType(EWeaponHitType_StaticEnum, TEXT("/Script/Omega"), TEXT("EWeaponHitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Omega_EWeaponHitType_Hash() { return 3211609772U; }
	UEnum* Z_Construct_UEnum_Omega_EWeaponHitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Omega();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponHitType"), 0, Get_Z_Construct_UEnum_Omega_EWeaponHitType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponHitType::HitScanTrace", (int64)EWeaponHitType::HitScanTrace },
				{ "EWeaponHitType::Projectile", (int64)EWeaponHitType::Projectile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n *///MARK:ENUM for Weapon Fire trace Type\n" },
				{ "HitScanTrace.Comment", "/* For currently equipped weapon uses HitScanTrace */" },
				{ "HitScanTrace.Name", "EWeaponHitType::HitScanTrace" },
				{ "HitScanTrace.ToolTip", "For currently equipped weapon uses HitScanTrace" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
				{ "Projectile.Comment", "/* For currently equipped weapon uses Projectile */" },
				{ "Projectile.Name", "EWeaponHitType::Projectile" },
				{ "Projectile.ToolTip", "For currently equipped weapon uses Projectile" },
				{ "ToolTip", "//MARK:ENUM for Weapon Fire trace Type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Omega,
				nullptr,
				"EWeaponHitType",
				"EWeaponHitType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ARangeWeapon::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void ARangeWeapon::StaticRegisterNativesARangeWeapon()
	{
		UClass* Class = ARangeWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ARangeWeapon::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARangeWeapon_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARangeWeapon_Fire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Fires the weapon (if fire rate allows it) and applies damage to any hit enemies*/" },
		{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
		{ "ToolTip", "Fires the weapon (if fire rate allows it) and applies damage to any hit enemies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARangeWeapon_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARangeWeapon, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARangeWeapon_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARangeWeapon_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARangeWeapon_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARangeWeapon_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARangeWeapon_NoRegister()
	{
		return ARangeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ARangeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResultComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitResultComp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShootType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShootType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnLocationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpawnLocationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoPickupMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARangeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Omega,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARangeWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARangeWeapon_Fire, "Fire" }, // 4293077921
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/RangeWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_HitResultComp_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_HitResultComp = { "HitResultComp", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, HitResultComp), Z_Construct_UClass_USHitResultComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_HitResultComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_HitResultComp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_FireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_FireType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_FireType = { "FireType", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, FireType), Z_Construct_UEnum_Omega_EWeaponHitType, METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_FireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_FireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ShootType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ShootType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ShootType = { "ShootType", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, ShootType), Z_Construct_UEnum_Omega_EWeaponShootType, METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ShootType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ShootType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_WeaponProjectile_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/*The projectile that will be spanwed at the weapon's muzzle*/" },
		{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
		{ "ToolTip", "The projectile that will be spanwed at the weapon's muzzle" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_WeaponProjectile = { "WeaponProjectile", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, WeaponProjectile), Z_Construct_UClass_ASProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_WeaponProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_WeaponProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ProjectileSpeedMultiplier_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/*Projectile's speed multiplier*/" },
		{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
		{ "ToolTip", "Projectile's speed multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ProjectileSpeedMultiplier = { "ProjectileSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, ProjectileSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ProjectileSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ProjectileSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ProjectileSpawnLocationMultiplier_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/*The projectiles should get spawned a bit infront of the muzzle so they won't get stuck*/" },
		{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
		{ "ToolTip", "The projectiles should get spawned a bit infront of the muzzle so they won't get stuck" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ProjectileSpawnLocationMultiplier = { "ProjectileSpawnLocationMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, ProjectileSpawnLocationMultiplier), METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ProjectileSpawnLocationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ProjectileSpawnLocationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_AmmoPickupMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/*The static mesh of the ammo pickup*/" },
		{ "ModuleRelativePath", "Public/Weapons/RangeWeapon.h" },
		{ "ToolTip", "The static mesh of the ammo pickup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_AmmoPickupMesh = { "AmmoPickupMesh", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, AmmoPickupMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_AmmoPickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_AmmoPickupMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARangeWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_HitResultComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_FireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_FireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ShootType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ShootType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_WeaponProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ProjectileSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_ProjectileSpawnLocationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_AmmoPickupMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARangeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangeWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARangeWeapon_Statics::ClassParams = {
		&ARangeWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARangeWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARangeWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARangeWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARangeWeapon, 421941250);
	template<> OMEGA_API UClass* StaticClass<ARangeWeapon>()
	{
		return ARangeWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARangeWeapon(Z_Construct_UClass_ARangeWeapon, &ARangeWeapon::StaticClass, TEXT("/Script/Omega"), TEXT("ARangeWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARangeWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
