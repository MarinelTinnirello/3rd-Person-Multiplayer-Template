// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MPSHOOTER_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define MPSHOOTER_Weapon_generated_h

#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponProperties_Statics; \
	MPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> MPSHOOTER_API UScriptStruct* StaticStruct<struct FWeaponProperties>();

#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_RPC_WRAPPERS \
	virtual void ClientAddAmmo_Implementation(int32 AmmoToAdd); \
	virtual void ClientUpdateAmmo_Implementation(int32 ServerAmmo); \
 \
	DECLARE_FUNCTION(execClientAddAmmo); \
	DECLARE_FUNCTION(execClientUpdateAmmo); \
	DECLARE_FUNCTION(execOnPingTooHigh);


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientAddAmmo_Implementation(int32 AmmoToAdd); \
	virtual void ClientUpdateAmmo_Implementation(int32 ServerAmmo); \
 \
	DECLARE_FUNCTION(execClientAddAmmo); \
	DECLARE_FUNCTION(execClientUpdateAmmo); \
	DECLARE_FUNCTION(execOnPingTooHigh);


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_EVENT_PARMS \
	struct Weapon_eventClientAddAmmo_Parms \
	{ \
		int32 AmmoToAdd; \
	}; \
	struct Weapon_eventClientUpdateAmmo_Parms \
	{ \
		int32 ServerAmmo; \
	};


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_CALLBACK_WRAPPERS
#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bUseServerSideRewind=NETFIELD_REP_START, \
		NETFIELD_REP_END=bUseServerSideRewind	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bUseServerSideRewind=NETFIELD_REP_START, \
		NETFIELD_REP_END=bUseServerSideRewind	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_114_PROLOG \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_EVENT_PARMS


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_INCLASS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_Item_Weapon_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
