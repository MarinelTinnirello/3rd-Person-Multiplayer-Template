// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/GameMode/MPShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPShooterGameMode() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPShooterGameMode_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMPShooterGameMode::StaticRegisterNativesAMPShooterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPShooterGameMode);
	UClass* Z_Construct_UClass_AMPShooterGameMode_NoRegister()
	{
		return AMPShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMPShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatchTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchWarningTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatchWarningTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearbyRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearbyRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/MPShooterGameMode.h" },
		{ "ModuleRelativePath", "GameMode/MPShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_WarmupTime_MetaData[] = {
		{ "Category", "MPShooterGameMode" },
		{ "ModuleRelativePath", "GameMode/MPShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPShooterGameMode, WarmupTime), METADATA_PARAMS(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_WarmupTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_WarmupTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_MatchTime_MetaData[] = {
		{ "Category", "MPShooterGameMode" },
		{ "ModuleRelativePath", "GameMode/MPShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_MatchTime = { "MatchTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPShooterGameMode, MatchTime), METADATA_PARAMS(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_MatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_MatchTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_CooldownTime_MetaData[] = {
		{ "Category", "MPShooterGameMode" },
		{ "ModuleRelativePath", "GameMode/MPShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPShooterGameMode, CooldownTime), METADATA_PARAMS(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_CooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_CooldownTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_MatchWarningTime_MetaData[] = {
		{ "Category", "MPShooterGameMode" },
		{ "ModuleRelativePath", "GameMode/MPShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_MatchWarningTime = { "MatchWarningTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPShooterGameMode, MatchWarningTime), METADATA_PARAMS(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_MatchWarningTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_MatchWarningTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_NearbyRadius_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "GameMode/MPShooterGameMode.h" },
		{ "ToolTip", "Minimum radius of viable player start locations." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_NearbyRadius = { "NearbyRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPShooterGameMode, NearbyRadius), METADATA_PARAMS(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_NearbyRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_NearbyRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_DefaultLocation_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "GameMode/MPShooterGameMode.h" },
		{ "ToolTip", "Default location to respawn if there's no suitable spawn locations found after the max attempts." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_DefaultLocation = { "DefaultLocation", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPShooterGameMode, DefaultLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_DefaultLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_DefaultLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPShooterGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_WarmupTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_MatchTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_CooldownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_MatchWarningTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_NearbyRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPShooterGameMode_Statics::NewProp_DefaultLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPShooterGameMode_Statics::ClassParams = {
		&AMPShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMPShooterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMPShooterGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMPShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMPShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMPShooterGameMode()
	{
		if (!Z_Registration_Info_UClass_AMPShooterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPShooterGameMode.OuterSingleton, Z_Construct_UClass_AMPShooterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMPShooterGameMode.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AMPShooterGameMode>()
	{
		return AMPShooterGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPShooterGameMode);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_GameMode_MPShooterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_GameMode_MPShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMPShooterGameMode, AMPShooterGameMode::StaticClass, TEXT("AMPShooterGameMode"), &Z_Registration_Info_UClass_AMPShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPShooterGameMode), 3512321367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_GameMode_MPShooterGameMode_h_3892506522(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_GameMode_MPShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_GameMode_MPShooterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
