// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MPSHOOTER_BuffComponent_generated_h
#error "BuffComponent.generated.h already included, missing '#pragma once' in BuffComponent.h"
#endif
#define MPSHOOTER_BuffComponent_generated_h

#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_RPC_WRAPPERS \
	virtual void MulticastJumpBuff_Implementation(float JumpVelocity); \
	virtual void MulticastSpeedBuff_Implementation(float BaseSpeed, float CrouchSpeed); \
 \
	DECLARE_FUNCTION(execMulticastJumpBuff); \
	DECLARE_FUNCTION(execMulticastSpeedBuff);


#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastJumpBuff_Implementation(float JumpVelocity); \
	virtual void MulticastSpeedBuff_Implementation(float BaseSpeed, float CrouchSpeed); \
 \
	DECLARE_FUNCTION(execMulticastJumpBuff); \
	DECLARE_FUNCTION(execMulticastSpeedBuff);


#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_EVENT_PARMS \
	struct BuffComponent_eventMulticastJumpBuff_Parms \
	{ \
		float JumpVelocity; \
	}; \
	struct BuffComponent_eventMulticastSpeedBuff_Parms \
	{ \
		float BaseSpeed; \
		float CrouchSpeed; \
	};


#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_CALLBACK_WRAPPERS
#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuffComponent(); \
	friend struct Z_Construct_UClass_UBuffComponent_Statics; \
public: \
	DECLARE_CLASS(UBuffComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(UBuffComponent)


#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBuffComponent(); \
	friend struct Z_Construct_UClass_UBuffComponent_Statics; \
public: \
	DECLARE_CLASS(UBuffComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(UBuffComponent)


#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuffComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuffComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuffComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuffComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuffComponent(UBuffComponent&&); \
	NO_API UBuffComponent(const UBuffComponent&); \
public:


#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuffComponent(UBuffComponent&&); \
	NO_API UBuffComponent(const UBuffComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuffComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuffComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuffComponent)


#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_10_PROLOG \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_EVENT_PARMS


#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_INCLASS \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class UBuffComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
