// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EItemType();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EItemRarity();
	MPSHOOTER_API UEnum* Z_Construct_UEnum_MPShooter_EItemState();
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FItemProperties();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AItem_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EItemType, Z_Construct_UPackage__Script_MPShooter(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EItemType_Statics::Enumerators[] = {
		{ "EItemType::EIT_Weapon", (int64)EItemType::EIT_Weapon },
		{ "EItemType::EIT_Equipment", (int64)EItemType::EIT_Equipment },
		{ "EItemType::EIT_Consumable", (int64)EItemType::EIT_Consumable },
		{ "EItemType::EIT_Material", (int64)EItemType::EIT_Material },
		{ "EItemType::EIT_MAX", (int64)EItemType::EIT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EIT_Consumable.DisplayName", "Consumable" },
		{ "EIT_Consumable.Name", "EItemType::EIT_Consumable" },
		{ "EIT_Equipment.DisplayName", "Equipment" },
		{ "EIT_Equipment.Name", "EItemType::EIT_Equipment" },
		{ "EIT_Material.DisplayName", "Material" },
		{ "EIT_Material.Name", "EItemType::EIT_Material" },
		{ "EIT_MAX.DisplayName", "DefaultMAX" },
		{ "EIT_MAX.Name", "EItemType::EIT_MAX" },
		{ "EIT_Weapon.DisplayName", "Weapon" },
		{ "EIT_Weapon.Name", "EItemType::EIT_Weapon" },
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_MPShooter_EItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_MPShooter_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemRarity;
	static UEnum* EItemRarity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemRarity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EItemRarity, Z_Construct_UPackage__Script_MPShooter(), TEXT("EItemRarity"));
		}
		return Z_Registration_Info_UEnum_EItemRarity.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EItemRarity>()
	{
		return EItemRarity_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EItemRarity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EItemRarity_Statics::Enumerators[] = {
		{ "EItemRarity::EIR_Damaged", (int64)EItemRarity::EIR_Damaged },
		{ "EItemRarity::EIR_Common", (int64)EItemRarity::EIR_Common },
		{ "EItemRarity::EIR_Uncommon", (int64)EItemRarity::EIR_Uncommon },
		{ "EItemRarity::EIR_Rare", (int64)EItemRarity::EIR_Rare },
		{ "EItemRarity::EIR_Legendary", (int64)EItemRarity::EIR_Legendary },
		{ "EItemRarity::EIR_MAX", (int64)EItemRarity::EIR_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EItemRarity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EIR_Common.DisplayName", "Common" },
		{ "EIR_Common.Name", "EItemRarity::EIR_Common" },
		{ "EIR_Damaged.DisplayName", "Damaged" },
		{ "EIR_Damaged.Name", "EItemRarity::EIR_Damaged" },
		{ "EIR_Legendary.DisplayName", "Legendary" },
		{ "EIR_Legendary.Name", "EItemRarity::EIR_Legendary" },
		{ "EIR_MAX.DisplayName", "DefaultMAX" },
		{ "EIR_MAX.Name", "EItemRarity::EIR_MAX" },
		{ "EIR_Rare.DisplayName", "Rare" },
		{ "EIR_Rare.Name", "EItemRarity::EIR_Rare" },
		{ "EIR_Uncommon.DisplayName", "Uncommon" },
		{ "EIR_Uncommon.Name", "EItemRarity::EIR_Uncommon" },
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EItemRarity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EItemRarity",
		"EItemRarity",
		Z_Construct_UEnum_MPShooter_EItemRarity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EItemRarity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EItemRarity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EItemRarity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EItemRarity()
	{
		if (!Z_Registration_Info_UEnum_EItemRarity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemRarity.InnerSingleton, Z_Construct_UEnum_MPShooter_EItemRarity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemRarity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemState;
	static UEnum* EItemState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MPShooter_EItemState, Z_Construct_UPackage__Script_MPShooter(), TEXT("EItemState"));
		}
		return Z_Registration_Info_UEnum_EItemState.OuterSingleton;
	}
	template<> MPSHOOTER_API UEnum* StaticEnum<EItemState>()
	{
		return EItemState_StaticEnum();
	}
	struct Z_Construct_UEnum_MPShooter_EItemState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MPShooter_EItemState_Statics::Enumerators[] = {
		{ "EItemState::EIS_Initial", (int64)EItemState::EIS_Initial },
		{ "EItemState::EIS_Equipped", (int64)EItemState::EIS_Equipped },
		{ "EItemState::EIS_EquippedSecondary", (int64)EItemState::EIS_EquippedSecondary },
		{ "EItemState::EIS_Dropped", (int64)EItemState::EIS_Dropped },
		{ "EItemState::EIS_MAX", (int64)EItemState::EIS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MPShooter_EItemState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EIS_Dropped.DisplayName", "Dropped" },
		{ "EIS_Dropped.Name", "EItemState::EIS_Dropped" },
		{ "EIS_Equipped.DisplayName", "Equipped" },
		{ "EIS_Equipped.Name", "EItemState::EIS_Equipped" },
		{ "EIS_EquippedSecondary.DisplayName", "EquippedSecondary" },
		{ "EIS_EquippedSecondary.Name", "EItemState::EIS_EquippedSecondary" },
		{ "EIS_Initial.DisplayName", "Initial" },
		{ "EIS_Initial.Name", "EItemState::EIS_Initial" },
		{ "EIS_MAX.DisplayName", "DefaultMAX" },
		{ "EIS_MAX.Name", "EItemState::EIS_MAX" },
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MPShooter_EItemState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		"EItemState",
		"EItemState",
		Z_Construct_UEnum_MPShooter_EItemState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EItemState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MPShooter_EItemState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MPShooter_EItemState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MPShooter_EItemState()
	{
		if (!Z_Registration_Info_UEnum_EItemState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemState.InnerSingleton, Z_Construct_UEnum_MPShooter_EItemState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemProperties;
class UScriptStruct* FItemProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemProperties, Z_Construct_UPackage__Script_MPShooter(), TEXT("ItemProperties"));
	}
	return Z_Registration_Info_UScriptStruct_ItemProperties.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FItemProperties>()
{
	return FItemProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Mesh of an item." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemProperties, ItemMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Type of item." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemProperties, ItemType), Z_Construct_UEnum_MPShooter_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemType_MetaData)) }; // 2682922900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Name of an item." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemProperties, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Description of an item." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemProperties, ItemDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Icon of an item in the inventory." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemProperties, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_PickupSound_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "SFX for when an item is picked up." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemProperties, PickupSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_PickupSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_PickupSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_EquipSound_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "SFX for when an item is equipped." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_EquipSound = { "EquipSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemProperties, EquipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_EquipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_EquipSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_ItemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_PickupSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemProperties_Statics::NewProp_EquipSound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		nullptr,
		&NewStructOps,
		"ItemProperties",
		sizeof(FItemProperties),
		alignof(FItemProperties),
		Z_Construct_UScriptStruct_FItemProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemProperties.InnerSingleton, Z_Construct_UScriptStruct_FItemProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(AItem::execOnRep_ItemState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ItemState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execOnSphereEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSphereEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execOnSphereOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSphereOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AItem::StaticRegisterNativesAItem()
	{
		UClass* Class = AItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ItemState", &AItem::execOnRep_ItemState },
			{ "OnSphereEndOverlap", &AItem::execOnSphereEndOverlap },
			{ "OnSphereOverlap", &AItem::execOnSphereOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItem_OnRep_ItemState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_OnRep_ItemState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_OnRep_ItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "OnRep_ItemState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_OnRep_ItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnRep_ItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_OnRep_ItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_OnRep_ItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics
	{
		struct Item_eventOnSphereEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnSphereEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnSphereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnSphereEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "OnSphereEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::Item_eventOnSphereEndOverlap_Parms), Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_OnSphereEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_OnSphereOverlap_Statics
	{
		struct Item_eventOnSphereOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnSphereOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnSphereOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Item_eventOnSphereOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Item_eventOnSphereOverlap_Parms), &Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "OnSphereOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::Item_eventOnSphereOverlap_Parms), Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_OnSphereOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem);
	UClass* Z_Construct_UClass_AItem_NoRegister()
	{
		return AItem::StaticClass();
	}
	struct Z_Construct_UClass_AItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AreaSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupWidget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSound;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemRarity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemRarity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemRarity;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ActiveStars_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStars_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveStars;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfStars_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfStars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_OnRep_ItemState, "OnRep_ItemState" }, // 1376385482
		{ &Z_Construct_UFunction_AItem_OnSphereEndOverlap, "OnSphereEndOverlap" }, // 2817176751
		{ &Z_Construct_UFunction_AItem_OnSphereOverlap, "OnSphereOverlap" }, // 948502298
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Item.h" },
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_AreaSphere_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Sphere surrounding an item in order to equip them." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_AreaSphere = { "AreaSphere", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, AreaSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_AreaSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_AreaSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_PickupWidget_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Displays pick up information over an item before it's equipped." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_PickupWidget = { "PickupWidget", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, PickupWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_PickupWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_PickupWidget_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemState_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "State of an item (initial, equipped, dropped)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemState = { "ItemState", "OnRep_ItemState", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemState), Z_Construct_UEnum_MPShooter_EItemState, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemState_MetaData)) }; // 2330609980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Mesh of an item." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Type of item." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemType), Z_Construct_UEnum_MPShooter_EItemType, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData)) }; // 2682922900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Name of an item." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemName), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Description of an item." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Icon of an item in the inventory." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_PickupSound_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "SFX for when an item is picked up." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, PickupSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_PickupSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_PickupSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_EquipSound_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "SFX for when an item is equipped." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_EquipSound = { "EquipSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, EquipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_EquipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_EquipSound_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemRarity_MetaData[] = {
		{ "Category", "Rarity" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Rarity of an item." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemRarity = { "ItemRarity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemRarity), Z_Construct_UEnum_MPShooter_EItemRarity, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemRarity_MetaData)) }; // 2451607101
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ActiveStars_Inner = { "ActiveStars", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ActiveStars_MetaData[] = {
		{ "Category", "Rarity" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Amount of stars currently, given the item's rarity." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ActiveStars = { "ActiveStars", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ActiveStars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ActiveStars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ActiveStars_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_NumberOfStars_MetaData[] = {
		{ "Category", "Rarity" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "Numver of stars shown in the PickupWidget, given the item's rarity." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_NumberOfStars = { "NumberOfStars", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, NumberOfStars), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_NumberOfStars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_NumberOfStars_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_AreaSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_PickupWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_PickupSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_EquipSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemRarity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemRarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ActiveStars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ActiveStars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_NumberOfStars,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
		&AItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem()
	{
		if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItem.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AItem>()
	{
		return AItem::StaticClass();
	}

	void AItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ItemState(TEXT("ItemState"));

		const bool bIsValid = true
			&& Name_ItemState == ClassReps[(int32)ENetFields_Private::ItemState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AItem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2682922900U) },
		{ EItemRarity_StaticEnum, TEXT("EItemRarity"), &Z_Registration_Info_UEnum_EItemRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2451607101U) },
		{ EItemState_StaticEnum, TEXT("EItemState"), &Z_Registration_Info_UEnum_EItemState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2330609980U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_Statics::ScriptStructInfo[] = {
		{ FItemProperties::StaticStruct, Z_Construct_UScriptStruct_FItemProperties_Statics::NewStructOps, TEXT("ItemProperties"), &Z_Registration_Info_UScriptStruct_ItemProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemProperties), 118973664U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 2969712406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_3860170427(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Item_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
