// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/HUD/CharacterOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterOverlay() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UCharacterOverlay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UCharacterOverlay::StaticRegisterNativesUCharacterOverlay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterOverlay);
	UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister()
	{
		return UCharacterOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreAmountText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreAmountText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefeatAmountText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefeatAmountText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EliminatedText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EliminatedText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoAmountText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAmmoAmountText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarriedAmmoAmountText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CarriedAmmoAmountText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarriedThrowableAmountText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CarriedThrowableAmountText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTypeText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponTypeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchCountdownText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchCountdownText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchEndWarning_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchEndWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HighPingText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HighPingImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingWarning_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HighPingWarning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/CharacterOverlay.h" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar = { "ShieldBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, ShieldBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText = { "ShieldText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, ShieldText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreAmountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreAmountText = { "ScoreAmountText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, ScoreAmountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreAmountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreAmountText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatAmountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatAmountText = { "DefeatAmountText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, DefeatAmountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatAmountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatAmountText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_EliminatedText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_EliminatedText = { "EliminatedText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, EliminatedText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_EliminatedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_EliminatedText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoAmountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoAmountText = { "WeaponAmmoAmountText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, WeaponAmmoAmountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoAmountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoAmountText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoAmountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoAmountText = { "CarriedAmmoAmountText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, CarriedAmmoAmountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoAmountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoAmountText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedThrowableAmountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedThrowableAmountText = { "CarriedThrowableAmountText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, CarriedThrowableAmountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedThrowableAmountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedThrowableAmountText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponTypeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponTypeText = { "WeaponTypeText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, WeaponTypeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponTypeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponTypeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText = { "MatchCountdownText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, MatchCountdownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchEndWarning_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchEndWarning = { "MatchEndWarning", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, MatchEndWarning), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchEndWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchEndWarning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingText = { "HighPingText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, HighPingText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage = { "HighPingImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, HighPingImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingWarning_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "HUD/CharacterOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingWarning = { "HighPingWarning", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOverlay, HighPingWarning), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingWarning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HealthText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ShieldText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_ScoreAmountText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_DefeatAmountText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_EliminatedText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponAmmoAmountText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedAmmoAmountText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_CarriedThrowableAmountText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_WeaponTypeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchCountdownText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_MatchEndWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOverlay_Statics::NewProp_HighPingWarning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterOverlay_Statics::ClassParams = {
		&UCharacterOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterOverlay()
	{
		if (!Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton, Z_Construct_UClass_UCharacterOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterOverlay.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UCharacterOverlay>()
	{
		return UCharacterOverlay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterOverlay);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_CharacterOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_CharacterOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterOverlay, UCharacterOverlay::StaticClass, TEXT("UCharacterOverlay"), &Z_Registration_Info_UClass_UCharacterOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterOverlay), 3556558853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_CharacterOverlay_h_3839865077(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_CharacterOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_CharacterOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
