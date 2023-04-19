// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Pickup/JumpPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpPickup() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AJumpPickup_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AJumpPickup();
	MPSHOOTER_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	void AJumpPickup::StaticRegisterNativesAJumpPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJumpPickup);
	UClass* Z_Construct_UClass_AJumpPickup_NoRegister()
	{
		return AJumpPickup::StaticClass();
	}
	struct Z_Construct_UClass_AJumpPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpZVelocityBuff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpZVelocityBuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpBuffTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpBuffTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJumpPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumpPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Pickup/JumpPickup.h" },
		{ "ModuleRelativePath", "Item/Pickup/JumpPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpZVelocityBuff_MetaData[] = {
		{ "Category", "Jump Pickup Properties" },
		{ "ModuleRelativePath", "Item/Pickup/JumpPickup.h" },
		{ "ToolTip", "Amount jump velocity is set on pickup." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpZVelocityBuff = { "JumpZVelocityBuff", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJumpPickup, JumpZVelocityBuff), METADATA_PARAMS(Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpZVelocityBuff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpZVelocityBuff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpBuffTime_MetaData[] = {
		{ "Category", "Jump Pickup Properties" },
		{ "ModuleRelativePath", "Item/Pickup/JumpPickup.h" },
		{ "ToolTip", "Amount of time it takes to reach the buff." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpBuffTime = { "JumpBuffTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJumpPickup, JumpBuffTime), METADATA_PARAMS(Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpBuffTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpBuffTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJumpPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpZVelocityBuff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpPickup_Statics::NewProp_JumpBuffTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJumpPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumpPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJumpPickup_Statics::ClassParams = {
		&AJumpPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJumpPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJumpPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJumpPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJumpPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJumpPickup()
	{
		if (!Z_Registration_Info_UClass_AJumpPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJumpPickup.OuterSingleton, Z_Construct_UClass_AJumpPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJumpPickup.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AJumpPickup>()
	{
		return AJumpPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJumpPickup);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_JumpPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_JumpPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJumpPickup, AJumpPickup::StaticClass, TEXT("AJumpPickup"), &Z_Registration_Info_UClass_AJumpPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJumpPickup), 3637026877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_JumpPickup_h_2414246507(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_JumpPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_JumpPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
