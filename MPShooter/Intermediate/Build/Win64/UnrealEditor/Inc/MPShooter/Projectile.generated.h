// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
enum class EHitActor : uint8;
class UPrimitiveComponent;
class AActor;
#ifdef MPSHOOTER_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define MPSHOOTER_Projectile_generated_h

#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_RPC_WRAPPERS \
	virtual void MulticastSpawnMaterialDecal_Implementation(FHitResult const& Hit); \
	virtual void MulticastOnHit_Implementation(EHitActor HitActorType); \
	virtual bool ServerSpawnMaterialDecal_Validate(FHitResult const& ); \
	virtual void ServerSpawnMaterialDecal_Implementation(FHitResult const& Hit); \
 \
	DECLARE_FUNCTION(execMulticastSpawnMaterialDecal); \
	DECLARE_FUNCTION(execMulticastOnHit); \
	DECLARE_FUNCTION(execServerSpawnMaterialDecal); \
	DECLARE_FUNCTION(execOnHit);


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSpawnMaterialDecal_Implementation(FHitResult const& Hit); \
	virtual void MulticastOnHit_Implementation(EHitActor HitActorType); \
	virtual bool ServerSpawnMaterialDecal_Validate(FHitResult const& ); \
	virtual void ServerSpawnMaterialDecal_Implementation(FHitResult const& Hit); \
 \
	DECLARE_FUNCTION(execMulticastSpawnMaterialDecal); \
	DECLARE_FUNCTION(execMulticastOnHit); \
	DECLARE_FUNCTION(execServerSpawnMaterialDecal); \
	DECLARE_FUNCTION(execOnHit);


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_EVENT_PARMS \
	struct Projectile_eventMulticastOnHit_Parms \
	{ \
		EHitActor HitActorType; \
	}; \
	struct Projectile_eventMulticastSpawnMaterialDecal_Parms \
	{ \
		FHitResult Hit; \
	}; \
	struct Projectile_eventServerSpawnMaterialDecal_Parms \
	{ \
		FHitResult Hit; \
	};


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_CALLBACK_WRAPPERS
#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_10_PROLOG \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_EVENT_PARMS


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_INCLASS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_Projectile_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
