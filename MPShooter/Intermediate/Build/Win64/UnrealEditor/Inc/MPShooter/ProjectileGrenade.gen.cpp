// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Ranged/Projectile/ProjectileGrenade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileGrenade() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectileGrenade_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectileGrenade();
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProjectileGrenade::execOnBounce)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBounce(Z_Param_Out_ImpactResult,Z_Param_Out_ImpactVelocity);
		P_NATIVE_END;
	}
	void AProjectileGrenade::StaticRegisterNativesAProjectileGrenade()
	{
		UClass* Class = AProjectileGrenade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBounce", &AProjectileGrenade::execOnBounce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics
	{
		struct ProjectileGrenade_eventOnBounce_Parms
		{
			FHitResult ImpactResult;
			FVector ImpactVelocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileGrenade_eventOnBounce_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactResult_MetaData)) }; // 1416937132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileGrenade_eventOnBounce_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::NewProp_ImpactVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/ProjectileGrenade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileGrenade, nullptr, "OnBounce", nullptr, nullptr, sizeof(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::ProjectileGrenade_eventOnBounce_Parms), Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectileGrenade_OnBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileGrenade_OnBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileGrenade);
	UClass* Z_Construct_UClass_AProjectileGrenade_NoRegister()
	{
		return AProjectileGrenade::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BounceSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BounceSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectileGrenade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectileGrenade_OnBounce, "OnBounce" }, // 2763391349
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileGrenade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Ranged/Projectile/ProjectileGrenade.h" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/ProjectileGrenade.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_BounceSound_MetaData[] = {
		{ "Category", "Projectile Grenade Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/ProjectileGrenade.h" },
		{ "ToolTip", "Bounce sound made as the projectile bounces on a surface." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_BounceSound = { "BounceSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileGrenade, BounceSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_BounceSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_BounceSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_BounceSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileGrenade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileGrenade_Statics::ClassParams = {
		&AProjectileGrenade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileGrenade()
	{
		if (!Z_Registration_Info_UClass_AProjectileGrenade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileGrenade.OuterSingleton, Z_Construct_UClass_AProjectileGrenade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileGrenade.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AProjectileGrenade>()
	{
		return AProjectileGrenade::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileGrenade);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_ProjectileGrenade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_ProjectileGrenade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileGrenade, AProjectileGrenade::StaticClass, TEXT("AProjectileGrenade"), &Z_Registration_Info_UClass_AProjectileGrenade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileGrenade), 953930785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_ProjectileGrenade_h_1183344352(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_ProjectileGrenade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_ProjectileGrenade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
