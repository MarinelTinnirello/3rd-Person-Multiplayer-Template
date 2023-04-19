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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOfSlugs_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumOfSlugs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgunWeapon_Statics::NewProp_NumOfSlugs_MetaData[] = {
		{ "Category", "Shotgun Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/ShotgunWeapon.h" },
		{ "ToolTip", "Number of slugs shot from the weapon." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AShotgunWeapon_Statics::NewProp_NumOfSlugs = { "NumOfSlugs", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotgunWeapon, NumOfSlugs), METADATA_PARAMS(Z_Construct_UClass_AShotgunWeapon_Statics::NewProp_NumOfSlugs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunWeapon_Statics::NewProp_NumOfSlugs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShotgunWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgunWeapon_Statics::NewProp_NumOfSlugs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShotgunWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotgunWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShotgunWeapon_Statics::ClassParams = {
		&AShotgunWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShotgunWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunWeapon_Statics::PropPointers),
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
		{ Z_Construct_UClass_AShotgunWeapon, AShotgunWeapon::StaticClass, TEXT("AShotgunWeapon"), &Z_Registration_Info_UClass_AShotgunWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShotgunWeapon), 2029909380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ShotgunWeapon_h_1318068500(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ShotgunWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ShotgunWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
