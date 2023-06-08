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
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatTextBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerChatBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChatBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/PlayerChatBox.h" },
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementBox = { "AnnouncementBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerChatBox, AnnouncementBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementText = { "AnnouncementText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerChatBox, AnnouncementText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_ChatTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_ChatTextBox = { "ChatTextBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerChatBox, ChatTextBox), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_ChatTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_ChatTextBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerChatBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_ChatTextBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerChatBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerChatBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerChatBox_Statics::ClassParams = {
		&UPlayerChatBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerChatBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::PropPointers),
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
		{ Z_Construct_UClass_UPlayerChatBox, UPlayerChatBox::StaticClass, TEXT("UPlayerChatBox"), &Z_Registration_Info_UClass_UPlayerChatBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerChatBox), 1194020993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_1321327548(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
