// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/MPTypes/WeaponTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponTypes() {}
// Cross Module References
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EThrowableWeaponType();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EFireType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
	static UEnum* EWeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EWeaponType, Z_Construct_UPackage__Script_MPShooter(), TEXT("EWeaponType"));
		}
		return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EWeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EWeaponType_Statics::Enumerators[] = {
		{ "EWeaponType::EWT_Unequipped", (int64)EWeaponType::EWT_Unequipped },
		{ "EWeaponType::EWT_AssaultRifle", (int64)EWeaponType::EWT_AssaultRifle },
		{ "EWeaponType::EWT_RocketLauncher", (int64)EWeaponType::EWT_RocketLauncher },
		{ "EWeaponType::EWT_Pistol", (int64)EWeaponType::EWT_Pistol },
		{ "EWeaponType::EWT_SubmachineGun", (int64)EWeaponType::EWT_SubmachineGun },
		{ "EWeaponType::EWT_Shotgun", (int64)EWeaponType::EWT_Shotgun },
		{ "EWeaponType::EWT_SniperRifle", (int64)EWeaponType::EWT_SniperRifle },
		{ "EWeaponType::EWT_GrenadeLauncher", (int64)EWeaponType::EWT_GrenadeLauncher },
		{ "EWeaponType::EWT_Flamethrower", (int64)EWeaponType::EWT_Flamethrower },
		{ "EWeaponType::EWT_LightningGun", (int64)EWeaponType::EWT_LightningGun },
		{ "EWeaponType::EWT_MAX", (int64)EWeaponType::EWT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EWeaponType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EWT_AssaultRifle.DisplayName", "Assault Rifle" },
		{ "EWT_AssaultRifle.Name", "EWeaponType::EWT_AssaultRifle" },
		{ "EWT_Flamethrower.DisplayName", "Flamethrower" },
		{ "EWT_Flamethrower.Name", "EWeaponType::EWT_Flamethrower" },
		{ "EWT_GrenadeLauncher.DisplayName", "Grenade Launcher" },
		{ "EWT_GrenadeLauncher.Name", "EWeaponType::EWT_GrenadeLauncher" },
		{ "EWT_LightningGun.DisplayName", "LightningGun" },
		{ "EWT_LightningGun.Name", "EWeaponType::EWT_LightningGun" },
		{ "EWT_MAX.DisplayName", "DefaultMax" },
		{ "EWT_MAX.Name", "EWeaponType::EWT_MAX" },
		{ "EWT_Pistol.DisplayName", "Pistol" },
		{ "EWT_Pistol.Name", "EWeaponType::EWT_Pistol" },
		{ "EWT_RocketLauncher.DisplayName", "Rocket Launcher" },
		{ "EWT_RocketLauncher.Name", "EWeaponType::EWT_RocketLauncher" },
		{ "EWT_Shotgun.DisplayName", "Shotgun" },
		{ "EWT_Shotgun.Name", "EWeaponType::EWT_Shotgun" },
		{ "EWT_SniperRifle.DisplayName", "Sniper Rifle" },
		{ "EWT_SniperRifle.Name", "EWeaponType::EWT_SniperRifle" },
		{ "EWT_SubmachineGun.DisplayName", "Submachine Gun" },
		{ "EWT_SubmachineGun.Name", "EWeaponType::EWT_SubmachineGun" },
		{ "EWT_Unequipped.DisplayName", "Unequipped" },
		{ "EWT_Unequipped.Name", "EWeaponType::EWT_Unequipped" },
		{ "ModuleRelativePath", "MPTypes/WeaponTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EWeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EWeaponType",
		"EWeaponType",
		Z_Construct_UEnum_MPShooter_EWeaponType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EWeaponType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EWeaponType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EWeaponType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EWeaponType()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_MPShooter_EWeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThrowableWeaponType;
	static UEnum* EThrowableWeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EThrowableWeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EThrowableWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EThrowableWeaponType, Z_Construct_UPackage__Script_MPShooter(), TEXT("EThrowableWeaponType"));
		}
		return Z_Registration_Info_UEnum_EThrowableWeaponType.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EThrowableWeaponType>()
	{
		return EThrowableWeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EThrowableWeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EThrowableWeaponType_Statics::Enumerators[] = {
		{ "EThrowableWeaponType::ETWT_Unequipped", (int64)EThrowableWeaponType::ETWT_Unequipped },
		{ "EThrowableWeaponType::ETWT_Grenade", (int64)EThrowableWeaponType::ETWT_Grenade },
		{ "EThrowableWeaponType::ETWT_SmokeBomb", (int64)EThrowableWeaponType::ETWT_SmokeBomb },
		{ "EThrowableWeaponType::ETWT_StickyBomb", (int64)EThrowableWeaponType::ETWT_StickyBomb },
		{ "EThrowableWeaponType::ETWT_LightningBomb", (int64)EThrowableWeaponType::ETWT_LightningBomb },
		{ "EThrowableWeaponType::ETWT_Kunai", (int64)EThrowableWeaponType::ETWT_Kunai },
		{ "EThrowableWeaponType::ETWT_Boomerang", (int64)EThrowableWeaponType::ETWT_Boomerang },
		{ "EThrowableWeaponType::ETWT_Rock", (int64)EThrowableWeaponType::ETWT_Rock },
		{ "EThrowableWeaponType::ETWT_MAX", (int64)EThrowableWeaponType::ETWT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EThrowableWeaponType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ETWT_Boomerang.DisplayName", "Boomerang" },
		{ "ETWT_Boomerang.Name", "EThrowableWeaponType::ETWT_Boomerang" },
		{ "ETWT_Grenade.DisplayName", "Grenade" },
		{ "ETWT_Grenade.Name", "EThrowableWeaponType::ETWT_Grenade" },
		{ "ETWT_Kunai.DisplayName", "Kunai" },
		{ "ETWT_Kunai.Name", "EThrowableWeaponType::ETWT_Kunai" },
		{ "ETWT_LightningBomb.DisplayName", "Lightning Bomb" },
		{ "ETWT_LightningBomb.Name", "EThrowableWeaponType::ETWT_LightningBomb" },
		{ "ETWT_MAX.DisplayName", "DefaultMax" },
		{ "ETWT_MAX.Name", "EThrowableWeaponType::ETWT_MAX" },
		{ "ETWT_Rock.DisplayName", "Rock" },
		{ "ETWT_Rock.Name", "EThrowableWeaponType::ETWT_Rock" },
		{ "ETWT_SmokeBomb.DisplayName", "Smoke Bomb" },
		{ "ETWT_SmokeBomb.Name", "EThrowableWeaponType::ETWT_SmokeBomb" },
		{ "ETWT_StickyBomb.DisplayName", "Sticky Bomb" },
		{ "ETWT_StickyBomb.Name", "EThrowableWeaponType::ETWT_StickyBomb" },
		{ "ETWT_Unequipped.DisplayName", "Unequipped" },
		{ "ETWT_Unequipped.Name", "EThrowableWeaponType::ETWT_Unequipped" },
		{ "ModuleRelativePath", "MPTypes/WeaponTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EThrowableWeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EThrowableWeaponType",
		"EThrowableWeaponType",
		Z_Construct_UEnum_MPShooter_EThrowableWeaponType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EThrowableWeaponType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EThrowableWeaponType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EThrowableWeaponType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EThrowableWeaponType()
	{
		if (!Z_Registration_Info_UEnum_EThrowableWeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThrowableWeaponType.InnerSingleton, Z_Construct_UEnum_MPShooter_EThrowableWeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EThrowableWeaponType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFireType;
	static UEnum* EFireType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFireType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFireType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EFireType, Z_Construct_UPackage__Script_MPShooter(), TEXT("EFireType"));
		}
		return Z_Registration_Info_UEnum_EFireType.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EFireType>()
	{
		return EFireType_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EFireType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EFireType_Statics::Enumerators[] = {
		{ "EFireType::EFT_Projectile", (int64)EFireType::EFT_Projectile },
		{ "EFireType::EFT_HitScan", (int64)EFireType::EFT_HitScan },
		{ "EFireType::EFT_Shotgun", (int64)EFireType::EFT_Shotgun },
		{ "EFireType::EFT_Melee", (int64)EFireType::EFT_Melee },
		{ "EFireType::EFT_MAX", (int64)EFireType::EFT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EFireType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EFT_HitScan.DisplayName", "Hit Scan Weapon" },
		{ "EFT_HitScan.Name", "EFireType::EFT_HitScan" },
		{ "EFT_MAX.DisplayName", "DefaultMAX" },
		{ "EFT_MAX.Name", "EFireType::EFT_MAX" },
		{ "EFT_Melee.DisplayName", "Melee Weapon" },
		{ "EFT_Melee.Name", "EFireType::EFT_Melee" },
		{ "EFT_Projectile.DisplayName", "Projectile Weapon" },
		{ "EFT_Projectile.Name", "EFireType::EFT_Projectile" },
		{ "EFT_Shotgun.DisplayName", "Shotgun Weapon" },
		{ "EFT_Shotgun.Name", "EFireType::EFT_Shotgun" },
		{ "ModuleRelativePath", "MPTypes/WeaponTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EFireType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EFireType",
		"EFireType",
		Z_Construct_UEnum_MPShooter_EFireType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EFireType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EFireType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EFireType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EFireType()
	{
		if (!Z_Registration_Info_UEnum_EFireType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFireType.InnerSingleton, Z_Construct_UEnum_MPShooter_EFireType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFireType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_WeaponTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_WeaponTypes_h_Statics::EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 644637240U) },
		{ EThrowableWeaponType_StaticEnum, TEXT("EThrowableWeaponType"), &Z_Registration_Info_UEnum_EThrowableWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3911890291U) },
		{ EFireType_StaticEnum, TEXT("EFireType"), &Z_Registration_Info_UEnum_EFireType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 300460462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_WeaponTypes_h_1803547788(TEXT("/Script/MPShooter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_WeaponTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_WeaponTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
