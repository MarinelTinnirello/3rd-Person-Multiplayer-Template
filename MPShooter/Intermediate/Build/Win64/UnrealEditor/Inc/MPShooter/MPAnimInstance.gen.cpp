// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Character/MPAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPAnimInstance() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UMPAnimInstance_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UMPAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPCharacter_NoRegister();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_ETurningInPlace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UMPAnimInstance::StaticRegisterNativesUMPAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMPAnimInstance);
	UClass* Z_Construct_UClass_UMPAnimInstance_NoRegister()
	{
		return UMPAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMPAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[];
#endif
		static void NewProp_bIsCrouched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponEquipped_MetaData[];
#endif
		static void NewProp_bWeaponEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[];
#endif
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocallyControlled_MetaData[];
#endif
		static void NewProp_bLocallyControlled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocallyControlled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEliminated_MetaData[];
#endif
		static void NewProp_bEliminated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEliminated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AO_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AO_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AO_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AO_Pitch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TurningInPlace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurningInPlace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TurningInPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateRootBone_MetaData[];
#endif
		static void NewProp_bRotateRootBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFABRIK_MetaData[];
#endif
		static void NewProp_bUseFABRIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFABRIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAimOffsets_MetaData[];
#endif
		static void NewProp_bUseAimOffsets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAimOffsets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedHandBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EquippedHandBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedHandSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EquippedHandSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryHandSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SecondaryHandSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryHandTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryHandTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedHandRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquippedHandRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransformEquippedHand_MetaData[];
#endif
		static void NewProp_bTransformEquippedHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformEquippedHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ThrowableSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackSpineSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BackSpineSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HeadBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMPAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/MPAnimInstance.h" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_MPCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_MPCharacter = { "MPCharacter", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, MPCharacter), Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_MPCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_MPCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_Spd_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "A character's speed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_Spd = { "Spd", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, Spd), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_Spd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_Spd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if a character is in the air." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if a character is accelerating." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsCrouched_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if a character is crouched." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bIsCrouched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsCrouched_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bWeaponEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if a character has a weapon equipped." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bWeaponEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bWeaponEquipped = { "bWeaponEquipped", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bWeaponEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bWeaponEquipped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if a character is aiming." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bLocallyControlled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if a character is locally controlled." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bLocallyControlled_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bLocallyControlled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bLocallyControlled = { "bLocallyControlled", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bLocallyControlled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bLocallyControlled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bLocallyControlled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bEliminated_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if a character is eliminated." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bEliminated_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bEliminated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bEliminated = { "bEliminated", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bEliminated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bEliminated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bEliminated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_YawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Offset on the Yaw axis during movement (walking, crouching, aiming, etc.)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, YawOffset), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_YawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_YawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_Lean_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "How much a character leans when walking with an equipped weapon." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, Lean), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_Lean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_Lean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_AO_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Offset on the Yaw axis while aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_AO_Yaw = { "AO_Yaw", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, AO_Yaw), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_AO_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_AO_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_AO_Pitch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Offset on the Pitch axis when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_AO_Pitch = { "AO_Pitch", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, AO_Pitch), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_AO_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_AO_Pitch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_TurningInPlace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_TurningInPlace_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Determines the direction the character is turning (left, right, not turning)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_TurningInPlace = { "TurningInPlace", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, TurningInPlace), Z_Construct_UEnum_MPShooter_ETurningInPlace, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_TurningInPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_TurningInPlace_MetaData)) }; // 397390742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bRotateRootBone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if we should rotate the root bone, based on if the character is on if the locally owned player is a simulated proxy or not. This is for better performance in multiplayer so that we don't have to reliably update the animation every tick." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bRotateRootBone_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bRotateRootBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bRotateRootBone = { "bRotateRootBone", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bRotateRootBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bRotateRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bRotateRootBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseFABRIK_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if we should use FABRIK for a particular animation." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseFABRIK_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bUseFABRIK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseFABRIK = { "bUseFABRIK", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseFABRIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseFABRIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseFABRIK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseAimOffsets_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if we should use Aim Offset for a particular animation." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseAimOffsets_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bUseAimOffsets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseAimOffsets = { "bUseAimOffsets", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseAimOffsets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseAimOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseAimOffsets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandBone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bone" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Character's hand bone where the weapon is equipped. Most animation packs will be right handed, so the right hand is what you're likely to fill in." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandBone = { "EquippedHandBone", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, EquippedHandBone), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandSocket_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Weapon's socket where the weapon is attached to the character. Most animation packs will be right handed, so the right hand socket is what you're likely to fill in." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandSocket = { "EquippedHandSocket", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, EquippedHandSocket), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_SecondaryHandSocket_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Weapon's socket where the character's free hand is attached. Most animation packs will be right handed, so the left hand socket is what you're likely to fill in." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_SecondaryHandSocket = { "SecondaryHandSocket", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, SecondaryHandSocket), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_SecondaryHandSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_SecondaryHandSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_SecondaryHandTransform_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Character's hand bone transform to be used as the effector for FABRIK. This will be the transform of the SecondaryHandSocket." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_SecondaryHandTransform = { "SecondaryHandTransform", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, SecondaryHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_SecondaryHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_SecondaryHandTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Character's hand bone rotation to be used as the replacement rotation on Transform (Modify) Bone. This will be the rotation of the EquippedHand." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandRotation = { "EquippedHandRotation", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, EquippedHandRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bTransformEquippedHand_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Checks if we should transform the equipped hand for a particular animation." },
	};
#endif
	void Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bTransformEquippedHand_SetBit(void* Obj)
	{
		((UMPAnimInstance*)Obj)->bTransformEquippedHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bTransformEquippedHand = { "bTransformEquippedHand", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMPAnimInstance), &Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bTransformEquippedHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bTransformEquippedHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bTransformEquippedHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_ThrowableSocket_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Hand socket where throwable weapons are placed." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_ThrowableSocket = { "ThrowableSocket", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, ThrowableSocket), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_ThrowableSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_ThrowableSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_BackSpineSocket_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Spine or back socket where weapons not currently in use are placed." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_BackSpineSocket = { "BackSpineSocket", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, BackSpineSocket), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_BackSpineSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_BackSpineSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_HeadBone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bone" },
		{ "ModuleRelativePath", "Character/MPAnimInstance.h" },
		{ "ToolTip", "Character's head bone where head shots are traced against." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_HeadBone = { "HeadBone", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMPAnimInstance, HeadBone), METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_HeadBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_HeadBone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMPAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_MPCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_Spd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bIsCrouched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bWeaponEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bLocallyControlled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bEliminated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_YawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_Lean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_AO_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_AO_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_TurningInPlace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_TurningInPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bRotateRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseFABRIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bUseAimOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_SecondaryHandSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_SecondaryHandTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_EquippedHandRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_bTransformEquippedHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_ThrowableSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_BackSpineSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMPAnimInstance_Statics::NewProp_HeadBone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMPAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMPAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMPAnimInstance_Statics::ClassParams = {
		&UMPAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMPAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMPAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMPAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMPAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMPAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMPAnimInstance.OuterSingleton, Z_Construct_UClass_UMPAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMPAnimInstance.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UMPAnimInstance>()
	{
		return UMPAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMPAnimInstance);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMPAnimInstance, UMPAnimInstance::StaticClass, TEXT("UMPAnimInstance"), &Z_Registration_Info_UClass_UMPAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMPAnimInstance), 1455850189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPAnimInstance_h_803685211(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Character_MPAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
