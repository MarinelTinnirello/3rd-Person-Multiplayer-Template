// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Melee/MeleeWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeWeapon() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AMeleeWeapon_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMeleeWeapon();
	MPSHOOTER_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void AMeleeWeapon::StaticRegisterNativesAMeleeWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMeleeWeapon);
	UClass* Z_Construct_UClass_AMeleeWeapon_NoRegister()
	{
		return AMeleeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AMeleeWeapon_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeleeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Melee/MeleeWeapon.h" },
		{ "ModuleRelativePath", "Item/Weapon/Melee/MeleeWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "Melee Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Melee/MeleeWeapon.h" },
		{ "ToolTip", "Particles seen on impact from the weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeleeWeapon, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Melee Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Melee/MeleeWeapon.h" },
		{ "ToolTip", "Sound that plays on impact with the environment or character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeleeWeapon, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_BeamParticles_MetaData[] = {
		{ "Category", "Melee Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Melee/MeleeWeapon.h" },
		{ "ToolTip", "Particles trailing from the weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_BeamParticles = { "BeamParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeleeWeapon, BeamParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_BeamParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_BeamParticles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMeleeWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_ImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_BeamParticles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeleeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeleeWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMeleeWeapon_Statics::ClassParams = {
		&AMeleeWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMeleeWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeleeWeapon()
	{
		if (!Z_Registration_Info_UClass_AMeleeWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeleeWeapon.OuterSingleton, Z_Construct_UClass_AMeleeWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMeleeWeapon.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AMeleeWeapon>()
	{
		return AMeleeWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeWeapon);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Melee_MeleeWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Melee_MeleeWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMeleeWeapon, AMeleeWeapon::StaticClass, TEXT("AMeleeWeapon"), &Z_Registration_Info_UClass_AMeleeWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeleeWeapon), 3163441611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Melee_MeleeWeapon_h_193178310(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Melee_MeleeWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Melee_MeleeWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
