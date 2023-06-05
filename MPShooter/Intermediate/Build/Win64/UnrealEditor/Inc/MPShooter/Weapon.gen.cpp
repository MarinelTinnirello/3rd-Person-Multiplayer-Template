// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponProperties();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FItemProperties();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EWeaponType();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EFireType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MPSHOOTER_API UClass* Z_Construct_UClass_ACasing_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AWeapon();
	MPSHOOTER_API UClass* Z_Construct_UClass_AItem();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPCharacter_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerController_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponProperties;
class UScriptStruct* FWeaponProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponProperties, Z_Construct_UPackage__Script_MPShooter(), TEXT("WeaponProperties"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponProperties.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FWeaponProperties>()
{
	return FWeaponProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeaponProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsCenter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsTop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsBottom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSniperZoomedOverlay_MetaData[];
#endif
		static void NewProp_bUseSniperZoomedOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSniperZoomedOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomatic_MetaData[];
#endif
		static void NewProp_bAutomatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseScatter_MetaData[];
#endif
		static void NewProp_bUseScatter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScatter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPhysicsAttachment_MetaData[];
#endif
		static void NewProp_bHasPhysicsAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPhysicsAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadShotDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadShotDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSphere_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseServerSideRewind_MetaData[];
#endif
		static void NewProp_bUseServerSideRewind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseServerSideRewind;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FireType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FireType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachToRightHand_MetaData[];
#endif
		static void NewProp_bAttachToRightHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachToRightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleHanded_MetaData[];
#endif
		static void NewProp_bDoubleHanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleHanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDualWield_MetaData[];
#endif
		static void NewProp_bDualWield_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDualWield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTypeReloadMontageSection_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponTypeReloadMontageSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CasingClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CasingClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoEject_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AmmoEject;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ItemProperties_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Item properties of a weapon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ItemProperties = { "ItemProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, ItemProperties), Z_Construct_UScriptStruct_FItemProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ItemProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ItemProperties_MetaData)) }; // 118973664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsCenter_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Image for the center of a crosshair." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsCenter = { "CrosshairsCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, CrosshairsCenter), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsRight_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Image for the right of a crosshair." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsRight = { "CrosshairsRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, CrosshairsRight), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsLeft_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Image for the left of a crosshair." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsLeft = { "CrosshairsLeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, CrosshairsLeft), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsTop_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Image for the top of a crosshair." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsTop = { "CrosshairsTop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, CrosshairsTop), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsTop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsBottom_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Image for the bottom of a crosshair." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsBottom = { "CrosshairsBottom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, CrosshairsBottom), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsBottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ZoomedFOV_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Amount the FOV is zoomed in when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ZoomedFOV = { "ZoomedFOV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, ZoomedFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ZoomedFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ZoomedFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ZoomedInterpSpeed_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Speed at which a weapon is zoomed in when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ZoomedInterpSpeed = { "ZoomedInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, ZoomedInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ZoomedInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ZoomedInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseSniperZoomedOverlay_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Whether or not to use a zoomed screen overlay." },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseSniperZoomedOverlay_SetBit(void* Obj)
	{
		((FWeaponProperties*)Obj)->bUseSniperZoomedOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseSniperZoomedOverlay = { "bUseSniperZoomedOverlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponProperties), &Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseSniperZoomedOverlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseSniperZoomedOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseSniperZoomedOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireDelay_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Cooldown in between firing a weapon." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, FireDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAutomatic_MetaData[] = {
		{ "Category", "Combat - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if a weapon is automatic." },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAutomatic_SetBit(void* Obj)
	{
		((FWeaponProperties*)Obj)->bAutomatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAutomatic = { "bAutomatic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponProperties), &Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAutomatic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAutomatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAutomatic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseScatter_MetaData[] = {
		{ "Category", "Combat - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if a weapon uses scatter." },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseScatter_SetBit(void* Obj)
	{
		((FWeaponProperties*)Obj)->bUseScatter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseScatter = { "bUseScatter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponProperties), &Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseScatter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseScatter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseScatter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bHasPhysicsAttachment_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if the weapon has an attachment affected by physics (ex: strap, chain, charm, etc.)." },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bHasPhysicsAttachment_SetBit(void* Obj)
	{
		((FWeaponProperties*)Obj)->bHasPhysicsAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bHasPhysicsAttachment = { "bHasPhysicsAttachment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponProperties), &Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bHasPhysicsAttachment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bHasPhysicsAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bHasPhysicsAttachment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Weapon Properties  - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Muzzle socket name on a weapon." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, MuzzleFlash), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Damage dealt by the weapon." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_HeadShotDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Damage dealt by the weapon if hit on the head." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_HeadShotDamage = { "HeadShotDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, HeadShotDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_HeadShotDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_HeadShotDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_DistanceToSphere_MetaData[] = {
		{ "Category", "Combat - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Distance from the sphere where the weapon scatters." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_DistanceToSphere = { "DistanceToSphere", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, DistanceToSphere), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_DistanceToSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_DistanceToSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Combat - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Radius around sphere where the weapon scatters." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, SphereRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseServerSideRewind_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks to see if the weapon should use Server-Side Rewind." },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseServerSideRewind_SetBit(void* Obj)
	{
		((FWeaponProperties*)Obj)->bUseServerSideRewind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseServerSideRewind = { "bUseServerSideRewind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponProperties), &Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseServerSideRewind_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseServerSideRewind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseServerSideRewind_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Type of weapon." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, WeaponType), Z_Construct_UEnum_MPShooter_EWeaponType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponType_MetaData)) }; // 2937891424
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireType_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Type of weapon firing for LocalFire() handling, based on the parent class of the weapon (lag compensation)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireType = { "FireType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, FireType), Z_Construct_UEnum_MPShooter_EFireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireType_MetaData)) }; // 3861538098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAttachToRightHand_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if the weapon should attach to the right or left hand. Most animations (particularly for 2-handed weapons) are right-handed, so the default will be 'true'." },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAttachToRightHand_SetBit(void* Obj)
	{
		((FWeaponProperties*)Obj)->bAttachToRightHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAttachToRightHand = { "bAttachToRightHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponProperties), &Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAttachToRightHand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAttachToRightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAttachToRightHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDoubleHanded_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if the weapon is double-handed." },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDoubleHanded_SetBit(void* Obj)
	{
		((FWeaponProperties*)Obj)->bDoubleHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDoubleHanded = { "bDoubleHanded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponProperties), &Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDoubleHanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDoubleHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDoubleHanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDualWield_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if the weapon is dual-wielded." },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDualWield_SetBit(void* Obj)
	{
		((FWeaponProperties*)Obj)->bDualWield = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDualWield = { "bDualWield", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponProperties), &Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDualWield_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDualWield_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDualWield_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Animation played when a weapon is fired." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, FireAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponTypeReloadMontageSection_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Name of the section in the reload montage of a given weapon." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponTypeReloadMontageSection = { "WeaponTypeReloadMontageSection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, WeaponTypeReloadMontageSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponTypeReloadMontageSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponTypeReloadMontageSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CasingClass_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Casing shell for a weapon." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CasingClass = { "CasingClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, CasingClass), Z_Construct_UClass_ACasing_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CasingClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CasingClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_AmmoEject_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Ammo eject socket on a weapon." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_AmmoEject = { "AmmoEject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, AmmoEject), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_AmmoEject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_AmmoEject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Ammo_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Amount of ammo in a weapon." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, Ammo), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_MagCapacity_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Max capacity in a weapon's magazine." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_MagCapacity = { "MagCapacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, MagCapacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_MagCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_MagCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_AmmoIcon_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Icon of a weapon's ammo in the inventory." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_AmmoIcon = { "AmmoIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponProperties, AmmoIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_AmmoIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_AmmoIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ItemProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CrosshairsBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ZoomedFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_ZoomedInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseSniperZoomedOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAutomatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseScatter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bHasPhysicsAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_HeadShotDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_DistanceToSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_SphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bUseServerSideRewind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bAttachToRightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDoubleHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_bDualWield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_FireAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_WeaponTypeReloadMontageSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_CasingClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_AmmoEject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_Ammo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_MagCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewProp_AmmoIcon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		&NewStructOps,
		"WeaponProperties",
		sizeof(FWeaponProperties),
		alignof(FWeaponProperties),
		Z_Construct_UScriptStruct_FWeaponProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_WeaponProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponProperties.InnerSingleton, Z_Construct_UScriptStruct_FWeaponProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeaponProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(AWeapon::execClientAddAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AmmoToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAddAmmo_Implementation(Z_Param_AmmoToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execClientUpdateAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ServerAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateAmmo_Implementation(Z_Param_ServerAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execOnPingTooHigh)
	{
		P_GET_UBOOL(Z_Param_bPingTooHigh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPingTooHigh(Z_Param_bPingTooHigh);
		P_NATIVE_END;
	}
	static FName NAME_AWeapon_ClientAddAmmo = FName(TEXT("ClientAddAmmo"));
	void AWeapon::ClientAddAmmo(int32 AmmoToAdd)
	{
		Weapon_eventClientAddAmmo_Parms Parms;
		Parms.AmmoToAdd=AmmoToAdd;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_ClientAddAmmo),&Parms);
	}
	static FName NAME_AWeapon_ClientUpdateAmmo = FName(TEXT("ClientUpdateAmmo"));
	void AWeapon::ClientUpdateAmmo(int32 ServerAmmo)
	{
		Weapon_eventClientUpdateAmmo_Parms Parms;
		Parms.ServerAmmo=ServerAmmo;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_ClientUpdateAmmo),&Parms);
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
		UClass* Class = AWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientAddAmmo", &AWeapon::execClientAddAmmo },
			{ "ClientUpdateAmmo", &AWeapon::execClientUpdateAmmo },
			{ "OnPingTooHigh", &AWeapon::execOnPingTooHigh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics::NewProp_AmmoToAdd = { "AmmoToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventClientAddAmmo_Parms, AmmoToAdd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics::NewProp_AmmoToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "ClientAddAmmo", nullptr, nullptr, sizeof(Weapon_eventClientAddAmmo_Parms), Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_ClientAddAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_ClientAddAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerAmmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics::NewProp_ServerAmmo = { "ServerAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventClientUpdateAmmo_Parms, ServerAmmo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics::NewProp_ServerAmmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "ClientUpdateAmmo", nullptr, nullptr, sizeof(Weapon_eventClientUpdateAmmo_Parms), Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_ClientUpdateAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_ClientUpdateAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics
	{
		struct Weapon_eventOnPingTooHigh_Parms
		{
			bool bPingTooHigh;
		};
		static void NewProp_bPingTooHigh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPingTooHigh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::NewProp_bPingTooHigh_SetBit(void* Obj)
	{
		((Weapon_eventOnPingTooHigh_Parms*)Obj)->bPingTooHigh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::NewProp_bPingTooHigh = { "bPingTooHigh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Weapon_eventOnPingTooHigh_Parms), &Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::NewProp_bPingTooHigh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::NewProp_bPingTooHigh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnPingTooHigh", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::Weapon_eventOnPingTooHigh_Parms), Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_OnPingTooHigh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnPingTooHigh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsCenter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsTop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsBottom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSniperZoomedOverlay_MetaData[];
#endif
		static void NewProp_bUseSniperZoomedOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSniperZoomedOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomatic_MetaData[];
#endif
		static void NewProp_bAutomatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseScatter_MetaData[];
#endif
		static void NewProp_bUseScatter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScatter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPOwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPOwnerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPOwnerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPOwnerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPhysicsAttachment_MetaData[];
#endif
		static void NewProp_bHasPhysicsAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPhysicsAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadShotDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadShotDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSphere_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseServerSideRewind_MetaData[];
#endif
		static void NewProp_bUseServerSideRewind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseServerSideRewind;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FireType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FireType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachToRightHand_MetaData[];
#endif
		static void NewProp_bAttachToRightHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachToRightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleHanded_MetaData[];
#endif
		static void NewProp_bDoubleHanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleHanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDualWield_MetaData[];
#endif
		static void NewProp_bDualWield_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDualWield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTypeReloadMontageSection_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponTypeReloadMontageSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CasingClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CasingClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoEject_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AmmoEject;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_ClientAddAmmo, "ClientAddAmmo" }, // 1514597152
		{ &Z_Construct_UFunction_AWeapon_ClientUpdateAmmo, "ClientUpdateAmmo" }, // 1515879920
		{ &Z_Construct_UFunction_AWeapon_OnPingTooHigh, "OnPingTooHigh" }, // 1248632237
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Weapon.h" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsCenter_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Image for the center of a crosshair." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsCenter = { "CrosshairsCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CrosshairsCenter), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Image for the right of a crosshair." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight = { "CrosshairsRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CrosshairsRight), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Image for the left of a crosshair." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft = { "CrosshairsLeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CrosshairsLeft), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Image for the top of a crosshair." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop = { "CrosshairsTop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CrosshairsTop), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Image for the bottom of a crosshair." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom = { "CrosshairsBottom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CrosshairsBottom), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedFOV_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Amount the FOV is zoomed in when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedFOV = { "ZoomedFOV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, ZoomedFOV), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedInterpSpeed_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Speed at which a weapon is zoomed in when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedInterpSpeed = { "ZoomedInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, ZoomedInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bUseSniperZoomedOverlay_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Whether or not to use a zoomed screen overlay." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bUseSniperZoomedOverlay_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bUseSniperZoomedOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bUseSniperZoomedOverlay = { "bUseSniperZoomedOverlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bUseSniperZoomedOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bUseSniperZoomedOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bUseSniperZoomedOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Cooldown in between firing a weapon." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, FireDelay), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic_MetaData[] = {
		{ "Category", "Combat - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if a weapon is automatic." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bAutomatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic = { "bAutomatic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bUseScatter_MetaData[] = {
		{ "Category", "Combat - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if a weapon uses scatter." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bUseScatter_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bUseScatter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bUseScatter = { "bUseScatter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bUseScatter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bUseScatter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bUseScatter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MPOwnerCharacter_MetaData[] = {
		{ "Comment", "//\n// Character Properties\n//\n" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Character Properties" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MPOwnerCharacter = { "MPOwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MPOwnerCharacter), Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MPOwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MPOwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MPOwnerController_MetaData[] = {
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MPOwnerController = { "MPOwnerController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MPOwnerController), Z_Construct_UClass_AMPPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MPOwnerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MPOwnerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bHasPhysicsAttachment_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if the weapon has an attachment affected by physics (ex: strap, chain, charm, etc.)." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bHasPhysicsAttachment_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bHasPhysicsAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bHasPhysicsAttachment = { "bHasPhysicsAttachment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bHasPhysicsAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bHasPhysicsAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bHasPhysicsAttachment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Weapon Properties  - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Muzzle socket name on a weapon." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MuzzleFlash), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Damage dealt by the weapon." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_HeadShotDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Damage dealt by the weapon if hit on the head." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_HeadShotDamage = { "HeadShotDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, HeadShotDamage), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_HeadShotDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_HeadShotDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_DistanceToSphere_MetaData[] = {
		{ "Category", "Combat - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Distance from the sphere where the weapon scatters." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_DistanceToSphere = { "DistanceToSphere", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, DistanceToSphere), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_DistanceToSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_DistanceToSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Combat - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Radius around sphere where the weapon scatters." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bUseServerSideRewind_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks to see if the weapon should use Server-Side Rewind." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bUseServerSideRewind_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bUseServerSideRewind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bUseServerSideRewind = { "bUseServerSideRewind", nullptr, (EPropertyFlags)0x0020080000000021, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bUseServerSideRewind_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bUseServerSideRewind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bUseServerSideRewind_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Type of weapon." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, WeaponType), Z_Construct_UEnum_MPShooter_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_MetaData)) }; // 2937891424
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FireType_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Type of weapon firing for LocalFire() handling, based on the parent class of the weapon (lag compensation)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireType = { "FireType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, FireType), Z_Construct_UEnum_MPShooter_EFireType, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FireType_MetaData)) }; // 3861538098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bAttachToRightHand_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if the weapon should attach to the right or left hand. Most animations (particularly for 2-handed weapons) are right-handed, so the default will be 'true'." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bAttachToRightHand_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bAttachToRightHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bAttachToRightHand = { "bAttachToRightHand", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bAttachToRightHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bAttachToRightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bAttachToRightHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bDoubleHanded_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if the weapon is double-handed." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bDoubleHanded_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bDoubleHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bDoubleHanded = { "bDoubleHanded", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bDoubleHanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bDoubleHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bDoubleHanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bDualWield_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Checks if the weapon is dual-wielded." },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bDualWield_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bDualWield = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bDualWield = { "bDualWield", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bDualWield_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bDualWield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bDualWield_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Animation played when a weapon is fired." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, FireAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponTypeReloadMontageSection_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Name of the section in the reload montage of a given weapon." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponTypeReloadMontageSection = { "WeaponTypeReloadMontageSection", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, WeaponTypeReloadMontageSection), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponTypeReloadMontageSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponTypeReloadMontageSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_CasingClass_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Casing shell for a weapon." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CasingClass = { "CasingClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, CasingClass), Z_Construct_UClass_ACasing_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_CasingClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_CasingClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoEject_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Ammo eject socket on a weapon." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoEject = { "AmmoEject", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, AmmoEject), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoEject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoEject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Amount of ammo in a weapon." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Ammo), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MagCapacity_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Max capacity in a weapon's magazine." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MagCapacity = { "MagCapacity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MagCapacity), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MagCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MagCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoIcon_MetaData[] = {
		{ "Category", "Weapon Properties - Ranged" },
		{ "ModuleRelativePath", "Item/Weapon/Weapon.h" },
		{ "ToolTip", "Icon of a weapon's ammo in the inventory." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoIcon = { "AmmoIcon", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, AmmoIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CrosshairsBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ZoomedInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bUseSniperZoomedOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bAutomatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bUseScatter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MPOwnerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MPOwnerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bHasPhysicsAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_HeadShotDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_DistanceToSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_SphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bUseServerSideRewind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bAttachToRightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bDoubleHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bDualWield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponTypeReloadMontageSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CasingClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoEject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MagCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}

	void AWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bUseServerSideRewind(TEXT("bUseServerSideRewind"));

		const bool bIsValid = true
			&& Name_bUseServerSideRewind == ClassReps[(int32)ENetFields_Private::bUseServerSideRewind].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWeapon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_Statics::ScriptStructInfo[] = {
		{ FWeaponProperties::StaticStruct, Z_Construct_UScriptStruct_FWeaponProperties_Statics::NewStructOps, TEXT("WeaponProperties"), &Z_Registration_Info_UScriptStruct_WeaponProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponProperties), 3259765496U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 3676288219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_1946067058(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
