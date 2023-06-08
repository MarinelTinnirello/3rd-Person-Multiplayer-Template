// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MPSHOOTER_ReturnToMainMenu_generated_h
#error "ReturnToMainMenu.generated.h already included, missing '#pragma once' in ReturnToMainMenu.h"
#endif
#define MPSHOOTER_ReturnToMainMenu_generated_h

#define FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReturnButtonClicked); \
	DECLARE_FUNCTION(execOnPlayerLeftGame); \
	DECLARE_FUNCTION(execOnDestroySession);


#define FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReturnButtonClicked); \
	DECLARE_FUNCTION(execOnPlayerLeftGame); \
	DECLARE_FUNCTION(execOnDestroySession);


#define FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReturnToMainMenu(); \
	friend struct Z_Construct_UClass_UReturnToMainMenu_Statics; \
public: \
	DECLARE_CLASS(UReturnToMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(UReturnToMainMenu)


#define FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUReturnToMainMenu(); \
	friend struct Z_Construct_UClass_UReturnToMainMenu_Statics; \
public: \
	DECLARE_CLASS(UReturnToMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(UReturnToMainMenu)


#define FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReturnToMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReturnToMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReturnToMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReturnToMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReturnToMainMenu(UReturnToMainMenu&&); \
	NO_API UReturnToMainMenu(const UReturnToMainMenu&); \
public:


#define FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReturnToMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReturnToMainMenu(UReturnToMainMenu&&); \
	NO_API UReturnToMainMenu(const UReturnToMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReturnToMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReturnToMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReturnToMainMenu)


#define FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_9_PROLOG
#define FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_INCLASS \
	FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class UReturnToMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_HUD_ReturnToMainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
