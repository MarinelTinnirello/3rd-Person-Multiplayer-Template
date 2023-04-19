// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Pickup/HealthPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPickup() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AHealthPickup_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AHealthPickup();
	MPSHOOTER_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	void AHealthPickup::StaticRegisterNativesAHealthPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthPickup);
	UClass* Z_Construct_UClass_AHealthPickup_NoRegister()
	{
		return AHealthPickup::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealingTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Pickup/HealthPickup.h" },
		{ "ModuleRelativePath", "Item/Pickup/HealthPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount_MetaData[] = {
		{ "Category", "Health Pickup Properties" },
		{ "ModuleRelativePath", "Item/Pickup/HealthPickup.h" },
		{ "ToolTip", "Amount healed on pickup." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealthPickup, HealAmount), METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime_MetaData[] = {
		{ "Category", "Health Pickup Properties" },
		{ "ModuleRelativePath", "Item/Pickup/HealthPickup.h" },
		{ "ToolTip", "Amount of time it takes to reach HealAmount." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime = { "HealingTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealthPickup, HealingTime), METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthPickup_Statics::ClassParams = {
		&AHealthPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHealthPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealthPickup()
	{
		if (!Z_Registration_Info_UClass_AHealthPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthPickup.OuterSingleton, Z_Construct_UClass_AHealthPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealthPickup.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AHealthPickup>()
	{
		return AHealthPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPickup);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_HealthPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_HealthPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealthPickup, AHealthPickup::StaticClass, TEXT("AHealthPickup"), &Z_Registration_Info_UClass_AHealthPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthPickup), 2085815509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_HealthPickup_h_3490436945(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_HealthPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_HealthPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
