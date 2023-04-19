// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Pickup/ThrowableWeaponPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableWeaponPickup() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AThrowableWeaponPickup_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AThrowableWeaponPickup();
	MPSHOOTER_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EThrowableWeaponType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MPSHOOTER_API UClass* Z_Construct_UClass_AThrowableWeapon_NoRegister();
// End Cross Module References
	void AThrowableWeaponPickup::StaticRegisterNativesAThrowableWeaponPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowableWeaponPickup);
	UClass* Z_Construct_UClass_AThrowableWeaponPickup_NoRegister()
	{
		return AThrowableWeaponPickup::StaticClass();
	}
	struct Z_Construct_UClass_AThrowableWeaponPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoAmount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThrowableWeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableWeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThrowableWeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ThrowableClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowableWeaponPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeaponPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Pickup/ThrowableWeaponPickup.h" },
		{ "ModuleRelativePath", "Item/Pickup/ThrowableWeaponPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_AmmoAmount_MetaData[] = {
		{ "Category", "Throwable Pickup Properties" },
		{ "ModuleRelativePath", "Item/Pickup/ThrowableWeaponPickup.h" },
		{ "ToolTip", "Amount of ammo contained in the pickup." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_AmmoAmount = { "AmmoAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeaponPickup, AmmoAmount), METADATA_PARAMS(Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_AmmoAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_AmmoAmount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableWeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableWeaponType_MetaData[] = {
		{ "Category", "Throwable Pickup Properties" },
		{ "ModuleRelativePath", "Item/Pickup/ThrowableWeaponPickup.h" },
		{ "ToolTip", "Type of weapon associated with the ammo." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableWeaponType = { "ThrowableWeaponType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeaponPickup, ThrowableWeaponType), Z_Construct_UEnum_MPShooter_EThrowableWeaponType, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableWeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableWeaponType_MetaData)) }; // 3616250726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableClass_MetaData[] = {
		{ "Category", "Throwable Pickup Properties" },
		{ "ModuleRelativePath", "Item/Pickup/ThrowableWeaponPickup.h" },
		{ "ToolTip", "Throwable class." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableClass = { "ThrowableClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeaponPickup, ThrowableClass), Z_Construct_UClass_AThrowableWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowableWeaponPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_AmmoAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableWeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableWeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeaponPickup_Statics::NewProp_ThrowableClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowableWeaponPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableWeaponPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowableWeaponPickup_Statics::ClassParams = {
		&AThrowableWeaponPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThrowableWeaponPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThrowableWeaponPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowableWeaponPickup()
	{
		if (!Z_Registration_Info_UClass_AThrowableWeaponPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowableWeaponPickup.OuterSingleton, Z_Construct_UClass_AThrowableWeaponPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThrowableWeaponPickup.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AThrowableWeaponPickup>()
	{
		return AThrowableWeaponPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowableWeaponPickup);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_ThrowableWeaponPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_ThrowableWeaponPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThrowableWeaponPickup, AThrowableWeaponPickup::StaticClass, TEXT("AThrowableWeaponPickup"), &Z_Registration_Info_UClass_AThrowableWeaponPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowableWeaponPickup), 392091477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_ThrowableWeaponPickup_h_2879376453(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_ThrowableWeaponPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_ThrowableWeaponPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
