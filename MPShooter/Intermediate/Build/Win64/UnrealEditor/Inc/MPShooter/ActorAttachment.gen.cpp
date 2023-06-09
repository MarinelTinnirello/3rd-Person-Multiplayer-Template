// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/MPTypes/ActorAttachment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorAttachment() {}
// Cross Module References
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EWeaponLaterality();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponAttachmentSocket;
	static UEnum* EWeaponAttachmentSocket_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponAttachmentSocket.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponAttachmentSocket.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket, Z_Construct_UPackage__Script_MPShooter(), TEXT("EWeaponAttachmentSocket"));
		}
		return Z_Registration_Info_UEnum_EWeaponAttachmentSocket.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EWeaponAttachmentSocket>()
	{
		return EWeaponAttachmentSocket_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket_Statics::Enumerators[] = {
		{ "EWeaponAttachmentSocket::EWAS_None", (int64)EWeaponAttachmentSocket::EWAS_None },
		{ "EWeaponAttachmentSocket::EWAS_RightHand", (int64)EWeaponAttachmentSocket::EWAS_RightHand },
		{ "EWeaponAttachmentSocket::EWAS_LeftHand", (int64)EWeaponAttachmentSocket::EWAS_LeftHand },
		{ "EWeaponAttachmentSocket::EWAS_BackSpine", (int64)EWeaponAttachmentSocket::EWAS_BackSpine },
		{ "EWeaponAttachmentSocket::EWAS_Hips", (int64)EWeaponAttachmentSocket::EWAS_Hips },
		{ "EWeaponAttachmentSocket::EWAS_Throwable", (int64)EWeaponAttachmentSocket::EWAS_Throwable },
		{ "EWeaponAttachmentSocket::EWAS_MAX", (int64)EWeaponAttachmentSocket::EWAS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EWAS_BackSpine.DisplayName", "Back Spine" },
		{ "EWAS_BackSpine.Name", "EWeaponAttachmentSocket::EWAS_BackSpine" },
		{ "EWAS_Hips.DisplayName", "Hips" },
		{ "EWAS_Hips.Name", "EWeaponAttachmentSocket::EWAS_Hips" },
		{ "EWAS_LeftHand.DisplayName", "Left Hand" },
		{ "EWAS_LeftHand.Name", "EWeaponAttachmentSocket::EWAS_LeftHand" },
		{ "EWAS_MAX.DisplayName", "DefaultMAX" },
		{ "EWAS_MAX.Name", "EWeaponAttachmentSocket::EWAS_MAX" },
		{ "EWAS_None.DisplayName", "None" },
		{ "EWAS_None.Name", "EWeaponAttachmentSocket::EWAS_None" },
		{ "EWAS_RightHand.DisplayName", "Right Hand" },
		{ "EWAS_RightHand.Name", "EWeaponAttachmentSocket::EWAS_RightHand" },
		{ "EWAS_Throwable.DisplayName", "Throwable" },
		{ "EWAS_Throwable.Name", "EWeaponAttachmentSocket::EWAS_Throwable" },
		{ "ModuleRelativePath", "MPTypes/ActorAttachment.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EWeaponAttachmentSocket",
		"EWeaponAttachmentSocket",
		Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket()
	{
		if (!Z_Registration_Info_UEnum_EWeaponAttachmentSocket.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponAttachmentSocket.InnerSingleton, Z_Construct_UEnum_MPShooter_EWeaponAttachmentSocket_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponAttachmentSocket.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponLaterality;
	static UEnum* EWeaponLaterality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponLaterality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponLaterality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EWeaponLaterality, Z_Construct_UPackage__Script_MPShooter(), TEXT("EWeaponLaterality"));
		}
		return Z_Registration_Info_UEnum_EWeaponLaterality.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EWeaponLaterality>()
	{
		return EWeaponLaterality_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EWeaponLaterality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EWeaponLaterality_Statics::Enumerators[] = {
		{ "EWeaponLaterality::EWL_None", (int64)EWeaponLaterality::EWL_None },
		{ "EWeaponLaterality::EWL_SingleHand", (int64)EWeaponLaterality::EWL_SingleHand },
		{ "EWeaponLaterality::EWL_DoubleHand", (int64)EWeaponLaterality::EWL_DoubleHand },
		{ "EWeaponLaterality::EWL_DualWield", (int64)EWeaponLaterality::EWL_DualWield },
		{ "EWeaponLaterality::EWL_MAX", (int64)EWeaponLaterality::EWL_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EWeaponLaterality_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EWL_DoubleHand.DisplayName", "Double Handed" },
		{ "EWL_DoubleHand.Name", "EWeaponLaterality::EWL_DoubleHand" },
		{ "EWL_DualWield.DisplayName", "Dual Wielded" },
		{ "EWL_DualWield.Name", "EWeaponLaterality::EWL_DualWield" },
		{ "EWL_MAX.DisplayName", "DefaultMAX" },
		{ "EWL_MAX.Name", "EWeaponLaterality::EWL_MAX" },
		{ "EWL_None.DisplayName", "None" },
		{ "EWL_None.Name", "EWeaponLaterality::EWL_None" },
		{ "EWL_SingleHand.DisplayName", "Single Handed" },
		{ "EWL_SingleHand.Name", "EWeaponLaterality::EWL_SingleHand" },
		{ "ModuleRelativePath", "MPTypes/ActorAttachment.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EWeaponLaterality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EWeaponLaterality",
		"EWeaponLaterality",
		Z_Construct_UEnum_MPShooter_EWeaponLaterality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EWeaponLaterality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EWeaponLaterality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EWeaponLaterality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EWeaponLaterality()
	{
		if (!Z_Registration_Info_UEnum_EWeaponLaterality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponLaterality.InnerSingleton, Z_Construct_UEnum_MPShooter_EWeaponLaterality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponLaterality.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_ActorAttachment_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_ActorAttachment_h_Statics::EnumInfo[] = {
		{ EWeaponAttachmentSocket_StaticEnum, TEXT("EWeaponAttachmentSocket"), &Z_Registration_Info_UEnum_EWeaponAttachmentSocket, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2580864729U) },
		{ EWeaponLaterality_StaticEnum, TEXT("EWeaponLaterality"), &Z_Registration_Info_UEnum_EWeaponLaterality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 794302630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_ActorAttachment_h_276099530(TEXT("/Script/MPShooter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_ActorAttachment_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_ActorAttachment_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
