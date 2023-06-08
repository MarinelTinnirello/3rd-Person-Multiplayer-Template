// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/GameState/MPGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPGameState() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPGameState_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerState_NoRegister();
// End Cross Module References
	void AMPGameState::StaticRegisterNativesAMPGameState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPGameState);
	UClass* Z_Construct_UClass_AMPGameState_NoRegister()
	{
		return AMPGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMPGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopScoringPlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopScoringPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TopScoringPlayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/MPGameState.h" },
		{ "ModuleRelativePath", "GameState/MPGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPGameState_Statics::NewProp_TopScoringPlayers_Inner = { "TopScoringPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMPPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPGameState_Statics::NewProp_TopScoringPlayers_MetaData[] = {
		{ "ModuleRelativePath", "GameState/MPGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMPGameState_Statics::NewProp_TopScoringPlayers = { "TopScoringPlayers", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPGameState, TopScoringPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMPGameState_Statics::NewProp_TopScoringPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPGameState_Statics::NewProp_TopScoringPlayers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPGameState_Statics::NewProp_TopScoringPlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPGameState_Statics::NewProp_TopScoringPlayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPGameState_Statics::ClassParams = {
		&AMPGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMPGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMPGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMPGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMPGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMPGameState()
	{
		if (!Z_Registration_Info_UClass_AMPGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPGameState.OuterSingleton, Z_Construct_UClass_AMPGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMPGameState.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AMPGameState>()
	{
		return AMPGameState::StaticClass();
	}

	void AMPGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TopScoringPlayers(TEXT("TopScoringPlayers"));

		const bool bIsValid = true
			&& Name_TopScoringPlayers == ClassReps[(int32)ENetFields_Private::TopScoringPlayers].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMPGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPGameState);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMPGameState, AMPGameState::StaticClass, TEXT("AMPGameState"), &Z_Registration_Info_UClass_AMPGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPGameState), 2164738410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_3964004368(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
