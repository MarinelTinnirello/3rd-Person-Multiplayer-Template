// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Ranged/HitScanWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitScanWeapon() {}
// Cross Module References
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanWeaponDataTable();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponProperties();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AHitScanWeapon();
	MPSHOOTER_API UClass* Z_Construct_UClass_AWeapon();
// End Cross Module References

static_assert(std::is_polymorphic<FHitScanWeaponDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FHitScanWeaponDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitScanWeaponDataTable;
class UScriptStruct* FHitScanWeaponDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitScanWeaponDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitScanWeaponDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanWeaponDataTable, Z_Construct_UPackage__Script_MPShooter(), TEXT("HitScanWeaponDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_HitScanWeaponDataTable.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FHitScanWeaponDataTable>()
{
	return FHitScanWeaponDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeamParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOfSlugs_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumOfSlugs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanWeaponDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_WeaponProperties_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
		{ "ToolTip", "General weapon properties of a weapon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_WeaponProperties = { "WeaponProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanWeaponDataTable, WeaponProperties), Z_Construct_UScriptStruct_FWeaponProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_WeaponProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_WeaponProperties_MetaData)) }; // 3259765496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "Hit Scan Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
		{ "ToolTip", "Particles seen on impact from the weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanWeaponDataTable, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Hit Scan Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
		{ "ToolTip", "Sound that plays on impact with the environment or character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanWeaponDataTable, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_BeamParticles_MetaData[] = {
		{ "Category", "Hit Scan Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
		{ "ToolTip", "Particles trailing from the weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_BeamParticles = { "BeamParticles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanWeaponDataTable, BeamParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_BeamParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_BeamParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_NumOfSlugs_MetaData[] = {
		{ "Category", "Shotgun Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
		{ "ToolTip", "Number of slugs shot from the weapon." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_NumOfSlugs = { "NumOfSlugs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanWeaponDataTable, NumOfSlugs), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_NumOfSlugs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_NumOfSlugs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_WeaponProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_ImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_BeamParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewProp_NumOfSlugs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"HitScanWeaponDataTable",
		sizeof(FHitScanWeaponDataTable),
		alignof(FHitScanWeaponDataTable),
		Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanWeaponDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_HitScanWeaponDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitScanWeaponDataTable.InnerSingleton, Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HitScanWeaponDataTable.InnerSingleton;
	}
	void AHitScanWeapon::StaticRegisterNativesAHitScanWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHitScanWeapon);
	UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister()
	{
		return AHitScanWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AHitScanWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeamParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOfSlugs_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumOfSlugs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHitScanWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "Hit Scan Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
		{ "ToolTip", "Particles seen on impact from the weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Hit Scan Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
		{ "ToolTip", "Sound that plays on impact with the environment or character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticles_MetaData[] = {
		{ "Category", "Hit Scan Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
		{ "ToolTip", "Particles trailing from the weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticles = { "BeamParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, BeamParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_NumOfSlugs_MetaData[] = {
		{ "Category", "Shotgun Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/HitScanWeapon.h" },
		{ "ToolTip", "Number of slugs shot from the weapon." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_NumOfSlugs = { "NumOfSlugs", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, NumOfSlugs), METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_NumOfSlugs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_NumOfSlugs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_NumOfSlugs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHitScanWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitScanWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitScanWeapon_Statics::ClassParams = {
		&AHitScanWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHitScanWeapon()
	{
		if (!Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton, Z_Construct_UClass_AHitScanWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AHitScanWeapon>()
	{
		return AHitScanWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHitScanWeapon);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_HitScanWeapon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_HitScanWeapon_h_Statics::ScriptStructInfo[] = {
		{ FHitScanWeaponDataTable::StaticStruct, Z_Construct_UScriptStruct_FHitScanWeaponDataTable_Statics::NewStructOps, TEXT("HitScanWeaponDataTable"), &Z_Registration_Info_UScriptStruct_HitScanWeaponDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitScanWeaponDataTable), 793255034U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_HitScanWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHitScanWeapon, AHitScanWeapon::StaticClass, TEXT("AHitScanWeapon"), &Z_Registration_Info_UClass_AHitScanWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitScanWeapon), 909348355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_HitScanWeapon_h_1824386209(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_HitScanWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_HitScanWeapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_HitScanWeapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_HitScanWeapon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
