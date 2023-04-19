// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AThrowableWeapon;
class AWeapon;
class AActor;
class UDamageType;
class AController;
#ifdef MPSHOOTER_MPCharacter_generated_h
#error "MPCharacter.generated.h already included, missing '#pragma once' in MPCharacter.h"
#endif
#define MPSHOOTER_MPCharacter_generated_h

#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysAssetInformation_Statics; \
	MPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> MPSHOOTER_API UScriptStruct* StaticStruct<struct FPhysAssetInformation>();

#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_RPC_WRAPPERS \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void MulticastEliminated_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSurfaceType); \
	DECLARE_FUNCTION(execOnRep_Shield); \
	DECLARE_FUNCTION(execUpdateDissolveMaterial); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_OverlappingThrowableWeapon); \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execMulticastEliminated);


#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void MulticastEliminated_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSurfaceType); \
	DECLARE_FUNCTION(execOnRep_Shield); \
	DECLARE_FUNCTION(execUpdateDissolveMaterial); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_OverlappingThrowableWeapon); \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execMulticastEliminated);


#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_EVENT_PARMS
#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_CALLBACK_WRAPPERS
#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPCharacter(); \
	friend struct Z_Construct_UClass_AMPCharacter_Statics; \
public: \
	DECLARE_CLASS(AMPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AMPCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMPCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDisableGameplay=NETFIELD_REP_START, \
		OverlappingWeapon, \
		OverlappingThrowableWeapon, \
		Health, \
		Shield, \
		NETFIELD_REP_END=Shield	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAMPCharacter(); \
	friend struct Z_Construct_UClass_AMPCharacter_Statics; \
public: \
	DECLARE_CLASS(AMPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AMPCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMPCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDisableGameplay=NETFIELD_REP_START, \
		OverlappingWeapon, \
		OverlappingThrowableWeapon, \
		Health, \
		Shield, \
		NETFIELD_REP_END=Shield	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPCharacter(AMPCharacter&&); \
	NO_API AMPCharacter(const AMPCharacter&); \
public:


#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPCharacter(AMPCharacter&&); \
	NO_API AMPCharacter(const AMPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMPCharacter)


#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_46_PROLOG \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_EVENT_PARMS


#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_INCLASS \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Character_MPCharacter_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class AMPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_Character_MPCharacter_h


#define FOREACH_ENUM_EPHYSASSETCOLLISION(op) \
	op(EPhysAssetCollision::EPAC_Box) \
	op(EPhysAssetCollision::EPAC_Sphere) \
	op(EPhysAssetCollision::EPAC_Convex) \
	op(EPhysAssetCollision::EPAC_TaperedCapsule) 

enum class EPhysAssetCollision : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<EPhysAssetCollision>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
