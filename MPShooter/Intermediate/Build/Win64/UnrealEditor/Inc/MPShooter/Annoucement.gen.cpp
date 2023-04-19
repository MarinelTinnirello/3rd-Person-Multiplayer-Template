// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/HUD/Annoucement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnnoucement() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UAnnoucement_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UAnnoucement();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UAnnoucement::StaticRegisterNativesUAnnoucement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnnoucement);
	UClass* Z_Construct_UClass_UAnnoucement_NoRegister()
	{
		return UAnnoucement::StaticClass();
	}
	struct Z_Construct_UClass_UAnnoucement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTimeText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WarmupTimeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnoucementText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnoucementText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnnoucement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnoucement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/Annoucement.h" },
		{ "ModuleRelativePath", "HUD/Annoucement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnoucement_Statics::NewProp_WarmupTimeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/Annoucement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnoucement_Statics::NewProp_WarmupTimeText = { "WarmupTimeText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnoucement, WarmupTimeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnoucement_Statics::NewProp_WarmupTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnoucement_Statics::NewProp_WarmupTimeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnoucement_Statics::NewProp_AnnoucementText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/Annoucement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnoucement_Statics::NewProp_AnnoucementText = { "AnnoucementText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnoucement, AnnoucementText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnoucement_Statics::NewProp_AnnoucementText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnoucement_Statics::NewProp_AnnoucementText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnoucement_Statics::NewProp_InfoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/Annoucement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnoucement_Statics::NewProp_InfoText = { "InfoText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnoucement, InfoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnoucement_Statics::NewProp_InfoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnoucement_Statics::NewProp_InfoText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnnoucement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnoucement_Statics::NewProp_WarmupTimeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnoucement_Statics::NewProp_AnnoucementText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnoucement_Statics::NewProp_InfoText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnnoucement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnnoucement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnnoucement_Statics::ClassParams = {
		&UAnnoucement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnnoucement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnnoucement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnnoucement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnoucement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnnoucement()
	{
		if (!Z_Registration_Info_UClass_UAnnoucement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnnoucement.OuterSingleton, Z_Construct_UClass_UAnnoucement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnnoucement.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UAnnoucement>()
	{
		return UAnnoucement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnnoucement);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_Annoucement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_Annoucement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnnoucement, UAnnoucement::StaticClass, TEXT("UAnnoucement"), &Z_Registration_Info_UClass_UAnnoucement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnnoucement), 3901048149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_Annoucement_h_1996380928(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_Annoucement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_Annoucement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
