// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Ranged/Projectile/Projectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EHitActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProjectile::execMulticastSpawnMaterialDecal)
	{
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSpawnMaterialDecal_Implementation(Z_Param_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectile::execMulticastOnHit)
	{
		P_GET_ENUM(EHitActor,Z_Param_HitActorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastOnHit_Implementation(EHitActor(Z_Param_HitActorType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectile::execServerSpawnMaterialDecal)
	{
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSpawnMaterialDecal_Validate(Z_Param_Hit))
		{
			RPC_ValidateFailed(TEXT("ServerSpawnMaterialDecal_Validate"));
			return;
		}
		P_THIS->ServerSpawnMaterialDecal_Implementation(Z_Param_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectile::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	static FName NAME_AProjectile_MulticastOnHit = FName(TEXT("MulticastOnHit"));
	void AProjectile::MulticastOnHit(EHitActor HitActorType)
	{
		Projectile_eventMulticastOnHit_Parms Parms;
		Parms.HitActorType=HitActorType;
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_MulticastOnHit),&Parms);
	}
	static FName NAME_AProjectile_MulticastSpawnMaterialDecal = FName(TEXT("MulticastSpawnMaterialDecal"));
	void AProjectile::MulticastSpawnMaterialDecal(FHitResult const& Hit)
	{
		Projectile_eventMulticastSpawnMaterialDecal_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_MulticastSpawnMaterialDecal),&Parms);
	}
	static FName NAME_AProjectile_ServerSpawnMaterialDecal = FName(TEXT("ServerSpawnMaterialDecal"));
	void AProjectile::ServerSpawnMaterialDecal(FHitResult const& Hit)
	{
		Projectile_eventServerSpawnMaterialDecal_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_ServerSpawnMaterialDecal),&Parms);
	}
	void AProjectile::StaticRegisterNativesAProjectile()
	{
		UClass* Class = AProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastOnHit", &AProjectile::execMulticastOnHit },
			{ "MulticastSpawnMaterialDecal", &AProjectile::execMulticastSpawnMaterialDecal },
			{ "OnHit", &AProjectile::execOnHit },
			{ "ServerSpawnMaterialDecal", &AProjectile::execServerSpawnMaterialDecal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_HitActorType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HitActorType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::NewProp_HitActorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::NewProp_HitActorType = { "HitActorType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Projectile_eventMulticastOnHit_Parms, HitActorType), Z_Construct_UEnum_MPShooter_EHitActor, METADATA_PARAMS(nullptr, 0) }; // 3780894590
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::NewProp_HitActorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::NewProp_HitActorType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile, nullptr, "MulticastOnHit", nullptr, nullptr, sizeof(Projectile_eventMulticastOnHit_Parms), Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_MulticastOnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectile_MulticastOnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Projectile_eventMulticastSpawnMaterialDecal_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile, nullptr, "MulticastSpawnMaterialDecal", nullptr, nullptr, sizeof(Projectile_eventMulticastSpawnMaterialDecal_Parms), Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_OnHit_Statics
	{
		struct Projectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AProjectile_OnHit_Statics::Projectile_eventOnHit_Parms), Z_Construct_UFunction_AProjectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Projectile_eventServerSpawnMaterialDecal_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile, nullptr, "ServerSpawnMaterialDecal", nullptr, nullptr, sizeof(Projectile_eventServerSpawnMaterialDecal_Parms), Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectile);
	UClass* Z_Construct_UClass_AProjectile_NoRegister()
	{
		return AProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadShotDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadShotDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactCharacterParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactCharacterParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactCharacterSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactCharacterSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactDecalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactDecalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalLifeSpan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalLifeSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailSystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailSystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDamageFromFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDamageFromFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageInnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageInnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageOuterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageOuterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HitActor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HitActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TracerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectile_MulticastOnHit, "MulticastOnHit" }, // 2836812519
		{ &Z_Construct_UFunction_AProjectile_MulticastSpawnMaterialDecal, "MulticastSpawnMaterialDecal" }, // 2785393948
		{ &Z_Construct_UFunction_AProjectile_OnHit, "OnHit" }, // 226307150
		{ &Z_Construct_UFunction_AProjectile_ServerSpawnMaterialDecal, "ServerSpawnMaterialDecal" }, // 3057701923
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Amount of damage each projectile deals to whatever it hits. Only needs to be set for things like grenades and rockets, since they're explosives." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, Damage), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_HeadShotDamage_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Amount of damage each projectile deals to whatever it hits. Doesn't need to be set for things like grenades and rockets, since they're explosives." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_HeadShotDamage = { "HeadShotDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, HeadShotDamage), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_HeadShotDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_HeadShotDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_InitialSpeed_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Amount of speed each projectile initially starts at. This will also set the MaxSpeed to be equal, although this can be changed in the ProjectileMovement properties." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_InitialSpeed = { "InitialSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, InitialSpeed), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_InitialSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_InitialSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Particles that play on impact with the environment." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Sound that plays on impact with the environment." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactCharacterParticles_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Particles that play on impact with a character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactCharacterParticles = { "ImpactCharacterParticles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, ImpactCharacterParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactCharacterParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactCharacterParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactCharacterSound_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Sound that plays on impact with a character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactCharacterSound = { "ImpactCharacterSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, ImpactCharacterSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactCharacterSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactCharacterSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactDecalMaterial_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Material decal that spawns on impact with the environment." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactDecalMaterial = { "ImpactDecalMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, ImpactDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactDecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactDecalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_DecalSize_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Size of the material decal." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_DecalSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_DecalLifeSpan_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Life span of the material decal." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_DecalLifeSpan = { "DecalLifeSpan", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, DecalLifeSpan), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_DecalLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_DecalLifeSpan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystemComponent = { "TrailSystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, TrailSystemComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystem_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Trail system component for the projectile." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystem = { "TrailSystem", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, TrailSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Mesh component for the projectile." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_MinimumDamageFromFalloff_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Minimum amount of damage applied to an actor from the falloff." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_MinimumDamageFromFalloff = { "MinimumDamageFromFalloff", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, MinimumDamageFromFalloff), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_MinimumDamageFromFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_MinimumDamageFromFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_DamageInnerRadius_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Inner radius of damage for the applied actor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_DamageInnerRadius = { "DamageInnerRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, DamageInnerRadius), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_DamageInnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_DamageInnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_DamageOuterRadius_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Outer radius of damage for the applied actor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_DamageOuterRadius = { "DamageOuterRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, DamageOuterRadius), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_DamageOuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_DamageOuterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_CollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_CollisionBox_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_HitActor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_HitActor_MetaData[] = {
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, HitActor), Z_Construct_UEnum_MPShooter_EHitActor, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_HitActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_HitActor_MetaData)) }; // 3780894590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_Tracer_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Tracer particles for a projectile." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_Tracer = { "Tracer", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, Tracer), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_Tracer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_Tracer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_TracerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_TracerComponent = { "TracerComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, TracerComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_TracerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_TracerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::NewProp_DestroyTime_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/Projectile/Projectile.h" },
		{ "ToolTip", "Time until the projectile is destroyed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp_DestroyTime = { "DestroyTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectile, DestroyTime), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::NewProp_DestroyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::NewProp_DestroyTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_HeadShotDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_InitialSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactCharacterParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactCharacterSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ImpactDecalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_DecalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_DecalLifeSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_TrailSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_MinimumDamageFromFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_DamageInnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_DamageOuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_CollisionBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_HitActor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_HitActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_ProjectileMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_Tracer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_TracerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp_DestroyTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_Statics::ClassParams = {
		&AProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectile()
	{
		if (!Z_Registration_Info_UClass_AProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectile.OuterSingleton, Z_Construct_UClass_AProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectile.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AProjectile>()
	{
		return AProjectile::StaticClass();
	}

	void AProjectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_HitActor(TEXT("HitActor"));

		const bool bIsValid = true
			&& Name_HitActor == ClassReps[(int32)ENetFields_Private::HitActor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AProjectile"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectile, AProjectile::StaticClass, TEXT("AProjectile"), &Z_Registration_Info_UClass_AProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectile), 3185173018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_3981902128(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
