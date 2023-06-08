// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
#ifdef MPSHOOTER_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define MPSHOOTER_CombatComponent_generated_h

#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_RPC_WRAPPERS \
	virtual void MulticastFireShotgun_Implementation(TArray<FVector_NetQuantize> const& TraceHitTargets); \
	virtual void MulticastFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerThrow_Implementation(); \
	virtual void ServerReload_Implementation(); \
	virtual bool ServerFireShotgun_Validate(TArray<FVector_NetQuantize> const& , float ); \
	virtual void ServerFireShotgun_Implementation(TArray<FVector_NetQuantize> const& TraceHitTargets, float FireDelay); \
	virtual bool ServerFire_Validate(FVector_NetQuantize const& , float ); \
	virtual void ServerFire_Implementation(FVector_NetQuantize const& TraceHitTarget, float FireDelay); \
	virtual void ServerSetAiming_Implementation(bool bIsAiming); \
	virtual void ServerLaunchThrowable_Implementation(FVector_NetQuantize const& Target); \
 \
	DECLARE_FUNCTION(execOnRep_CarriedAmmo); \
	DECLARE_FUNCTION(execOnRep_Aiming); \
	DECLARE_FUNCTION(execOnRep_CombatState); \
	DECLARE_FUNCTION(execMulticastFireShotgun); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerThrow); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execServerFireShotgun); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execServerSetAiming); \
	DECLARE_FUNCTION(execOnRep_EquippedThrowableWeapon); \
	DECLARE_FUNCTION(execOnRep_EquippedSecondaryWeapon); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execServerLaunchThrowable); \
	DECLARE_FUNCTION(execLaunchThrowable); \
	DECLARE_FUNCTION(execEndThrow); \
	DECLARE_FUNCTION(execShotgunShellReload); \
	DECLARE_FUNCTION(execEndReloading); \
	DECLARE_FUNCTION(execEndSwapAttachWeapons); \
	DECLARE_FUNCTION(execEndSwap);


#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastFireShotgun_Implementation(TArray<FVector_NetQuantize> const& TraceHitTargets); \
	virtual void MulticastFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerThrow_Implementation(); \
	virtual void ServerReload_Implementation(); \
	virtual bool ServerFireShotgun_Validate(TArray<FVector_NetQuantize> const& , float ); \
	virtual void ServerFireShotgun_Implementation(TArray<FVector_NetQuantize> const& TraceHitTargets, float FireDelay); \
	virtual bool ServerFire_Validate(FVector_NetQuantize const& , float ); \
	virtual void ServerFire_Implementation(FVector_NetQuantize const& TraceHitTarget, float FireDelay); \
	virtual void ServerSetAiming_Implementation(bool bIsAiming); \
	virtual void ServerLaunchThrowable_Implementation(FVector_NetQuantize const& Target); \
 \
	DECLARE_FUNCTION(execOnRep_CarriedAmmo); \
	DECLARE_FUNCTION(execOnRep_Aiming); \
	DECLARE_FUNCTION(execOnRep_CombatState); \
	DECLARE_FUNCTION(execMulticastFireShotgun); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerThrow); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execServerFireShotgun); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execServerSetAiming); \
	DECLARE_FUNCTION(execOnRep_EquippedThrowableWeapon); \
	DECLARE_FUNCTION(execOnRep_EquippedSecondaryWeapon); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execServerLaunchThrowable); \
	DECLARE_FUNCTION(execLaunchThrowable); \
	DECLARE_FUNCTION(execEndThrow); \
	DECLARE_FUNCTION(execShotgunShellReload); \
	DECLARE_FUNCTION(execEndReloading); \
	DECLARE_FUNCTION(execEndSwapAttachWeapons); \
	DECLARE_FUNCTION(execEndSwap);


#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_EVENT_PARMS \
	struct CombatComponent_eventMulticastFire_Parms \
	{ \
		FVector_NetQuantize TraceHitTarget; \
	}; \
	struct CombatComponent_eventMulticastFireShotgun_Parms \
	{ \
		TArray<FVector_NetQuantize> TraceHitTargets; \
	}; \
	struct CombatComponent_eventServerFire_Parms \
	{ \
		FVector_NetQuantize TraceHitTarget; \
		float FireDelay; \
	}; \
	struct CombatComponent_eventServerFireShotgun_Parms \
	{ \
		TArray<FVector_NetQuantize> TraceHitTargets; \
		float FireDelay; \
	}; \
	struct CombatComponent_eventServerLaunchThrowable_Parms \
	{ \
		FVector_NetQuantize Target; \
	}; \
	struct CombatComponent_eventServerSetAiming_Parms \
	{ \
		bool bIsAiming; \
	};


#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_CALLBACK_WRAPPERS
#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CombatState=NETFIELD_REP_START, \
		EquippedWeapon, \
		EquippedSecondaryWeapon, \
		bAiming, \
		CarriedAmmo, \
		EquippedThrowableWeapon, \
		NETFIELD_REP_END=EquippedThrowableWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CombatState=NETFIELD_REP_START, \
		EquippedWeapon, \
		EquippedSecondaryWeapon, \
		bAiming, \
		CarriedAmmo, \
		EquippedThrowableWeapon, \
		NETFIELD_REP_END=EquippedThrowableWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public:


#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent)


#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_15_PROLOG \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_EVENT_PARMS


#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_INCLASS \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_MPComponents_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
