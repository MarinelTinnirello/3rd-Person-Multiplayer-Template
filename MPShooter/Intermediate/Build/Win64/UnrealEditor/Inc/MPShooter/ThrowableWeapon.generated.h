// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHitActor : uint8;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MPSHOOTER_ThrowableWeapon_generated_h
#error "ThrowableWeapon.generated.h already included, missing '#pragma once' in ThrowableWeapon.h"
#endif
#define MPSHOOTER_ThrowableWeapon_generated_h

#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_RPC_WRAPPERS \
	virtual void MulticastOnHit_Implementation(EHitActor HitActorType); \
 \
	DECLARE_FUNCTION(execOnRep_Ammo); \
	DECLARE_FUNCTION(execMulticastOnHit); \
	DECLARE_FUNCTION(execOnHit);


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastOnHit_Implementation(EHitActor HitActorType); \
 \
	DECLARE_FUNCTION(execOnRep_Ammo); \
	DECLARE_FUNCTION(execMulticastOnHit); \
	DECLARE_FUNCTION(execOnHit);


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_EVENT_PARMS \
	struct ThrowableWeapon_eventMulticastOnHit_Parms \
	{ \
		EHitActor HitActorType; \
	};


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_CALLBACK_WRAPPERS
#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThrowableWeapon(); \
	friend struct Z_Construct_UClass_AThrowableWeapon_Statics; \
public: \
	DECLARE_CLASS(AThrowableWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AThrowableWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitActor=NETFIELD_REP_START, \
		Ammo, \
		NETFIELD_REP_END=Ammo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAThrowableWeapon(); \
	friend struct Z_Construct_UClass_AThrowableWeapon_Statics; \
public: \
	DECLARE_CLASS(AThrowableWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AThrowableWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitActor=NETFIELD_REP_START, \
		Ammo, \
		NETFIELD_REP_END=Ammo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThrowableWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThrowableWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowableWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowableWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowableWeapon(AThrowableWeapon&&); \
	NO_API AThrowableWeapon(const AThrowableWeapon&); \
public:


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowableWeapon(AThrowableWeapon&&); \
	NO_API AThrowableWeapon(const AThrowableWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowableWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowableWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThrowableWeapon)


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_11_PROLOG \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_EVENT_PARMS


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_INCLASS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class AThrowableWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_Item_Weapon_Throwable_ThrowableWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
