// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/HUD/SniperScopeOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSniperScopeOverlay() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_USniperScopeOverlay_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_USniperScopeOverlay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	void USniperScopeOverlay::StaticRegisterNativesUSniperScopeOverlay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USniperScopeOverlay);
	UClass* Z_Construct_UClass_USniperScopeOverlay_NoRegister()
	{
		return USniperScopeOverlay::StaticClass();
	}
	struct Z_Construct_UClass_USniperScopeOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScopeZoomIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScopeZoomIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USniperScopeOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USniperScopeOverlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/SniperScopeOverlay.h" },
		{ "ModuleRelativePath", "HUD/SniperScopeOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USniperScopeOverlay_Statics::NewProp_ScopeZoomIn_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "HUD/SniperScopeOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USniperScopeOverlay_Statics::NewProp_ScopeZoomIn = { "ScopeZoomIn", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USniperScopeOverlay, ScopeZoomIn), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USniperScopeOverlay_Statics::NewProp_ScopeZoomIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USniperScopeOverlay_Statics::NewProp_ScopeZoomIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USniperScopeOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USniperScopeOverlay_Statics::NewProp_ScopeZoomIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USniperScopeOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USniperScopeOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USniperScopeOverlay_Statics::ClassParams = {
		&USniperScopeOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USniperScopeOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USniperScopeOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USniperScopeOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USniperScopeOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USniperScopeOverlay()
	{
		if (!Z_Registration_Info_UClass_USniperScopeOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USniperScopeOverlay.OuterSingleton, Z_Construct_UClass_USniperScopeOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USniperScopeOverlay.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<USniperScopeOverlay>()
	{
		return USniperScopeOverlay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USniperScopeOverlay);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_SniperScopeOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_SniperScopeOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USniperScopeOverlay, USniperScopeOverlay::StaticClass, TEXT("USniperScopeOverlay"), &Z_Registration_Info_UClass_USniperScopeOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USniperScopeOverlay), 2960808935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_SniperScopeOverlay_h_2427889388(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_SniperScopeOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_SniperScopeOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS