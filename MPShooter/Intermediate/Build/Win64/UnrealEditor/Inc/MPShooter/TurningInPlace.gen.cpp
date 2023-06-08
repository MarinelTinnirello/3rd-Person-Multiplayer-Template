// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/MPTypes/TurningInPlace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurningInPlace() {}
// Cross Module References
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_ETurningInPlace();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETurningInPlace;
	static UEnum* ETurningInPlace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETurningInPlace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETurningInPlace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_ETurningInPlace, Z_Construct_UPackage__Script_MPShooter(), TEXT("ETurningInPlace"));
		}
		return Z_Registration_Info_UEnum_ETurningInPlace.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<ETurningInPlace>()
	{
		return ETurningInPlace_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_ETurningInPlace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_ETurningInPlace_Statics::Enumerators[] = {
		{ "ETurningInPlace::ETIP_Left", (int64)ETurningInPlace::ETIP_Left },
		{ "ETurningInPlace::ETIP_Right", (int64)ETurningInPlace::ETIP_Right },
		{ "ETurningInPlace::ETIP_NotTurning", (int64)ETurningInPlace::ETIP_NotTurning },
		{ "ETurningInPlace::ETIP_MAX", (int64)ETurningInPlace::ETIP_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_ETurningInPlace_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ETIP_Left.DisplayName", "Turning Left" },
		{ "ETIP_Left.Name", "ETurningInPlace::ETIP_Left" },
		{ "ETIP_MAX.DisplayName", "DefaultMAX" },
		{ "ETIP_MAX.Name", "ETurningInPlace::ETIP_MAX" },
		{ "ETIP_NotTurning.DisplayName", "Not Turning" },
		{ "ETIP_NotTurning.Name", "ETurningInPlace::ETIP_NotTurning" },
		{ "ETIP_Right.DisplayName", "Turning Right" },
		{ "ETIP_Right.Name", "ETurningInPlace::ETIP_Right" },
		{ "ModuleRelativePath", "MPTypes/TurningInPlace.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_ETurningInPlace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"ETurningInPlace",
		"ETurningInPlace",
		Z_Construct_UEnum_MPShooter_ETurningInPlace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_ETurningInPlace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_ETurningInPlace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_ETurningInPlace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_ETurningInPlace()
	{
		if (!Z_Registration_Info_UEnum_ETurningInPlace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETurningInPlace.InnerSingleton, Z_Construct_UEnum_MPShooter_ETurningInPlace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETurningInPlace.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_TurningInPlace_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_TurningInPlace_h_Statics::EnumInfo[] = {
		{ ETurningInPlace_StaticEnum, TEXT("ETurningInPlace"), &Z_Registration_Info_UEnum_ETurningInPlace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 397390742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_TurningInPlace_h_3209008862(TEXT("/Script/MPShooter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_TurningInPlace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_TurningInPlace_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
