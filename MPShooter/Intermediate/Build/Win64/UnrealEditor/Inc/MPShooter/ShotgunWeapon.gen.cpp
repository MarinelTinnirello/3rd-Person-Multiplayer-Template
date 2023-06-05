// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Ranged/ShotgunWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgunWeapon() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AShotgunWeapon_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AShotgunWeapon();
	MPSHOOTER_API UClass* Z_Construct_UClass_AHitScanWeapon();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	void AShotgunWeapon::StaticRegisterNativesAShotgunWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShotgunWeapon);
	UClass* Z_Construct_UClass_AShotgunWeapon_NoRegister()
	{
		return AShotgunWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AShotgunWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShotgunWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHitScanWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgunWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Ranged/ShotgunWeapon.h" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/ShotgunWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShotgunWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotgunWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShotgunWeapon_Statics::ClassParams = {
		&AShotgunWeapon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShotgunWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShotgunWeapon()
	{
		if (!Z_Registration_Info_UClass_AShotgunWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShotgunWeapon.OuterSingleton, Z_Construct_UClass_AShotgunWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShotgunWeapon.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AShotgunWeapon>()
	{
		return AShotgunWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShotgunWeapon);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ShotgunWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ShotgunWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShotgunWeapon, AShotgunWeapon::StaticClass, TEXT("AShotgunWeapon"), &Z_Registration_Info_UClass_AShotgunWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShotgunWeapon), 2813935615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ShotgunWeapon_h_1268319553(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ShotgunWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ShotgunWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
