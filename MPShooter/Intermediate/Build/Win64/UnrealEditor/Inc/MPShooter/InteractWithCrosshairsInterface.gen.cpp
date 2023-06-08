// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Interfaces/InteractWithCrosshairsInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractWithCrosshairsInterface() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	void UInteractWithCrosshairsInterface::StaticRegisterNativesUInteractWithCrosshairsInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractWithCrosshairsInterface);
	UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister()
	{
		return UInteractWithCrosshairsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InteractWithCrosshairsInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractWithCrosshairsInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::ClassParams = {
		&UInteractWithCrosshairsInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractWithCrosshairsInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractWithCrosshairsInterface.OuterSingleton, Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractWithCrosshairsInterface.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UInteractWithCrosshairsInterface>()
	{
		return UInteractWithCrosshairsInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractWithCrosshairsInterface);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Interfaces_InteractWithCrosshairsInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Interfaces_InteractWithCrosshairsInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractWithCrosshairsInterface, UInteractWithCrosshairsInterface::StaticClass, TEXT("UInteractWithCrosshairsInterface"), &Z_Registration_Info_UClass_UInteractWithCrosshairsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractWithCrosshairsInterface), 1336096169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Interfaces_InteractWithCrosshairsInterface_h_3150517020(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Interfaces_InteractWithCrosshairsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Interfaces_InteractWithCrosshairsInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
