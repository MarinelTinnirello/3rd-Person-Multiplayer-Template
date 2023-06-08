// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MPSHOOTER_MPPlayerState_generated_h
#error "MPPlayerState.generated.h already included, missing '#pragma once' in MPPlayerState.h"
#endif
#define MPSHOOTER_MPPlayerState_generated_h

#define FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Defeat);


#define FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Defeat);


#define FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPPlayerState(); \
	friend struct Z_Construct_UClass_AMPPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMPPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AMPPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Defeat=NETFIELD_REP_START, \
		NETFIELD_REP_END=Defeat	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMPPlayerState(); \
	friend struct Z_Construct_UClass_AMPPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMPPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AMPPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Defeat=NETFIELD_REP_START, \
		NETFIELD_REP_END=Defeat	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPPlayerState(AMPPlayerState&&); \
	NO_API AMPPlayerState(const AMPPlayerState&); \
public:


#define FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPPlayerState(AMPPlayerState&&); \
	NO_API AMPPlayerState(const AMPPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPPlayerState)


#define FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_9_PROLOG
#define FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_INCLASS \
	FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class AMPPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
