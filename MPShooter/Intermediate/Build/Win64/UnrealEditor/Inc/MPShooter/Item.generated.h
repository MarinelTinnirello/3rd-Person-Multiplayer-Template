// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MPSHOOTER_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define MPSHOOTER_Item_generated_h

#define FID_MPShooter_Source_MPShooter_Item_Item_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemProperties_Statics; \
	MPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> MPSHOOTER_API UScriptStruct* StaticStruct<struct FItemProperties>();

#define FID_MPShooter_Source_MPShooter_Item_Item_h_73_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_Item_Item_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ItemState); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_MPShooter_Source_MPShooter_Item_Item_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ItemState); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_MPShooter_Source_MPShooter_Item_Item_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ItemState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_Item_Item_h_73_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ItemState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_Item_Item_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define FID_MPShooter_Source_MPShooter_Item_Item_h_73_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define FID_MPShooter_Source_MPShooter_Item_Item_h_70_PROLOG
#define FID_MPShooter_Source_MPShooter_Item_Item_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Item_Item_h_73_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Item_Item_h_73_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Item_h_73_INCLASS \
	FID_MPShooter_Source_MPShooter_Item_Item_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_Item_Item_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Item_Item_h_73_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Item_Item_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Item_Item_h_73_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Item_Item_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_Item_Item_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::EIT_Weapon) \
	op(EItemType::EIT_Equipment) \
	op(EItemType::EIT_Consumable) \
	op(EItemType::EIT_Material) 

enum class EItemType : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<EItemType>();

#define FOREACH_ENUM_EITEMRARITY(op) \
	op(EItemRarity::EIR_Damaged) \
	op(EItemRarity::EIR_Common) \
	op(EItemRarity::EIR_Uncommon) \
	op(EItemRarity::EIR_Rare) \
	op(EItemRarity::EIR_Legendary) 

enum class EItemRarity : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<EItemRarity>();

#define FOREACH_ENUM_EITEMSTATE(op) \
	op(EItemState::EIS_Initial) \
	op(EItemState::EIS_Equipped) \
	op(EItemState::EIS_EquippedSecondary) \
	op(EItemState::EIS_Dropped) 

enum class EItemState : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<EItemState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
