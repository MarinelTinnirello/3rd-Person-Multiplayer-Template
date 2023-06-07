// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Input/MPInputConfigData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPInputConfigData() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UMPInputConfigData_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UMPInputConfigData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
// End Cross Module References
	void UMPInputConfigData::StaticRegisterNativesUMPInputConfigData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMPInputConfigData);
	UClass* Z_Construct_UClass_UMPInputConfigData_NoRegister()
	{
		return UMPInputConfigData::StaticClass();
	}
	struct Z_Construct_UClass_UMPInputConfigData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMove_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputLook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputLook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMPInputConfigData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPInputConfigData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Input/MPInputConfigData.h" },
		{ "ModuleRelativePath", "Input/MPInputConfigData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPInputConfigData_Statics::NewProp_InputMove_MetaData[] = {
		{ "Category", "MPInputConfigData" },
		{ "ModuleRelativePath", "Input/MPInputConfigData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMPInputConfigData_Statics::NewProp_InputMove = { "InputMove", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPInputConfigData, InputMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMPInputConfigData_Statics::NewProp_InputMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPInputConfigData_Statics::NewProp_InputMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPInputConfigData_Statics::NewProp_InputLook_MetaData[] = {
		{ "Category", "MPInputConfigData" },
		{ "ModuleRelativePath", "Input/MPInputConfigData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMPInputConfigData_Statics::NewProp_InputLook = { "InputLook", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPInputConfigData, InputLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMPInputConfigData_Statics::NewProp_InputLook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPInputConfigData_Statics::NewProp_InputLook_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMPInputConfigData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPInputConfigData_Statics::NewProp_InputMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPInputConfigData_Statics::NewProp_InputLook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMPInputConfigData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMPInputConfigData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMPInputConfigData_Statics::ClassParams = {
		&UMPInputConfigData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMPInputConfigData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMPInputConfigData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMPInputConfigData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMPInputConfigData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMPInputConfigData()
	{
		if (!Z_Registration_Info_UClass_UMPInputConfigData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMPInputConfigData.OuterSingleton, Z_Construct_UClass_UMPInputConfigData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMPInputConfigData.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UMPInputConfigData>()
	{
		return UMPInputConfigData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMPInputConfigData);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Input_MPInputConfigData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Input_MPInputConfigData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMPInputConfigData, UMPInputConfigData::StaticClass, TEXT("UMPInputConfigData"), &Z_Registration_Info_UClass_UMPInputConfigData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMPInputConfigData), 4286671902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Input_MPInputConfigData_h_4098455550(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Input_MPInputConfigData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Input_MPInputConfigData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
