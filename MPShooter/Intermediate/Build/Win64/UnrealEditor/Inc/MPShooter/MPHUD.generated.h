// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEliminateAnnouncement;
#ifdef MPSHOOTER_MPHUD_generated_h
#error "MPHUD.generated.h already included, missing '#pragma once' in MPHUD.h"
#endif
#define MPSHOOTER_MPHUD_generated_h

#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHUDPackage_Statics; \
	MPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> MPSHOOTER_API UScriptStruct* StaticStruct<struct FHUDPackage>();

#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEliminateAnnouncementTimerFinished);


#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEliminateAnnouncementTimerFinished);


#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPHUD(); \
	friend struct Z_Construct_UClass_AMPHUD_Statics; \
public: \
	DECLARE_CLASS(AMPHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AMPHUD)


#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAMPHUD(); \
	friend struct Z_Construct_UClass_AMPHUD_Statics; \
public: \
	DECLARE_CLASS(AMPHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AMPHUD)


#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPHUD(AMPHUD&&); \
	NO_API AMPHUD(const AMPHUD&); \
public:


#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPHUD(AMPHUD&&); \
	NO_API AMPHUD(const AMPHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPHUD)


#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_24_PROLOG
#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_INCLASS \
	FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_HUD_MPHUD_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class AMPHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_HUD_MPHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
