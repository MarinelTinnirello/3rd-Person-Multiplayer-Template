// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/MPTypes/HitActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitActor() {}
// Cross Module References
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EHitActor();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitActor;
	static UEnum* EHitActor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHitActor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHitActor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EHitActor, Z_Construct_UPackage__Script_MPShooter(), TEXT("EHitActor"));
		}
		return Z_Registration_Info_UEnum_EHitActor.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EHitActor>()
	{
		return EHitActor_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EHitActor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EHitActor_Statics::Enumerators[] = {
		{ "EHitActor::EHA_None", (int64)EHitActor::EHA_None },
		{ "EHitActor::EHA_Character", (int64)EHitActor::EHA_Character },
		{ "EHitActor::EHA_Environment", (int64)EHitActor::EHA_Environment },
		{ "EHitActor::EHA_MAX", (int64)EHitActor::EHA_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EHitActor_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EHA_Character.DisplayName", "Character" },
		{ "EHA_Character.Name", "EHitActor::EHA_Character" },
		{ "EHA_Environment.DisplayName", "Environment" },
		{ "EHA_Environment.Name", "EHitActor::EHA_Environment" },
		{ "EHA_MAX.DisplayName", "DefaultMAX" },
		{ "EHA_MAX.Name", "EHitActor::EHA_MAX" },
		{ "EHA_None.DisplayName", "None" },
		{ "EHA_None.Name", "EHitActor::EHA_None" },
		{ "ModuleRelativePath", "MPTypes/HitActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EHitActor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EHitActor",
		"EHitActor",
		Z_Construct_UEnum_MPShooter_EHitActor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EHitActor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EHitActor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EHitActor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EHitActor()
	{
		if (!Z_Registration_Info_UEnum_EHitActor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitActor.InnerSingleton, Z_Construct_UEnum_MPShooter_EHitActor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHitActor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_HitActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_HitActor_h_Statics::EnumInfo[] = {
		{ EHitActor_StaticEnum, TEXT("EHitActor"), &Z_Registration_Info_UEnum_EHitActor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3780894590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_HitActor_h_1788570149(TEXT("/Script/MPShooter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_HitActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_HitActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
