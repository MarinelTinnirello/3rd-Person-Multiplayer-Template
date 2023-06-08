// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Ranged/Projectile/ProjectileBullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileBullet() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectileBullet_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectileBullet();
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	void AProjectileBullet::StaticRegisterNativesAProjectileBullet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileBullet);
	UClass* Z_Construct_UClass_AProjectileBullet_NoRegister()
	{
		return AProjectileBullet::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Ranged/Projectile/ProjectileBullet.h" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/ProjectileBullet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileBullet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileBullet_Statics::ClassParams = {
		&AProjectileBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileBullet()
	{
		if (!Z_Registration_Info_UClass_AProjectileBullet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileBullet.OuterSingleton, Z_Construct_UClass_AProjectileBullet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileBullet.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AProjectileBullet>()
	{
		return AProjectileBullet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileBullet);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_ProjectileBullet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_ProjectileBullet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileBullet, AProjectileBullet::StaticClass, TEXT("AProjectileBullet"), &Z_Registration_Info_UClass_AProjectileBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileBullet), 512032533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_ProjectileBullet_h_1357180571(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_ProjectileBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_ProjectileBullet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
