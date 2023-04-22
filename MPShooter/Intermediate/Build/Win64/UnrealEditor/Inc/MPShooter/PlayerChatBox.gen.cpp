// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/HUD/PlayerChatBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerChatBox() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UPlayerChatBox_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UPlayerChatBox();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	void UPlayerChatBox::StaticRegisterNativesUPlayerChatBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerChatBox);
	UClass* Z_Construct_UClass_UPlayerChatBox_NoRegister()
	{
		return UPlayerChatBox::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerChatBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerChatBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChatBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/PlayerChatBox.h" },
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerChatBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerChatBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerChatBox_Statics::ClassParams = {
		&UPlayerChatBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerChatBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerChatBox()
	{
		if (!Z_Registration_Info_UClass_UPlayerChatBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerChatBox.OuterSingleton, Z_Construct_UClass_UPlayerChatBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerChatBox.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UPlayerChatBox>()
	{
		return UPlayerChatBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerChatBox);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerChatBox, UPlayerChatBox::StaticClass, TEXT("UPlayerChatBox"), &Z_Registration_Info_UClass_UPlayerChatBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerChatBox), 4235705380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_4286612668(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
