// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Interfaces/ProjectileInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileInterface() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UProjectileInterface_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UProjectileInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	void UProjectileInterface::StaticRegisterNativesUProjectileInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileInterface);
	UClass* Z_Construct_UClass_UProjectileInterface_NoRegister()
	{
		return UProjectileInterface::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/ProjectileInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IProjectileInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileInterface_Statics::ClassParams = {
		&UProjectileInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProjectileInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectileInterface()
	{
		if (!Z_Registration_Info_UClass_UProjectileInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileInterface.OuterSingleton, Z_Construct_UClass_UProjectileInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileInterface.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UProjectileInterface>()
	{
		return UProjectileInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileInterface);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileInterface, UProjectileInterface::StaticClass, TEXT("UProjectileInterface"), &Z_Registration_Info_UClass_UProjectileInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileInterface), 3005614511U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_3379354364(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
