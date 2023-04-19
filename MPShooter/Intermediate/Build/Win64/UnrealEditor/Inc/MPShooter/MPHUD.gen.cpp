// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/HUD/MPHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPHUD() {}
// Cross Module References
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPHUD_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	MPSHOOTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UAnnoucement_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_USniperScopeOverlay_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HUDPackage;
class UScriptStruct* FHUDPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHUDPackage, Z_Construct_UPackage__Script_MPShooter(), TEXT("HUDPackage"));
	}
	return Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FHUDPackage>()
{
	return FHUDPackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHUDPackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HUD/MPHUD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHUDPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHUDPackage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHUDPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		&NewStructOps,
		"HUDPackage",
		sizeof(FHUDPackage),
		alignof(FHUDPackage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage()
	{
		if (!Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton, Z_Construct_UScriptStruct_FHUDPackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton;
	}
	void AMPHUD::StaticRegisterNativesAMPHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPHUD);
	UClass* Z_Construct_UClass_AMPHUD_NoRegister()
	{
		return AMPHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Annoucement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Annoucement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnoucementClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnnoucementClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SniperScopeOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SniperScopeOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SniperScopeOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SniperScopeOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsSpreadMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairsSpreadMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/MPHUD.h" },
		{ "ModuleRelativePath", "HUD/MPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPHUD_Statics::NewProp_CharacterOverlay_MetaData[] = {
		{ "Comment", "//\n// Health\n//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MPHUD.h" },
		{ "ToolTip", "Health" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPHUD_Statics::NewProp_CharacterOverlay = { "CharacterOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPHUD, CharacterOverlay), Z_Construct_UClass_UCharacterOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPHUD_Statics::NewProp_CharacterOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPHUD_Statics::NewProp_CharacterOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPHUD_Statics::NewProp_CharacterOverlayClass_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "HUD/MPHUD.h" },
		{ "ToolTip", "Character overlay to be displayed." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMPHUD_Statics::NewProp_CharacterOverlayClass = { "CharacterOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPHUD, CharacterOverlayClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMPHUD_Statics::NewProp_CharacterOverlayClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPHUD_Statics::NewProp_CharacterOverlayClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPHUD_Statics::NewProp_Annoucement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MPHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPHUD_Statics::NewProp_Annoucement = { "Annoucement", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPHUD, Annoucement), Z_Construct_UClass_UAnnoucement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPHUD_Statics::NewProp_Annoucement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPHUD_Statics::NewProp_Annoucement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPHUD_Statics::NewProp_AnnoucementClass_MetaData[] = {
		{ "Category", "Annoucements" },
		{ "ModuleRelativePath", "HUD/MPHUD.h" },
		{ "ToolTip", "Annoucement overlay to be displayed." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMPHUD_Statics::NewProp_AnnoucementClass = { "AnnoucementClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPHUD, AnnoucementClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMPHUD_Statics::NewProp_AnnoucementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPHUD_Statics::NewProp_AnnoucementClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPHUD_Statics::NewProp_SniperScopeOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/MPHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPHUD_Statics::NewProp_SniperScopeOverlay = { "SniperScopeOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPHUD, SniperScopeOverlay), Z_Construct_UClass_USniperScopeOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPHUD_Statics::NewProp_SniperScopeOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPHUD_Statics::NewProp_SniperScopeOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPHUD_Statics::NewProp_SniperScopeOverlayClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "HUD/MPHUD.h" },
		{ "ToolTip", "Sniper scope overlay to be displayed." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMPHUD_Statics::NewProp_SniperScopeOverlayClass = { "SniperScopeOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPHUD, SniperScopeOverlayClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMPHUD_Statics::NewProp_SniperScopeOverlayClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPHUD_Statics::NewProp_SniperScopeOverlayClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPHUD_Statics::NewProp_CrosshairsSpreadMax_MetaData[] = {
		{ "Category", "MPHUD" },
		{ "ModuleRelativePath", "HUD/MPHUD.h" },
		{ "ToolTip", "Max amount the crosshairs should spread out." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPHUD_Statics::NewProp_CrosshairsSpreadMax = { "CrosshairsSpreadMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPHUD, CrosshairsSpreadMax), METADATA_PARAMS(Z_Construct_UClass_AMPHUD_Statics::NewProp_CrosshairsSpreadMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPHUD_Statics::NewProp_CrosshairsSpreadMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPHUD_Statics::NewProp_CharacterOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPHUD_Statics::NewProp_CharacterOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPHUD_Statics::NewProp_Annoucement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPHUD_Statics::NewProp_AnnoucementClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPHUD_Statics::NewProp_SniperScopeOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPHUD_Statics::NewProp_SniperScopeOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPHUD_Statics::NewProp_CrosshairsSpreadMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPHUD_Statics::ClassParams = {
		&AMPHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMPHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMPHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMPHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMPHUD()
	{
		if (!Z_Registration_Info_UClass_AMPHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPHUD.OuterSingleton, Z_Construct_UClass_AMPHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMPHUD.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AMPHUD>()
	{
		return AMPHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPHUD);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_Statics::ScriptStructInfo[] = {
		{ FHUDPackage::StaticStruct, Z_Construct_UScriptStruct_FHUDPackage_Statics::NewStructOps, TEXT("HUDPackage"), &Z_Registration_Info_UScriptStruct_HUDPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHUDPackage), 2172949305U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMPHUD, AMPHUD::StaticClass, TEXT("AMPHUD"), &Z_Registration_Info_UClass_AMPHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPHUD), 521527214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_3861772179(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
