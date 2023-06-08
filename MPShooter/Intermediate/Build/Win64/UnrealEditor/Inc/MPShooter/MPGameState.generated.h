// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MPSHOOTER_MPGameState_generated_h
#error "MPGameState.generated.h already included, missing '#pragma once' in MPGameState.h"
#endif
#define MPSHOOTER_MPGameState_generated_h

#define FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_RPC_WRAPPERS
#define FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPGameState(); \
	friend struct Z_Construct_UClass_AMPGameState_Statics; \
public: \
	DECLARE_CLASS(AMPGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AMPGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TopScoringPlayers=NETFIELD_REP_START, \
		NETFIELD_REP_END=TopScoringPlayers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMPGameState(); \
	friend struct Z_Construct_UClass_AMPGameState_Statics; \
public: \
	DECLARE_CLASS(AMPGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AMPGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TopScoringPlayers=NETFIELD_REP_START, \
		NETFIELD_REP_END=TopScoringPlayers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPGameState(AMPGameState&&); \
	NO_API AMPGameState(const AMPGameState&); \
public:


#define FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPGameState(AMPGameState&&); \
	NO_API AMPGameState(const AMPGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPGameState)


#define FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_9_PROLOG
#define FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_INCLASS \
	FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_GameState_MPGameState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class AMPGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_GameState_MPGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
