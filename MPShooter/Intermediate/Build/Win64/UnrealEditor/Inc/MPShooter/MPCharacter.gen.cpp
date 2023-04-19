// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Character/MPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPCharacter() {}
// Cross Module References
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EPhysAssetCollision();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FPhysAssetInformation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_MPShooter_OnLeftGame__DelegateSignature();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPCharacter_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	MPSHOOTER_API UClass* Z_Construct_UClass_AThrowableWeapon_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerController_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_ULagComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysAssetCollision;
	static UEnum* EPhysAssetCollision_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysAssetCollision.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysAssetCollision.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EPhysAssetCollision, Z_Construct_UPackage__Script_MPShooter(), TEXT("EPhysAssetCollision"));
		}
		return Z_Registration_Info_UEnum_EPhysAssetCollision.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EPhysAssetCollision>()
	{
		return EPhysAssetCollision_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EPhysAssetCollision_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EPhysAssetCollision_Statics::Enumerators[] = {
		{ "EPhysAssetCollision::EPAC_Box", (int64)EPhysAssetCollision::EPAC_Box },
		{ "EPhysAssetCollision::EPAC_Sphere", (int64)EPhysAssetCollision::EPAC_Sphere },
		{ "EPhysAssetCollision::EPAC_Convex", (int64)EPhysAssetCollision::EPAC_Convex },
		{ "EPhysAssetCollision::EPAC_TaperedCapsule", (int64)EPhysAssetCollision::EPAC_TaperedCapsule },
		{ "EPhysAssetCollision::EPAC_MAX", (int64)EPhysAssetCollision::EPAC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EPhysAssetCollision_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPAC_Box.DisplayName", "Box" },
		{ "EPAC_Box.Name", "EPhysAssetCollision::EPAC_Box" },
		{ "EPAC_Convex.DisplayName", "Convex" },
		{ "EPAC_Convex.Name", "EPhysAssetCollision::EPAC_Convex" },
		{ "EPAC_MAX.DisplayName", "DefaultMAX" },
		{ "EPAC_MAX.Name", "EPhysAssetCollision::EPAC_MAX" },
		{ "EPAC_Sphere.DisplayName", "Sphere" },
		{ "EPAC_Sphere.Name", "EPhysAssetCollision::EPAC_Sphere" },
		{ "EPAC_TaperedCapsule.DisplayName", "Tapered Capsule" },
		{ "EPAC_TaperedCapsule.Name", "EPhysAssetCollision::EPAC_TaperedCapsule" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EPhysAssetCollision_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EPhysAssetCollision",
		"EPhysAssetCollision",
		Z_Construct_UEnum_MPShooter_EPhysAssetCollision_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EPhysAssetCollision_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EPhysAssetCollision_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EPhysAssetCollision_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EPhysAssetCollision()
	{
		if (!Z_Registration_Info_UEnum_EPhysAssetCollision.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysAssetCollision.InnerSingleton, Z_Construct_UEnum_MPShooter_EPhysAssetCollision_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysAssetCollision.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysAssetInformation;
class UScriptStruct* FPhysAssetInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysAssetInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysAssetInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysAssetInformation, Z_Construct_UPackage__Script_MPShooter(), TEXT("PhysAssetInformation"));
	}
	return Z_Registration_Info_UScriptStruct_PhysAssetInformation.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FPhysAssetInformation>()
{
	return FPhysAssetInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysAssetInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneLocalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneLocalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneWorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneWorldTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysAssetInformation>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_CollisionType_MetaData[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetInformation, CollisionType), Z_Construct_UEnum_MPShooter_EPhysAssetCollision, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_CollisionType_MetaData)) }; // 502408335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneName_MetaData[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetInformation, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_HalfHeight_MetaData[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetInformation, HalfHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_HalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_HalfHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetInformation, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_Extent_MetaData[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetInformation, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_Extent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneLocalTransform_MetaData[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneLocalTransform = { "BoneLocalTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetInformation, BoneLocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneLocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneLocalTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneWorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneWorldTransform = { "BoneWorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysAssetInformation, BoneWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneWorldTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneLocalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewProp_BoneWorldTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		&NewStructOps,
		"PhysAssetInformation",
		sizeof(FPhysAssetInformation),
		alignof(FPhysAssetInformation),
		Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysAssetInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysAssetInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysAssetInformation.InnerSingleton, Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysAssetInformation.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MPShooter_OnLeftGame__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MPShooter_OnLeftGame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MPShooter_OnLeftGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MPShooter, nullptr, "OnLeftGame__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MPShooter_OnLeftGame__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MPShooter_OnLeftGame__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MPShooter_OnLeftGame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MPShooter_OnLeftGame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMPCharacter::execGetSurfaceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=P_THIS->GetSurfaceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPCharacter::execOnRep_Shield)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LastShield);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Shield(Z_Param_LastShield);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPCharacter::execUpdateDissolveMaterial)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DissolveValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDissolveMaterial(Z_Param_DissolveValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPCharacter::execOnRep_Health)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LastHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_LastHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPCharacter::execOnRep_OverlappingThrowableWeapon)
	{
		P_GET_OBJECT(AThrowableWeapon,Z_Param_PrevThrowableWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverlappingThrowableWeapon(Z_Param_PrevThrowableWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPCharacter::execServerEquipButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEquipButtonPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPCharacter::execOnRep_OverlappingWeapon)
	{
		P_GET_OBJECT(AWeapon,Z_Param_PrevWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverlappingWeapon(Z_Param_PrevWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPCharacter::execReceiveDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatorController);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatorController,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPCharacter::execServerLeaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerLeaveGame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPCharacter::execMulticastEliminated)
	{
		P_GET_UBOOL(Z_Param_bPlayerLeftGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastEliminated_Implementation(Z_Param_bPlayerLeftGame);
		P_NATIVE_END;
	}
	static FName NAME_AMPCharacter_MulticastEliminated = FName(TEXT("MulticastEliminated"));
	void AMPCharacter::MulticastEliminated(bool bPlayerLeftGame)
	{
		MPCharacter_eventMulticastEliminated_Parms Parms;
		Parms.bPlayerLeftGame=bPlayerLeftGame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMPCharacter_MulticastEliminated),&Parms);
	}
	static FName NAME_AMPCharacter_ServerEquipButtonPressed = FName(TEXT("ServerEquipButtonPressed"));
	void AMPCharacter::ServerEquipButtonPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMPCharacter_ServerEquipButtonPressed),NULL);
	}
	static FName NAME_AMPCharacter_ServerLeaveGame = FName(TEXT("ServerLeaveGame"));
	void AMPCharacter::ServerLeaveGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMPCharacter_ServerLeaveGame),NULL);
	}
	void AMPCharacter::StaticRegisterNativesAMPCharacter()
	{
		UClass* Class = AMPCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSurfaceType", &AMPCharacter::execGetSurfaceType },
			{ "MulticastEliminated", &AMPCharacter::execMulticastEliminated },
			{ "OnRep_Health", &AMPCharacter::execOnRep_Health },
			{ "OnRep_OverlappingThrowableWeapon", &AMPCharacter::execOnRep_OverlappingThrowableWeapon },
			{ "OnRep_OverlappingWeapon", &AMPCharacter::execOnRep_OverlappingWeapon },
			{ "OnRep_Shield", &AMPCharacter::execOnRep_Shield },
			{ "ReceiveDamage", &AMPCharacter::execReceiveDamage },
			{ "ServerEquipButtonPressed", &AMPCharacter::execServerEquipButtonPressed },
			{ "ServerLeaveGame", &AMPCharacter::execServerLeaveGame },
			{ "UpdateDissolveMaterial", &AMPCharacter::execUpdateDissolveMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics
	{
		struct MPCharacter_eventGetSurfaceType_Parms
		{
			TEnumAsByte<EPhysicalSurface> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventGetSurfaceType_Parms, ReturnValue), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPCharacter, nullptr, "GetSurfaceType", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::MPCharacter_eventGetSurfaceType_Parms), Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPCharacter_GetSurfaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPCharacter_GetSurfaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics
	{
		static void NewProp_bPlayerLeftGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerLeftGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::NewProp_bPlayerLeftGame_SetBit(void* Obj)
	{
		((MPCharacter_eventMulticastEliminated_Parms*)Obj)->bPlayerLeftGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::NewProp_bPlayerLeftGame = { "bPlayerLeftGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MPCharacter_eventMulticastEliminated_Parms), &Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::NewProp_bPlayerLeftGame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::NewProp_bPlayerLeftGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPCharacter, nullptr, "MulticastEliminated", nullptr, nullptr, sizeof(MPCharacter_eventMulticastEliminated_Parms), Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPCharacter_MulticastEliminated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPCharacter_MulticastEliminated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics
	{
		struct MPCharacter_eventOnRep_Health_Parms
		{
			float LastHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::NewProp_LastHealth = { "LastHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventOnRep_Health_Parms, LastHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::NewProp_LastHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPCharacter, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::MPCharacter_eventOnRep_Health_Parms), Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPCharacter_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPCharacter_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics
	{
		struct MPCharacter_eventOnRep_OverlappingThrowableWeapon_Parms
		{
			AThrowableWeapon* PrevThrowableWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevThrowableWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::NewProp_PrevThrowableWeapon = { "PrevThrowableWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventOnRep_OverlappingThrowableWeapon_Parms, PrevThrowableWeapon), Z_Construct_UClass_AThrowableWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::NewProp_PrevThrowableWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPCharacter, nullptr, "OnRep_OverlappingThrowableWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::MPCharacter_eventOnRep_OverlappingThrowableWeapon_Parms), Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics
	{
		struct MPCharacter_eventOnRep_OverlappingWeapon_Parms
		{
			AWeapon* PrevWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::NewProp_PrevWeapon = { "PrevWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventOnRep_OverlappingWeapon_Parms, PrevWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::NewProp_PrevWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPCharacter, nullptr, "OnRep_OverlappingWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::MPCharacter_eventOnRep_OverlappingWeapon_Parms), Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics
	{
		struct MPCharacter_eventOnRep_Shield_Parms
		{
			float LastShield;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastShield;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::NewProp_LastShield = { "LastShield", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventOnRep_Shield_Parms, LastShield), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::NewProp_LastShield,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPCharacter, nullptr, "OnRep_Shield", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::MPCharacter_eventOnRep_Shield_Parms), Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPCharacter_OnRep_Shield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPCharacter_OnRep_Shield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics
	{
		struct MPCharacter_eventReceiveDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatorController;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventReceiveDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventReceiveDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventReceiveDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_InstigatorController = { "InstigatorController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventReceiveDamage_Parms, InstigatorController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventReceiveDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_InstigatorController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPCharacter, nullptr, "ReceiveDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::MPCharacter_eventReceiveDamage_Parms), Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPCharacter_ReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPCharacter_ReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPCharacter_ServerEquipButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPCharacter_ServerEquipButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPCharacter, nullptr, "ServerEquipButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPCharacter_ServerEquipButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPCharacter_ServerEquipButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPCharacter_ServerLeaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_ServerLeaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPCharacter_ServerLeaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPCharacter, nullptr, "ServerLeaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_ServerLeaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_ServerLeaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPCharacter_ServerLeaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPCharacter_ServerLeaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics
	{
		struct MPCharacter_eventUpdateDissolveMaterial_Parms
		{
			float DissolveValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DissolveValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue = { "DissolveValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPCharacter_eventUpdateDissolveMaterial_Parms, DissolveValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPCharacter, nullptr, "UpdateDissolveMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::MPCharacter_eventUpdateDissolveMaterial_Parms), Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPCharacter);
	UClass* Z_Construct_UClass_AMPCharacter_NoRegister()
	{
		return AMPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableGameplay_MetaData[];
#endif
		static void NewProp_bDisableGameplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableGameplay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfaceSoundMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceSoundMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceSoundMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceSoundMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfaceParticleMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceParticleMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceParticleMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceParticleMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysAssetInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysAssetInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysAssetInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPhysAssets_MetaData[];
#endif
		static void NewProp_bDrawPhysAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPhysAssets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCollisionBoxes_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HitCollisionBoxes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCollisionBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HitCollisionBoxes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCollisionCapsules_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HitCollisionCapsules_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCollisionCapsules_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HitCollisionCapsules;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitCapsuleBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitCapsuleBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_hitCapsuleBones;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitBoxBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitBoxBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_hitBoxBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPPlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverheadWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverheadWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingThrowableWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingThrowableWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Combat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Combat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buff_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Buff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LagCompensation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LagCompensation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireWeaponMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireWeaponMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwapMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitReactMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EliminateMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EliminateMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EliminateDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EliminateDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DissolveTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DissolveCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDissolveMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicDissolveMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Shield;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMPCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMPCharacter_GetSurfaceType, "GetSurfaceType" }, // 839051268
		{ &Z_Construct_UFunction_AMPCharacter_MulticastEliminated, "MulticastEliminated" }, // 3887871201
		{ &Z_Construct_UFunction_AMPCharacter_OnRep_Health, "OnRep_Health" }, // 1181647892
		{ &Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingThrowableWeapon, "OnRep_OverlappingThrowableWeapon" }, // 2130971630
		{ &Z_Construct_UFunction_AMPCharacter_OnRep_OverlappingWeapon, "OnRep_OverlappingWeapon" }, // 134812474
		{ &Z_Construct_UFunction_AMPCharacter_OnRep_Shield, "OnRep_Shield" }, // 3118912397
		{ &Z_Construct_UFunction_AMPCharacter_ReceiveDamage, "ReceiveDamage" }, // 3433032911
		{ &Z_Construct_UFunction_AMPCharacter_ServerEquipButtonPressed, "ServerEquipButtonPressed" }, // 3453277728
		{ &Z_Construct_UFunction_AMPCharacter_ServerLeaveGame, "ServerLeaveGame" }, // 2451018194
		{ &Z_Construct_UFunction_AMPCharacter_UpdateDissolveMaterial, "UpdateDissolveMaterial" }, // 605684417
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MPCharacter.h" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDisableGameplay_MetaData[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDisableGameplay_SetBit(void* Obj)
	{
		((AMPCharacter*)Obj)->bDisableGameplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDisableGameplay = { "bDisableGameplay", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMPCharacter), &Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDisableGameplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDisableGameplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDisableGameplay_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceSoundMap_ValueProp = { "SurfaceSoundMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceSoundMap_Key_KeyProp = { "SurfaceSoundMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceSoundMap_MetaData[] = {
		{ "Category", "Surface" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Sound that plays when a character walks on different physical surface materials." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceSoundMap = { "SurfaceSoundMap", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, SurfaceSoundMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceSoundMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceSoundMap_MetaData)) }; // 455643187
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceParticleMap_ValueProp = { "SurfaceParticleMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceParticleMap_Key_KeyProp = { "SurfaceParticleMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceParticleMap_MetaData[] = {
		{ "Category", "Surface" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Particles made by a character walking on different physical surface materials." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceParticleMap = { "SurfaceParticleMap", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, SurfaceParticleMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceParticleMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceParticleMap_MetaData)) }; // 455643187
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_PhysAssetInfo_Inner = { "PhysAssetInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPhysAssetInformation, METADATA_PARAMS(nullptr, 0) }; // 4026808977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_PhysAssetInfo_MetaData[] = {
		{ "Category", "MPCharacter" },
		{ "Comment", "//\n// Hit Boxes\n// (for server-side rewind)\n//\n" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Hit Boxes\n(for server-side rewind)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_PhysAssetInfo = { "PhysAssetInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, PhysAssetInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_PhysAssetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_PhysAssetInfo_MetaData)) }; // 4026808977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDrawPhysAssets_MetaData[] = {
		{ "Category", "DEBUG" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Checks whether or not to draw the meshes' physics assets." },
	};
#endif
	void Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDrawPhysAssets_SetBit(void* Obj)
	{
		((AMPCharacter*)Obj)->bDrawPhysAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDrawPhysAssets = { "bDrawPhysAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMPCharacter), &Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDrawPhysAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDrawPhysAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDrawPhysAssets_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionBoxes_ValueProp = { "HitCollisionBoxes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionBoxes_Key_KeyProp = { "HitCollisionBoxes_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionBoxes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionBoxes = { "HitCollisionBoxes", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, HitCollisionBoxes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionBoxes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionCapsules_ValueProp = { "HitCollisionCapsules", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionCapsules_Key_KeyProp = { "HitCollisionCapsules_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionCapsules_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionCapsules = { "HitCollisionCapsules", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, HitCollisionCapsules), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionCapsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionCapsules_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitCapsuleBones_Inner = { "hitCapsuleBones", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitCapsuleBones_MetaData[] = {
		{ "Category", "DEBUG" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Checks whether or not to draw the capsule components derirved from the meshes' physics assets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitCapsuleBones = { "hitCapsuleBones", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, hitCapsuleBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitCapsuleBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitCapsuleBones_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitBoxBones_Inner = { "hitBoxBones", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitBoxBones_MetaData[] = {
		{ "Category", "DEBUG" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Checks whether or not to draw the box components derirved from the meshes' physics assets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitBoxBones = { "hitBoxBones", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, hitBoxBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitBoxBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitBoxBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_MPPlayerController_MetaData[] = {
		{ "Comment", "//\n// Character Properties\n//\n" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Character Properties" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_MPPlayerController = { "MPPlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, MPPlayerController), Z_Construct_UClass_AMPPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_MPPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_MPPlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_MPPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_MPPlayerState = { "MPPlayerState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, MPPlayerState), Z_Construct_UClass_AMPPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_MPPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_MPPlayerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverheadWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MPCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Displays information above character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverheadWidget = { "OverheadWidget", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, OverheadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverheadWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverheadWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverlappingWeapon_MetaData[] = {
		{ "Comment", "//\n// Weapon Properties\n//\n" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Weapon Properties" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", "OnRep_OverlappingWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, OverlappingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverlappingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverlappingWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverlappingThrowableWeapon_MetaData[] = {
		{ "Comment", "//\n// Throwable Properties\n//\n" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Throwable Properties" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverlappingThrowableWeapon = { "OverlappingThrowableWeapon", "OnRep_OverlappingThrowableWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, OverlappingThrowableWeapon), Z_Construct_UClass_AThrowableWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverlappingThrowableWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverlappingThrowableWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_Combat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MPCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Handles logic to anything related to combat." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_Combat = { "Combat", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, Combat), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_Combat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_Combat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_Buff_MetaData[] = {
		{ "Category", "MPCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Handles logic to anything related to buffs." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_Buff = { "Buff", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, Buff), Z_Construct_UClass_UBuffComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_Buff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_Buff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_LagCompensation_MetaData[] = {
		{ "Category", "MPCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Handles logic to anything related to lag compensation." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_LagCompensation = { "LagCompensation", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, LagCompensation), Z_Construct_UClass_ULagComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_LagCompensation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_LagCompensation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_CameraThreshold_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Amount before the character mesh is set invisible." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_CameraThreshold = { "CameraThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, CameraThreshold), METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_CameraThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_CameraThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_FireWeaponMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Montage that plays if a character fires a weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_FireWeaponMontage = { "FireWeaponMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, FireWeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_FireWeaponMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_FireWeaponMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Montage that plays if a character is reloading a weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_ReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_ReloadMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_SwapMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Montage that plays if a character is swapping a weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_SwapMontage = { "SwapMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, SwapMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_SwapMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_SwapMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitReactMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Montage that plays if a character is hit." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitReactMontage = { "HitReactMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitReactMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitReactMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_ThrowMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Montage that plays if a character is throwing a throwable." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_ThrowMontage = { "ThrowMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, ThrowMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_ThrowMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_ThrowMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_EliminateMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Montage that plays if a character is eliminated." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_EliminateMontage = { "EliminateMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, EliminateMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_EliminateMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_EliminateMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Max amount of HP a character has." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Percentage of HP a character has." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_EliminateDelay_MetaData[] = {
		{ "Category", "Eliminated" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Amount of time before respawn." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_EliminateDelay = { "EliminateDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, EliminateDelay), METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_EliminateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_EliminateDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveTimeline_MetaData[] = {
		{ "Category", "MPCharacter" },
		{ "Comment", "//\n// Dissolve Effect\n//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Dissolve Effect" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveTimeline = { "DissolveTimeline", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, DissolveTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveTimeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveCurve_MetaData[] = {
		{ "Category", "Eliminated" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Curve of a timeline where an eliminated character is dissolved." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveCurve = { "DissolveCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, DissolveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData[] = {
		{ "Category", "Eliminated" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Material for when an eliminated character is dissolved." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveMaterialInstance = { "DissolveMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, DissolveMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData[] = {
		{ "Category", "Eliminated" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Dynamic instanced material (made at runtime) for when an eliminated character is dissolved." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_DynamicDissolveMaterialInstance = { "DynamicDissolveMaterialInstance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, DynamicDissolveMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotEffect_MetaData[] = {
		{ "Category", "Elim Bot" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Particle system bot generated on elimination." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotEffect = { "ElimBotEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, ElimBotEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotComponent_MetaData[] = {
		{ "Category", "Elim Bot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Particle system component for the bot generated on elimination." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotComponent = { "ElimBotComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, ElimBotComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotSFX_MetaData[] = {
		{ "Category", "Elim Bot" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Sound effect played for the bot generated on elimination." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotSFX = { "ElimBotSFX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, ElimBotSFX), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotSFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_MaxShield_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Max amount of SP a character has." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_MaxShield = { "MaxShield", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, MaxShield), METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_MaxShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_MaxShield_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPCharacter_Statics::NewProp_Shield_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Character/MPCharacter.h" },
		{ "ToolTip", "Percentage of SP a character has." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPCharacter_Statics::NewProp_Shield = { "Shield", "OnRep_Shield", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPCharacter, Shield), METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::NewProp_Shield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::NewProp_Shield_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDisableGameplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceSoundMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceSoundMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceSoundMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceParticleMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceParticleMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_SurfaceParticleMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_PhysAssetInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_PhysAssetInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_bDrawPhysAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionBoxes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionBoxes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionCapsules_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionCapsules_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitCollisionCapsules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitCapsuleBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitCapsuleBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitBoxBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_hitBoxBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_MPPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_MPPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverheadWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverlappingWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_OverlappingThrowableWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_Combat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_Buff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_LagCompensation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_CameraThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_FireWeaponMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_ReloadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_SwapMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_HitReactMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_ThrowMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_EliminateMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_EliminateDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_DissolveMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_DynamicDissolveMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_ElimBotSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_MaxShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPCharacter_Statics::NewProp_Shield,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMPCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister, (int32)VTABLE_OFFSET(AMPCharacter, IInteractWithCrosshairsInterface), false },  // 1336096169
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPCharacter_Statics::ClassParams = {
		&AMPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMPCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMPCharacter()
	{
		if (!Z_Registration_Info_UClass_AMPCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPCharacter.OuterSingleton, Z_Construct_UClass_AMPCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMPCharacter.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AMPCharacter>()
	{
		return AMPCharacter::StaticClass();
	}

	void AMPCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bDisableGameplay(TEXT("bDisableGameplay"));
		static const FName Name_OverlappingWeapon(TEXT("OverlappingWeapon"));
		static const FName Name_OverlappingThrowableWeapon(TEXT("OverlappingThrowableWeapon"));
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Shield(TEXT("Shield"));

		const bool bIsValid = true
			&& Name_bDisableGameplay == ClassReps[(int32)ENetFields_Private::bDisableGameplay].Property->GetFName()
			&& Name_OverlappingWeapon == ClassReps[(int32)ENetFields_Private::OverlappingWeapon].Property->GetFName()
			&& Name_OverlappingThrowableWeapon == ClassReps[(int32)ENetFields_Private::OverlappingThrowableWeapon].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Shield == ClassReps[(int32)ENetFields_Private::Shield].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMPCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPCharacter);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_Statics::EnumInfo[] = {
		{ EPhysAssetCollision_StaticEnum, TEXT("EPhysAssetCollision"), &Z_Registration_Info_UEnum_EPhysAssetCollision, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 502408335U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_Statics::ScriptStructInfo[] = {
		{ FPhysAssetInformation::StaticStruct, Z_Construct_UScriptStruct_FPhysAssetInformation_Statics::NewStructOps, TEXT("PhysAssetInformation"), &Z_Registration_Info_UScriptStruct_PhysAssetInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysAssetInformation), 4026808977U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMPCharacter, AMPCharacter::StaticClass, TEXT("AMPCharacter"), &Z_Registration_Info_UClass_AMPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPCharacter), 895649027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_3992289864(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
