// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/MPTypes/CombatState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatState() {}
// Cross Module References
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_ECombatState();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatState;
	static UEnum* ECombatState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECombatState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECombatState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_ECombatState, Z_Construct_UPackage__Script_MPShooter(), TEXT("ECombatState"));
		}
		return Z_Registration_Info_UEnum_ECombatState.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<ECombatState>()
	{
		return ECombatState_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_ECombatState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_ECombatState_Statics::Enumerators[] = {
		{ "ECombatState::ECS_Unoccupied", (int64)ECombatState::ECS_Unoccupied },
		{ "ECombatState::ECS_Reloading", (int64)ECombatState::ECS_Reloading },
		{ "ECombatState::ECS_Throwing", (int64)ECombatState::ECS_Throwing },
		{ "ECombatState::ECS_SwappingWeapons", (int64)ECombatState::ECS_SwappingWeapons },
		{ "ECombatState::ECS_MAX", (int64)ECombatState::ECS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_ECombatState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_MAX.DisplayName", "DefaultMAX" },
		{ "ECS_MAX.Name", "ECombatState::ECS_MAX" },
		{ "ECS_Reloading.DisplayName", "Reloading" },
		{ "ECS_Reloading.Name", "ECombatState::ECS_Reloading" },
		{ "ECS_SwappingWeapons.DisplayName", "Swapping Weapons" },
		{ "ECS_SwappingWeapons.Name", "ECombatState::ECS_SwappingWeapons" },
		{ "ECS_Throwing.DisplayName", "Throwing" },
		{ "ECS_Throwing.Name", "ECombatState::ECS_Throwing" },
		{ "ECS_Unoccupied.DisplayName", "Unoccupied" },
		{ "ECS_Unoccupied.Name", "ECombatState::ECS_Unoccupied" },
		{ "ModuleRelativePath", "MPTypes/CombatState.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_ECombatState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"ECombatState",
		"ECombatState",
		Z_Construct_UEnum_MPShooter_ECombatState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_ECombatState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_ECombatState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_ECombatState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_ECombatState()
	{
		if (!Z_Registration_Info_UEnum_ECombatState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatState.InnerSingleton, Z_Construct_UEnum_MPShooter_ECombatState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECombatState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_CombatState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_CombatState_h_Statics::EnumInfo[] = {
		{ ECombatState_StaticEnum, TEXT("ECombatState"), &Z_Registration_Info_UEnum_ECombatState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3882554238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_CombatState_h_1650747390(TEXT("/Script/MPShooter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_CombatState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPTypes_CombatState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
