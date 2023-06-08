// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Throwable/ThrowableWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableWeapon() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AThrowableWeapon_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AThrowableWeapon();
	MPSHOOTER_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EHitActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EThrowableWeaponType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPCharacter_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AThrowableWeapon::execOnRep_Ammo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Ammo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableWeapon::execMulticastOnHit)
	{
		P_GET_ENUM(EHitActor,Z_Param_HitActorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastOnHit_Implementation(EHitActor(Z_Param_HitActorType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableWeapon::execOnHit)
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
	static FName NAME_AThrowableWeapon_MulticastOnHit = FName(TEXT("MulticastOnHit"));
	void AThrowableWeapon::MulticastOnHit(EHitActor HitActorType)
	{
		ThrowableWeapon_eventMulticastOnHit_Parms Parms;
		Parms.HitActorType=HitActorType;
		ProcessEvent(FindFunctionChecked(NAME_AThrowableWeapon_MulticastOnHit),&Parms);
	}
	void AThrowableWeapon::StaticRegisterNativesAThrowableWeapon()
	{
		UClass* Class = AThrowableWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastOnHit", &AThrowableWeapon::execMulticastOnHit },
			{ "OnHit", &AThrowableWeapon::execOnHit },
			{ "OnRep_Ammo", &AThrowableWeapon::execOnRep_Ammo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_HitActorType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HitActorType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::NewProp_HitActorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::NewProp_HitActorType = { "HitActorType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableWeapon_eventMulticastOnHit_Parms, HitActorType), Z_Construct_UEnum_MPShooter_EHitActor, METADATA_PARAMS(nullptr, 0) }; // 3780894590
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::NewProp_HitActorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::NewProp_HitActorType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableWeapon, nullptr, "MulticastOnHit", nullptr, nullptr, sizeof(ThrowableWeapon_eventMulticastOnHit_Parms), Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics
	{
		struct ThrowableWeapon_eventOnHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableWeapon_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableWeapon_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableWeapon_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableWeapon_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableWeapon_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableWeapon, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::ThrowableWeapon_eventOnHit_Parms), Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowableWeapon_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableWeapon_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableWeapon_OnRep_Ammo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableWeapon_OnRep_Ammo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableWeapon_OnRep_Ammo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableWeapon, nullptr, "OnRep_Ammo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowableWeapon_OnRep_Ammo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableWeapon_OnRep_Ammo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowableWeapon_OnRep_Ammo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableWeapon_OnRep_Ammo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowableWeapon);
	UClass* Z_Construct_UClass_AThrowableWeapon_NoRegister()
	{
		return AThrowableWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AThrowableWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThrowableWeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableWeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThrowableWeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MagCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoIcon;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPOwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPOwnerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPOwnerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPOwnerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowableWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowableWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowableWeapon_MulticastOnHit, "MulticastOnHit" }, // 211902551
		{ &Z_Construct_UFunction_AThrowableWeapon_OnHit, "OnHit" }, // 592786154
		{ &Z_Construct_UFunction_AThrowableWeapon_OnRep_Ammo, "OnRep_Ammo" }, // 1615260924
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_FireDelay_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Cooldown in between firing a weapon." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, FireDelay), METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_FireDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_FireDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Amount of damage each projectile deals to whatever it hits." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Particles that play on impact with the environment." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Sound that plays on impact with the environment." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactCharacterParticles_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Particles that play on impact with a character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactCharacterParticles = { "ImpactCharacterParticles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, ImpactCharacterParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactCharacterParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactCharacterParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactCharacterSound_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Sound that plays on impact with a character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactCharacterSound = { "ImpactCharacterSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, ImpactCharacterSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactCharacterSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactCharacterSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TrailSystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TrailSystemComponent = { "TrailSystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, TrailSystemComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TrailSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TrailSystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TrailSystem_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Trail system component for the projectile." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TrailSystem = { "TrailSystem", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, TrailSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TrailSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TrailSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Mesh component for the projectile." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ProjectileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ProjectileMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MinimumDamageFromFalloff_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Minimum amount of damage applied to an actor from the falloff." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MinimumDamageFromFalloff = { "MinimumDamageFromFalloff", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, MinimumDamageFromFalloff), METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MinimumDamageFromFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MinimumDamageFromFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DamageInnerRadius_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Inner radius of damage for the applied actor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DamageInnerRadius = { "DamageInnerRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, DamageInnerRadius), METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DamageInnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DamageInnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DamageOuterRadius_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Outer radius of damage for the applied actor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DamageOuterRadius = { "DamageOuterRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, DamageOuterRadius), METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DamageOuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DamageOuterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "ThrowableWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_CollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_CollisionBox_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_HitActor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_HitActor_MetaData[] = {
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, HitActor), Z_Construct_UEnum_MPShooter_EHitActor, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_HitActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_HitActor_MetaData)) }; // 3780894590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "ThrowableWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ThrowableWeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ThrowableWeaponType_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Type of weapon." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ThrowableWeaponType = { "ThrowableWeaponType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, ThrowableWeaponType), Z_Construct_UEnum_MPShooter_EThrowableWeaponType, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ThrowableWeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ThrowableWeaponType_MetaData)) }; // 3911890291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Animation played when a weapon is fired." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, FireAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Ammo_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Amount of ammo in a weapon." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Ammo = { "Ammo", "OnRep_Ammo", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, Ammo), METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MagCapacity_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Max capacity in a weapon's magazine." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MagCapacity = { "MagCapacity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, MagCapacity), METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MagCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MagCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_AmmoIcon_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Icon of a weapon's ammo in the inventory." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_AmmoIcon = { "AmmoIcon", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, AmmoIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_AmmoIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_AmmoIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Tracer_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Tracer particles for a projectile." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Tracer = { "Tracer", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, Tracer), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Tracer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Tracer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TracerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TracerComponent = { "TracerComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, TracerComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TracerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TracerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DestroyTime_MetaData[] = {
		{ "Category", "Projectile Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Time until the projectile is destroyed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DestroyTime = { "DestroyTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, DestroyTime), METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DestroyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DestroyTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MPOwnerCharacter_MetaData[] = {
		{ "Comment", "//\n// Character Properties\n//\n" },
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
		{ "ToolTip", "Character Properties" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MPOwnerCharacter = { "MPOwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, MPOwnerCharacter), Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MPOwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MPOwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MPOwnerController_MetaData[] = {
		{ "ModuleRelativePath", "Item/Weapon/Throwable/ThrowableWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MPOwnerController = { "MPOwnerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableWeapon, MPOwnerController), Z_Construct_UClass_AMPPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MPOwnerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MPOwnerController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowableWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_FireDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactCharacterParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ImpactCharacterSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TrailSystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TrailSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ProjectileMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MinimumDamageFromFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DamageInnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DamageOuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_CollisionBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_HitActor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_HitActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ProjectileMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ThrowableWeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_ThrowableWeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_FireAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Ammo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MagCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_AmmoIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_Tracer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_TracerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_DestroyTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MPOwnerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeapon_Statics::NewProp_MPOwnerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowableWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowableWeapon_Statics::ClassParams = {
		&AThrowableWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThrowableWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThrowableWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowableWeapon()
	{
		if (!Z_Registration_Info_UClass_AThrowableWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowableWeapon.OuterSingleton, Z_Construct_UClass_AThrowableWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThrowableWeapon.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AThrowableWeapon>()
	{
		return AThrowableWeapon::StaticClass();
	}

	void AThrowableWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_HitActor(TEXT("HitActor"));
		static const FName Name_Ammo(TEXT("Ammo"));

		const bool bIsValid = true
			&& Name_HitActor == ClassReps[(int32)ENetFields_Private::HitActor].Property->GetFName()
			&& Name_Ammo == ClassReps[(int32)ENetFields_Private::Ammo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AThrowableWeapon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowableWeapon);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThrowableWeapon, AThrowableWeapon::StaticClass, TEXT("AThrowableWeapon"), &Z_Registration_Info_UClass_AThrowableWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowableWeapon), 1995941277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_4268913348(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
