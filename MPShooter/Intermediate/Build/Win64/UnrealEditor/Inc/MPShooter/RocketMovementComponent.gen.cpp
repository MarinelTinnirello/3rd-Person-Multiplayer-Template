// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Ranged/Projectile/Movement/RocketMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocketMovementComponent() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_URocketMovementComponent_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_URocketMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
// End Cross Module References
	void URocketMovementComponent::StaticRegisterNativesURocketMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URocketMovementComponent);
	UClass* Z_Construct_UClass_URocketMovementComponent_NoRegister()
	{
		return URocketMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_URocketMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URocketMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URocketMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Ranged/Projectile/Movement/RocketMovementComponent.h" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Movement/RocketMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URocketMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URocketMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URocketMovementComponent_Statics::ClassParams = {
		&URocketMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URocketMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URocketMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URocketMovementComponent()
	{
		if (!Z_Registration_Info_UClass_URocketMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URocketMovementComponent.OuterSingleton, Z_Construct_UClass_URocketMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URocketMovementComponent.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<URocketMovementComponent>()
	{
		return URocketMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URocketMovementComponent);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Movement_RocketMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Movement_RocketMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URocketMovementComponent, URocketMovementComponent::StaticClass, TEXT("URocketMovementComponent"), &Z_Registration_Info_UClass_URocketMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URocketMovementComponent), 2564555784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Movement_RocketMovementComponent_h_1176848495(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Movement_RocketMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Movement_RocketMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
