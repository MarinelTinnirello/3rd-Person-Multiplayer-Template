// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/MPComponents/LagComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLagComponent() {}
// Cross Module References
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FBoxInformation();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleInformation();
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FFramePackage();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPCharacter_NoRegister();
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FServerSideRewindResult();
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FServerSideRewindShotgunResult();
	MPSHOOTER_API UClass* Z_Construct_UClass_ULagComponent_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_ULagComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	MPSHOOTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerController_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxInformation;
class UScriptStruct* FBoxInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxInformation, Z_Construct_UPackage__Script_MPShooter(), TEXT("BoxInformation"));
	}
	return Z_Registration_Info_UScriptStruct_BoxInformation.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FBoxInformation>()
{
	return FBoxInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoxInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoxInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxInformation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxInformation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxInformation, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		&NewStructOps,
		"BoxInformation",
		sizeof(FBoxInformation),
		alignof(FBoxInformation),
		Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoxInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_BoxInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxInformation.InnerSingleton, Z_Construct_UScriptStruct_FBoxInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoxInformation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapsuleInformation;
class UScriptStruct* FCapsuleInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapsuleInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapsuleInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleInformation, Z_Construct_UPackage__Script_MPShooter(), TEXT("CapsuleInformation"));
	}
	return Z_Registration_Info_UScriptStruct_CapsuleInformation.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FCapsuleInformation>()
{
	return FCapsuleInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCapsuleInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleInformation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleInformation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleInformation, CapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_CapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_CapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_CapsuleRadius_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleInformation, CapsuleRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_CapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_CapsuleRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_CapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewProp_CapsuleRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		&NewStructOps,
		"CapsuleInformation",
		sizeof(FCapsuleInformation),
		alignof(FCapsuleInformation),
		Z_Construct_UScriptStruct_FCapsuleInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapsuleInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_CapsuleInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapsuleInformation.InnerSingleton, Z_Construct_UScriptStruct_FCapsuleInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CapsuleInformation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FramePackage;
class UScriptStruct* FFramePackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFramePackage, Z_Construct_UPackage__Script_MPShooter(), TEXT("FramePackage"));
	}
	return Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FFramePackage>()
{
	return FFramePackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFramePackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitBoxInfo_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HitBoxInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HitBoxInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitCapsuleInfo_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HitCapsuleInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCapsuleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HitCapsuleInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFramePackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFramePackage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFramePackage, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFramePackage, Character), Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_ValueProp = { "HitBoxInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBoxInformation, METADATA_PARAMS(nullptr, 0) }; // 1233272418
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_Key_KeyProp = { "HitBoxInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo = { "HitBoxInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFramePackage, HitBoxInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_MetaData)) }; // 1233272418
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitCapsuleInfo_ValueProp = { "HitCapsuleInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCapsuleInformation, METADATA_PARAMS(nullptr, 0) }; // 707103103
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitCapsuleInfo_Key_KeyProp = { "HitCapsuleInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitCapsuleInfo_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitCapsuleInfo = { "HitCapsuleInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFramePackage, HitCapsuleInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitCapsuleInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitCapsuleInfo_MetaData)) }; // 707103103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitCapsuleInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitCapsuleInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitCapsuleInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFramePackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		&NewStructOps,
		"FramePackage",
		sizeof(FFramePackage),
		alignof(FFramePackage),
		Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFramePackage()
	{
		if (!Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton, Z_Construct_UScriptStruct_FFramePackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerSideRewindResult;
class UScriptStruct* FServerSideRewindResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerSideRewindResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerSideRewindResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSideRewindResult, Z_Construct_UPackage__Script_MPShooter(), TEXT("ServerSideRewindResult"));
	}
	return Z_Registration_Info_UScriptStruct_ServerSideRewindResult.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FServerSideRewindResult>()
{
	return FServerSideRewindResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerSideRewindResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitConfirmed_MetaData[];
#endif
		static void NewProp_bHitConfirmed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitConfirmed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHeadShot_MetaData[];
#endif
		static void NewProp_bHeadShot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeadShot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSideRewindResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_SetBit(void* Obj)
	{
		((FServerSideRewindResult*)Obj)->bHitConfirmed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed = { "bHitConfirmed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerSideRewindResult), &Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_SetBit(void* Obj)
	{
		((FServerSideRewindResult*)Obj)->bHeadShot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot = { "bHeadShot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerSideRewindResult), &Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHitConfirmed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewProp_bHeadShot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		&NewStructOps,
		"ServerSideRewindResult",
		sizeof(FServerSideRewindResult),
		alignof(FServerSideRewindResult),
		Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSideRewindResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerSideRewindResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerSideRewindResult.InnerSingleton, Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerSideRewindResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerSideRewindShotgunResult;
class UScriptStruct* FServerSideRewindShotgunResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerSideRewindShotgunResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerSideRewindShotgunResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSideRewindShotgunResult, Z_Construct_UPackage__Script_MPShooter(), TEXT("ServerSideRewindShotgunResult"));
	}
	return Z_Registration_Info_UScriptStruct_ServerSideRewindShotgunResult.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FServerSideRewindShotgunResult>()
{
	return FServerSideRewindShotgunResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HeadShots_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadShots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadShots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HeadShots;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BodyShots_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyShots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyShots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BodyShots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSideRewindShotgunResult>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_HeadShots_ValueProp = { "HeadShots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_HeadShots_Key_KeyProp = { "HeadShots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_HeadShots_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_HeadShots = { "HeadShots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSideRewindShotgunResult, HeadShots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_HeadShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_HeadShots_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_BodyShots_ValueProp = { "BodyShots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_BodyShots_Key_KeyProp = { "BodyShots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_BodyShots_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_BodyShots = { "BodyShots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSideRewindShotgunResult, BodyShots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_BodyShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_BodyShots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_HeadShots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_HeadShots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_HeadShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_BodyShots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_BodyShots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewProp_BodyShots,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		&NewStructOps,
		"ServerSideRewindShotgunResult",
		sizeof(FServerSideRewindShotgunResult),
		alignof(FServerSideRewindShotgunResult),
		Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSideRewindShotgunResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerSideRewindShotgunResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerSideRewindShotgunResult.InnerSingleton, Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerSideRewindShotgunResult.InnerSingleton;
	}
	DEFINE_FUNCTION(ULagComponent::execServerScoreRequestProjectile)
	{
		P_GET_OBJECT(AMPCharacter,Z_Param_HitCharacter);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_InitialVelocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerScoreRequestProjectile_Implementation(Z_Param_HitCharacter,Z_Param_TraceStart,Z_Param_InitialVelocity,Z_Param_HitTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULagComponent::execServerScoreRequestShotgun)
	{
		P_GET_TARRAY(AMPCharacter*,Z_Param_HitCharacters);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
		P_GET_TARRAY(FVector_NetQuantize,Z_Param_HitLocations);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerScoreRequestShotgun_Implementation(Z_Param_HitCharacters,Z_Param_TraceStart,Z_Param_HitLocations,Z_Param_HitTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULagComponent::execServerScoreRequest)
	{
		P_GET_OBJECT(AMPCharacter,Z_Param_HitCharacter);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_HitLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitTime);
		P_GET_OBJECT(AWeapon,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerScoreRequest_Implementation(Z_Param_HitCharacter,Z_Param_TraceStart,Z_Param_HitLocation,Z_Param_HitTime,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	static FName NAME_ULagComponent_ServerScoreRequest = FName(TEXT("ServerScoreRequest"));
	void ULagComponent::ServerScoreRequest(AMPCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, float HitTime, AWeapon* DamageCauser)
	{
		LagComponent_eventServerScoreRequest_Parms Parms;
		Parms.HitCharacter=HitCharacter;
		Parms.TraceStart=TraceStart;
		Parms.HitLocation=HitLocation;
		Parms.HitTime=HitTime;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_ULagComponent_ServerScoreRequest),&Parms);
	}
	static FName NAME_ULagComponent_ServerScoreRequestProjectile = FName(TEXT("ServerScoreRequestProjectile"));
	void ULagComponent::ServerScoreRequestProjectile(AMPCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize100 const& InitialVelocity, float HitTime)
	{
		LagComponent_eventServerScoreRequestProjectile_Parms Parms;
		Parms.HitCharacter=HitCharacter;
		Parms.TraceStart=TraceStart;
		Parms.InitialVelocity=InitialVelocity;
		Parms.HitTime=HitTime;
		ProcessEvent(FindFunctionChecked(NAME_ULagComponent_ServerScoreRequestProjectile),&Parms);
	}
	static FName NAME_ULagComponent_ServerScoreRequestShotgun = FName(TEXT("ServerScoreRequestShotgun"));
	void ULagComponent::ServerScoreRequestShotgun(TArray<AMPCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, float HitTime)
	{
		LagComponent_eventServerScoreRequestShotgun_Parms Parms;
		Parms.HitCharacters=HitCharacters;
		Parms.TraceStart=TraceStart;
		Parms.HitLocations=HitLocations;
		Parms.HitTime=HitTime;
		ProcessEvent(FindFunctionChecked(NAME_ULagComponent_ServerScoreRequestShotgun),&Parms);
	}
	void ULagComponent::StaticRegisterNativesULagComponent()
	{
		UClass* Class = ULagComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerScoreRequest", &ULagComponent::execServerScoreRequest },
			{ "ServerScoreRequestProjectile", &ULagComponent::execServerScoreRequestProjectile },
			{ "ServerScoreRequestShotgun", &ULagComponent::execServerScoreRequestShotgun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_HitCharacter = { "HitCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequest_Parms, HitCharacter), Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequest_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_TraceStart_MetaData)) }; // 1408259225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequest_Parms, HitLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_HitLocation_MetaData)) }; // 1408259225
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequest_Parms, HitTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequest_Parms, DamageCauser), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_HitCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_HitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Hit Scan\n//\n" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
		{ "ToolTip", "Hit Scan" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULagComponent, nullptr, "ServerScoreRequest", nullptr, nullptr, sizeof(LagComponent_eventServerScoreRequest_Parms), Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULagComponent_ServerScoreRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagComponent_ServerScoreRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_HitCharacter = { "HitCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequestProjectile_Parms, HitCharacter), Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequestProjectile_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_TraceStart_MetaData)) }; // 1408259225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_InitialVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequestProjectile_Parms, InitialVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_InitialVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_InitialVelocity_MetaData)) }; // 3121577039
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequestProjectile_Parms, HitTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_HitCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_InitialVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::NewProp_HitTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Projectile\n//\n" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
		{ "ToolTip", "Projectile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULagComponent, nullptr, "ServerScoreRequestProjectile", nullptr, nullptr, sizeof(LagComponent_eventServerScoreRequestProjectile_Parms), Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCharacters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitCharacters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitLocations;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitCharacters_Inner = { "HitCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitCharacters = { "HitCharacters", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequestShotgun_Parms, HitCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitCharacters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequestShotgun_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_TraceStart_MetaData)) }; // 1408259225
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitLocations_Inner = { "HitLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) }; // 1408259225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitLocations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitLocations = { "HitLocations", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequestShotgun_Parms, HitLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitLocations_MetaData)) }; // 1408259225
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LagComponent_eventServerScoreRequestShotgun_Parms, HitTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitCharacters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::NewProp_HitTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Shotgun\n//\n" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
		{ "ToolTip", "Shotgun" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULagComponent, nullptr, "ServerScoreRequestShotgun", nullptr, nullptr, sizeof(LagComponent_eventServerScoreRequestShotgun_Parms), Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULagComponent);
	UClass* Z_Construct_UClass_ULagComponent_NoRegister()
	{
		return ULagComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULagComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSSRFramePkg_MetaData[];
#endif
		static void NewProp_bDrawSSRFramePkg_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSSRFramePkg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSSRConfirmHit_MetaData[];
#endif
		static void NewProp_bDrawSSRConfirmHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSSRConfirmHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowFramePkgLifeSpan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShowFramePkgLifeSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecordTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRecordTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HeadBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULagComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULagComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULagComponent_ServerScoreRequest, "ServerScoreRequest" }, // 1875442237
		{ &Z_Construct_UFunction_ULagComponent_ServerScoreRequestProjectile, "ServerScoreRequestProjectile" }, // 3093255258
		{ &Z_Construct_UFunction_ULagComponent_ServerScoreRequestShotgun, "ServerScoreRequestShotgun" }, // 1911307222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MPComponents/LagComponent.h" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagComponent_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULagComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULagComponent, Character), Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULagComponent_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagComponent_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagComponent_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULagComponent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULagComponent, Controller), Z_Construct_UClass_AMPPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULagComponent_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagComponent_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRFramePkg_MetaData[] = {
		{ "Category", "DEBUG" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
		{ "ToolTip", "Checks whether or not to draw the frame packages for Server-Side Rewind." },
	};
#endif
	void Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRFramePkg_SetBit(void* Obj)
	{
		((ULagComponent*)Obj)->bDrawSSRFramePkg = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRFramePkg = { "bDrawSSRFramePkg", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULagComponent), &Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRFramePkg_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRFramePkg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRFramePkg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRConfirmHit_MetaData[] = {
		{ "Category", "DEBUG" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
		{ "ToolTip", "Checks whether or not to draw the hit confirmation." },
	};
#endif
	void Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRConfirmHit_SetBit(void* Obj)
	{
		((ULagComponent*)Obj)->bDrawSSRConfirmHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRConfirmHit = { "bDrawSSRConfirmHit", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULagComponent), &Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRConfirmHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRConfirmHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRConfirmHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagComponent_Statics::NewProp_ShowFramePkgLifeSpan_MetaData[] = {
		{ "Category", "Frame Properties" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
		{ "ToolTip", "Amount of time to draw debug lines for." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULagComponent_Statics::NewProp_ShowFramePkgLifeSpan = { "ShowFramePkgLifeSpan", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULagComponent, ShowFramePkgLifeSpan), METADATA_PARAMS(Z_Construct_UClass_ULagComponent_Statics::NewProp_ShowFramePkgLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagComponent_Statics::NewProp_ShowFramePkgLifeSpan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagComponent_Statics::NewProp_MaxRecordTime_MetaData[] = {
		{ "Category", "Frame Properties" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
		{ "ToolTip", "Stores frame history over max amount of time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULagComponent_Statics::NewProp_MaxRecordTime = { "MaxRecordTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULagComponent, MaxRecordTime), METADATA_PARAMS(Z_Construct_UClass_ULagComponent_Statics::NewProp_MaxRecordTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagComponent_Statics::NewProp_MaxRecordTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagComponent_Statics::NewProp_HeadBone_MetaData[] = {
		{ "Category", "Frame Properties" },
		{ "ModuleRelativePath", "MPComponents/LagComponent.h" },
		{ "ToolTip", "Name of the head bone, taken from one of the various hit collision types." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULagComponent_Statics::NewProp_HeadBone = { "HeadBone", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULagComponent, HeadBone), METADATA_PARAMS(Z_Construct_UClass_ULagComponent_Statics::NewProp_HeadBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagComponent_Statics::NewProp_HeadBone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULagComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagComponent_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagComponent_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRFramePkg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagComponent_Statics::NewProp_bDrawSSRConfirmHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagComponent_Statics::NewProp_ShowFramePkgLifeSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagComponent_Statics::NewProp_MaxRecordTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagComponent_Statics::NewProp_HeadBone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULagComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULagComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULagComponent_Statics::ClassParams = {
		&ULagComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULagComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULagComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULagComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULagComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULagComponent()
	{
		if (!Z_Registration_Info_UClass_ULagComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULagComponent.OuterSingleton, Z_Construct_UClass_ULagComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULagComponent.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<ULagComponent>()
	{
		return ULagComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULagComponent);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_Statics::ScriptStructInfo[] = {
		{ FBoxInformation::StaticStruct, Z_Construct_UScriptStruct_FBoxInformation_Statics::NewStructOps, TEXT("BoxInformation"), &Z_Registration_Info_UScriptStruct_BoxInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxInformation), 1233272418U) },
		{ FCapsuleInformation::StaticStruct, Z_Construct_UScriptStruct_FCapsuleInformation_Statics::NewStructOps, TEXT("CapsuleInformation"), &Z_Registration_Info_UScriptStruct_CapsuleInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapsuleInformation), 707103103U) },
		{ FFramePackage::StaticStruct, Z_Construct_UScriptStruct_FFramePackage_Statics::NewStructOps, TEXT("FramePackage"), &Z_Registration_Info_UScriptStruct_FramePackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFramePackage), 3832299922U) },
		{ FServerSideRewindResult::StaticStruct, Z_Construct_UScriptStruct_FServerSideRewindResult_Statics::NewStructOps, TEXT("ServerSideRewindResult"), &Z_Registration_Info_UScriptStruct_ServerSideRewindResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerSideRewindResult), 3075667939U) },
		{ FServerSideRewindShotgunResult::StaticStruct, Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics::NewStructOps, TEXT("ServerSideRewindShotgunResult"), &Z_Registration_Info_UScriptStruct_ServerSideRewindShotgunResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerSideRewindShotgunResult), 1396507905U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULagComponent, ULagComponent::StaticClass, TEXT("ULagComponent"), &Z_Registration_Info_UClass_ULagComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULagComponent), 3884585274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_243764318(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
