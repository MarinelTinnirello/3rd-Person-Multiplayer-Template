// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/MPTypes/BoneBoxType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneBoxType() {}
// Cross Module References
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EBoneBoxType();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneBoxType;
	static UEnum* EBoneBoxType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneBoxType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneBoxType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EBoneBoxType, Z_Construct_UPackage__Script_MPShooter(), TEXT("EBoneBoxType"));
		}
		return Z_Registration_Info_UEnum_EBoneBoxType.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EBoneBoxType>()
	{
		return EBoneBoxType_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EBoneBoxType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EBoneBoxType_Statics::Enumerators[] = {
		{ "EBoneBoxType::EBBT_Head", (int64)EBoneBoxType::EBBT_Head },
		{ "EBoneBoxType::EBBT_Pelvis", (int64)EBoneBoxType::EBBT_Pelvis },
		{ "EBoneBoxType::EBBT_Spine02", (int64)EBoneBoxType::EBBT_Spine02 },
		{ "EBoneBoxType::EBBT_Spine03", (int64)EBoneBoxType::EBBT_Spine03 },
		{ "EBoneBoxType::EBBT_UpperarmL", (int64)EBoneBoxType::EBBT_UpperarmL },
		{ "EBoneBoxType::EBBT_UpperarmR", (int64)EBoneBoxType::EBBT_UpperarmR },
		{ "EBoneBoxType::EBBT_LowerarmL", (int64)EBoneBoxType::EBBT_LowerarmL },
		{ "EBoneBoxType::EBBT_LowerarmR", (int64)EBoneBoxType::EBBT_LowerarmR },
		{ "EBoneBoxType::EBBT_HandL", (int64)EBoneBoxType::EBBT_HandL },
		{ "EBoneBoxType::EBBT_HandR", (int64)EBoneBoxType::EBBT_HandR },
		{ "EBoneBoxType::EBBT_ThighL", (int64)EBoneBoxType::EBBT_ThighL },
		{ "EBoneBoxType::EBBT_ThighR", (int64)EBoneBoxType::EBBT_ThighR },
		{ "EBoneBoxType::EBBT_CalfL", (int64)EBoneBoxType::EBBT_CalfL },
		{ "EBoneBoxType::EBBT_CalfR", (int64)EBoneBoxType::EBBT_CalfR },
		{ "EBoneBoxType::EBBT_FootL", (int64)EBoneBoxType::EBBT_FootL },
		{ "EBoneBoxType::EBBT_FootR", (int64)EBoneBoxType::EBBT_FootR },
		{ "EBoneBoxType::EBBT_Backpack", (int64)EBoneBoxType::EBBT_Backpack },
		{ "EBoneBoxType::EBBT_Blanket", (int64)EBoneBoxType::EBBT_Blanket },
		{ "EBoneBoxType::EBBT_MAX", (int64)EBoneBoxType::EBBT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EBoneBoxType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EBBT_Backpack.DisplayName", "Backpack" },
		{ "EBBT_Backpack.Name", "EBoneBoxType::EBBT_Backpack" },
		{ "EBBT_Blanket.DisplayName", "Blanket" },
		{ "EBBT_Blanket.Name", "EBoneBoxType::EBBT_Blanket" },
		{ "EBBT_CalfL.DisplayName", "Calf_L" },
		{ "EBBT_CalfL.Name", "EBoneBoxType::EBBT_CalfL" },
		{ "EBBT_CalfR.DisplayName", "Calf_R" },
		{ "EBBT_CalfR.Name", "EBoneBoxType::EBBT_CalfR" },
		{ "EBBT_FootL.DisplayName", "Foot_L" },
		{ "EBBT_FootL.Name", "EBoneBoxType::EBBT_FootL" },
		{ "EBBT_FootR.DisplayName", "Foot_R" },
		{ "EBBT_FootR.Name", "EBoneBoxType::EBBT_FootR" },
		{ "EBBT_HandL.DisplayName", "Hand_L" },
		{ "EBBT_HandL.Name", "EBoneBoxType::EBBT_HandL" },
		{ "EBBT_HandR.DisplayName", "Hand_R" },
		{ "EBBT_HandR.Name", "EBoneBoxType::EBBT_HandR" },
		{ "EBBT_Head.DisplayName", "Head" },
		{ "EBBT_Head.Name", "EBoneBoxType::EBBT_Head" },
		{ "EBBT_LowerarmL.DisplayName", "Lowerarm_L" },
		{ "EBBT_LowerarmL.Name", "EBoneBoxType::EBBT_LowerarmL" },
		{ "EBBT_LowerarmR.DisplayName", "Lowerarm_R" },
		{ "EBBT_LowerarmR.Name", "EBoneBoxType::EBBT_LowerarmR" },
		{ "EBBT_MAX.DisplayName", "DefaultMAX" },
		{ "EBBT_MAX.Name", "EBoneBoxType::EBBT_MAX" },
		{ "EBBT_Pelvis.DisplayName", "Pelvis" },
		{ "EBBT_Pelvis.Name", "EBoneBoxType::EBBT_Pelvis" },
		{ "EBBT_Spine02.DisplayName", "Spine_02" },
		{ "EBBT_Spine02.Name", "EBoneBoxType::EBBT_Spine02" },
		{ "EBBT_Spine03.DisplayName", "Spine_03" },
		{ "EBBT_Spine03.Name", "EBoneBoxType::EBBT_Spine03" },
		{ "EBBT_ThighL.DisplayName", "Thigh_L" },
		{ "EBBT_ThighL.Name", "EBoneBoxType::EBBT_ThighL" },
		{ "EBBT_ThighR.DisplayName", "Thigh_R" },
		{ "EBBT_ThighR.Name", "EBoneBoxType::EBBT_ThighR" },
		{ "EBBT_UpperarmL.DisplayName", "Upperarm_L" },
		{ "EBBT_UpperarmL.Name", "EBoneBoxType::EBBT_UpperarmL" },
		{ "EBBT_UpperarmR.DisplayName", "Upperarm_R" },
		{ "EBBT_UpperarmR.Name", "EBoneBoxType::EBBT_UpperarmR" },
		{ "ModuleRelativePath", "MPTypes/BoneBoxType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EBoneBoxType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EBoneBoxType",
		"EBoneBoxType",
		Z_Construct_UEnum_MPShooter_EBoneBoxType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EBoneBoxType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EBoneBoxType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EBoneBoxType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EBoneBoxType()
	{
		if (!Z_Registration_Info_UEnum_EBoneBoxType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneBoxType.InnerSingleton, Z_Construct_UEnum_MPShooter_EBoneBoxType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneBoxType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_BoneBoxType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_BoneBoxType_h_Statics::EnumInfo[] = {
		{ EBoneBoxType_StaticEnum, TEXT("EBoneBoxType"), &Z_Registration_Info_UEnum_EBoneBoxType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2340832756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_BoneBoxType_h_3957143429(TEXT("/Script/MPShooter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_BoneBoxType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_BoneBoxType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
