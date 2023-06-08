// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Ranged/Projectile/Movement/SpiralMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiralMovementComponent() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_USpiralMovementComponent_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_USpiralMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USpiralMovementComponent::StaticRegisterNativesUSpiralMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpiralMovementComponent);
	UClass* Z_Construct_UClass_USpiralMovementComponent_NoRegister()
	{
		return USpiralMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpiralMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePivotAxis_MetaData[];
#endif
		static void NewProp_bEnablePivotAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePivotAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotAxisOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotAxisOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotAxisRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotAxisRotationRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiralMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Ranged/Projectile/Movement/SpiralMovementComponent.h" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Movement/SpiralMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_bEnablePivotAxis_MetaData[] = {
		{ "Category", "Spiral Movement Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Movement/SpiralMovementComponent.h" },
		{ "ToolTip", "Checks whether pivot axis is enabled." },
	};
#endif
	void Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_bEnablePivotAxis_SetBit(void* Obj)
	{
		((USpiralMovementComponent*)Obj)->bEnablePivotAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_bEnablePivotAxis = { "bEnablePivotAxis", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpiralMovementComponent), &Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_bEnablePivotAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_bEnablePivotAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_bEnablePivotAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_PivotAxisOffset_MetaData[] = {
		{ "Category", "Spiral Movement Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Movement/SpiralMovementComponent.h" },
		{ "ToolTip", "Offset of the projectile around the pivot access." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_PivotAxisOffset = { "PivotAxisOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiralMovementComponent, PivotAxisOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_PivotAxisOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_PivotAxisOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_PivotAxisRotationRate_MetaData[] = {
		{ "Category", "Spiral Movement Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Movement/SpiralMovementComponent.h" },
		{ "ToolTip", "Rate of rotation for the projectile around the pivot access." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_PivotAxisRotationRate = { "PivotAxisRotationRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiralMovementComponent, PivotAxisRotationRate), METADATA_PARAMS(Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_PivotAxisRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_PivotAxisRotationRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpiralMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_bEnablePivotAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_PivotAxisOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralMovementComponent_Statics::NewProp_PivotAxisRotationRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiralMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiralMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpiralMovementComponent_Statics::ClassParams = {
		&USpiralMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpiralMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpiralMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpiralMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiralMovementComponent()
	{
		if (!Z_Registration_Info_UClass_USpiralMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpiralMovementComponent.OuterSingleton, Z_Construct_UClass_USpiralMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpiralMovementComponent.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<USpiralMovementComponent>()
	{
		return USpiralMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiralMovementComponent);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Movement_SpiralMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Movement_SpiralMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpiralMovementComponent, USpiralMovementComponent::StaticClass, TEXT("USpiralMovementComponent"), &Z_Registration_Info_UClass_USpiralMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpiralMovementComponent), 726515159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Movement_SpiralMovementComponent_h_272082293(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Movement_SpiralMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Movement_SpiralMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
