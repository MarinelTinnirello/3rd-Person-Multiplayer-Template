// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/HUD/EliminateAnnouncement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEliminateAnnouncement() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UEliminateAnnouncement_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UEliminateAnnouncement();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UEliminateAnnouncement::StaticRegisterNativesUEliminateAnnouncement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEliminateAnnouncement);
	UClass* Z_Construct_UClass_UEliminateAnnouncement_NoRegister()
	{
		return UEliminateAnnouncement::StaticClass();
	}
	struct Z_Construct_UClass_UEliminateAnnouncement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EliminateText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EliminateText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEliminateAnnouncement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliminateAnnouncement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/EliminateAnnouncement.h" },
		{ "ModuleRelativePath", "HUD/EliminateAnnouncement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_AnnouncementBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/EliminateAnnouncement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_AnnouncementBox = { "AnnouncementBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliminateAnnouncement, AnnouncementBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_AnnouncementBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_AnnouncementBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_AnnouncementText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/EliminateAnnouncement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_AnnouncementText = { "AnnouncementText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliminateAnnouncement, AnnouncementText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_AnnouncementText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_AnnouncementText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_EliminateText_MetaData[] = {
		{ "Category", "Eliminate" },
		{ "ModuleRelativePath", "HUD/EliminateAnnouncement.h" },
		{ "ToolTip", "Text used to inicate who's been eliminated." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_EliminateText = { "EliminateText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliminateAnnouncement, EliminateText), METADATA_PARAMS(Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_EliminateText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_EliminateText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEliminateAnnouncement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_AnnouncementBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_AnnouncementText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliminateAnnouncement_Statics::NewProp_EliminateText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEliminateAnnouncement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEliminateAnnouncement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEliminateAnnouncement_Statics::ClassParams = {
		&UEliminateAnnouncement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEliminateAnnouncement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEliminateAnnouncement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEliminateAnnouncement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEliminateAnnouncement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEliminateAnnouncement()
	{
		if (!Z_Registration_Info_UClass_UEliminateAnnouncement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEliminateAnnouncement.OuterSingleton, Z_Construct_UClass_UEliminateAnnouncement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEliminateAnnouncement.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UEliminateAnnouncement>()
	{
		return UEliminateAnnouncement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEliminateAnnouncement);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_EliminateAnnouncement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_EliminateAnnouncement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEliminateAnnouncement, UEliminateAnnouncement::StaticClass, TEXT("UEliminateAnnouncement"), &Z_Registration_Info_UClass_UEliminateAnnouncement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEliminateAnnouncement), 674674376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_EliminateAnnouncement_h_2251610065(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_EliminateAnnouncement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_EliminateAnnouncement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
