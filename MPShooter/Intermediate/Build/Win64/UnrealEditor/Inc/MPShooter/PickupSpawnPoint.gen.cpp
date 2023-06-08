// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Pickup/PickupSpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupSpawnPoint() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_APickupSpawnPoint_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_APickupSpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MPSHOOTER_API UClass* Z_Construct_UClass_APickup_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickupSpawnPoint::execStartSpawnPickupTimer)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSpawnPickupTimer(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	void APickupSpawnPoint::StaticRegisterNativesAPickupSpawnPoint()
	{
		UClass* Class = APickupSpawnPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSpawnPickupTimer", &APickupSpawnPoint::execStartSpawnPickupTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics
	{
		struct PickupSpawnPoint_eventStartSpawnPickupTimer_Parms
		{
			AActor* DestroyedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupSpawnPoint_eventStartSpawnPickupTimer_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Pickup/PickupSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupSpawnPoint, nullptr, "StartSpawnPickupTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::PickupSpawnPoint_eventStartSpawnPickupTimer_Parms), Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupSpawnPoint);
	UClass* Z_Construct_UClass_APickupSpawnPoint_NoRegister()
	{
		return APickupSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_APickupSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PickupClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PickupClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedPickup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedPickup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupTimeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnPickupTimeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupTimeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnPickupTimeMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupSpawnPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupSpawnPoint_StartSpawnPickupTimer, "StartSpawnPickupTimer" }, // 3847179353
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Pickup/PickupSpawnPoint.h" },
		{ "ModuleRelativePath", "Item/Pickup/PickupSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses_Inner = { "PickupClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses_MetaData[] = {
		{ "Category", "Pickup Spawn Point Properties" },
		{ "ModuleRelativePath", "Item/Pickup/PickupSpawnPoint.h" },
		{ "ToolTip", "Classes of Pickup able to be spawned." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses = { "PickupClasses", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupSpawnPoint, PickupClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnedPickup_MetaData[] = {
		{ "ModuleRelativePath", "Item/Pickup/PickupSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnedPickup = { "SpawnedPickup", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupSpawnPoint, SpawnedPickup), Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnedPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnedPickup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMin_MetaData[] = {
		{ "Category", "Pickup Spawn Point Properties" },
		{ "ModuleRelativePath", "Item/Pickup/PickupSpawnPoint.h" },
		{ "ToolTip", "Minimum amount of time a pickup it takes for a pickup to spawn." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMin = { "SpawnPickupTimeMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupSpawnPoint, SpawnPickupTimeMin), METADATA_PARAMS(Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMax_MetaData[] = {
		{ "Category", "Pickup Spawn Point Properties" },
		{ "ModuleRelativePath", "Item/Pickup/PickupSpawnPoint.h" },
		{ "ToolTip", "Maximum amount of time a pickup it takes for a pickup to spawn." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMax = { "SpawnPickupTimeMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupSpawnPoint, SpawnPickupTimeMax), METADATA_PARAMS(Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_PickupClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnedPickup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawnPoint_Statics::NewProp_SpawnPickupTimeMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupSpawnPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupSpawnPoint_Statics::ClassParams = {
		&APickupSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupSpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupSpawnPoint()
	{
		if (!Z_Registration_Info_UClass_APickupSpawnPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupSpawnPoint.OuterSingleton, Z_Construct_UClass_APickupSpawnPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupSpawnPoint.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<APickupSpawnPoint>()
	{
		return APickupSpawnPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupSpawnPoint);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupSpawnPoint, APickupSpawnPoint::StaticClass, TEXT("APickupSpawnPoint"), &Z_Registration_Info_UClass_APickupSpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupSpawnPoint), 2933171939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_2843891441(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
