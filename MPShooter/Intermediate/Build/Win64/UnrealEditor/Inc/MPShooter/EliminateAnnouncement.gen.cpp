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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEliminateAnnouncement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliminateAnnouncement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/EliminateAnnouncement.h" },
		{ "ModuleRelativePath", "HUD/EliminateAnnouncement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEliminateAnnouncement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEliminateAnnouncement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEliminateAnnouncement_Statics::ClassParams = {
		&UEliminateAnnouncement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ Z_Construct_UClass_UEliminateAnnouncement, UEliminateAnnouncement::StaticClass, TEXT("UEliminateAnnouncement"), &Z_Registration_Info_UClass_UEliminateAnnouncement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEliminateAnnouncement), 4161168035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_EliminateAnnouncement_h_4010020953(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_EliminateAnnouncement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_EliminateAnnouncement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
