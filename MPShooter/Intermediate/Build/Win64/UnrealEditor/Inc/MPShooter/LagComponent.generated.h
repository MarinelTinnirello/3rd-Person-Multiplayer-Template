// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMPCharacter;
struct FVector_NetQuantize;
struct FVector_NetQuantize100;
class AWeapon;
#ifdef MPSHOOTER_LagComponent_generated_h
#error "LagComponent.generated.h already included, missing '#pragma once' in LagComponent.h"
#endif
#define MPSHOOTER_LagComponent_generated_h

#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoxInformation_Statics; \
	MPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> MPSHOOTER_API UScriptStruct* StaticStruct<struct FBoxInformation>();

#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapsuleInformation_Statics; \
	MPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> MPSHOOTER_API UScriptStruct* StaticStruct<struct FCapsuleInformation>();

#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFramePackage_Statics; \
	MPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> MPSHOOTER_API UScriptStruct* StaticStruct<struct FFramePackage>();

#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerSideRewindResult_Statics; \
	MPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> MPSHOOTER_API UScriptStruct* StaticStruct<struct FServerSideRewindResult>();

#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerSideRewindShotgunResult_Statics; \
	MPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> MPSHOOTER_API UScriptStruct* StaticStruct<struct FServerSideRewindShotgunResult>();

#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_RPC_WRAPPERS \
	virtual void ServerScoreRequestProjectile_Implementation(AMPCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize100 const& InitialVelocity, float HitTime); \
	virtual void ServerScoreRequestShotgun_Implementation(TArray<AMPCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, float HitTime); \
	virtual void ServerScoreRequest_Implementation(AMPCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, float HitTime, AWeapon* DamageCauser); \
 \
	DECLARE_FUNCTION(execServerScoreRequestProjectile); \
	DECLARE_FUNCTION(execServerScoreRequestShotgun); \
	DECLARE_FUNCTION(execServerScoreRequest);


#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerScoreRequestProjectile_Implementation(AMPCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize100 const& InitialVelocity, float HitTime); \
	virtual void ServerScoreRequestShotgun_Implementation(TArray<AMPCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, float HitTime); \
	virtual void ServerScoreRequest_Implementation(AMPCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, float HitTime, AWeapon* DamageCauser); \
 \
	DECLARE_FUNCTION(execServerScoreRequestProjectile); \
	DECLARE_FUNCTION(execServerScoreRequestShotgun); \
	DECLARE_FUNCTION(execServerScoreRequest);


#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_EVENT_PARMS \
	struct LagComponent_eventServerScoreRequest_Parms \
	{ \
		AMPCharacter* HitCharacter; \
		FVector_NetQuantize TraceStart; \
		FVector_NetQuantize HitLocation; \
		float HitTime; \
		AWeapon* DamageCauser; \
	}; \
	struct LagComponent_eventServerScoreRequestProjectile_Parms \
	{ \
		AMPCharacter* HitCharacter; \
		FVector_NetQuantize TraceStart; \
		FVector_NetQuantize100 InitialVelocity; \
		float HitTime; \
	}; \
	struct LagComponent_eventServerScoreRequestShotgun_Parms \
	{ \
		TArray<AMPCharacter*> HitCharacters; \
		FVector_NetQuantize TraceStart; \
		TArray<FVector_NetQuantize> HitLocations; \
		float HitTime; \
	};


#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_CALLBACK_WRAPPERS
#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULagComponent(); \
	friend struct Z_Construct_UClass_ULagComponent_Statics; \
public: \
	DECLARE_CLASS(ULagComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(ULagComponent)


#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_INCLASS \
private: \
	static void StaticRegisterNativesULagComponent(); \
	friend struct Z_Construct_UClass_ULagComponent_Statics; \
public: \
	DECLARE_CLASS(ULagComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(ULagComponent)


#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULagComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULagComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULagComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULagComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULagComponent(ULagComponent&&); \
	NO_API ULagComponent(const ULagComponent&); \
public:


#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULagComponent(ULagComponent&&); \
	NO_API ULagComponent(const ULagComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULagComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULagComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULagComponent)


#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_75_PROLOG \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_EVENT_PARMS


#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_INCLASS \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class ULagComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_MPComponents_LagComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
