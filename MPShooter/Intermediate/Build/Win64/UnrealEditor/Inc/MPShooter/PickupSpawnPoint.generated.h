// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MPSHOOTER_PickupSpawnPoint_generated_h
#error "PickupSpawnPoint.generated.h already included, missing '#pragma once' in PickupSpawnPoint.h"
#endif
#define MPSHOOTER_PickupSpawnPoint_generated_h

#define FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartSpawnPickupTimer);


#define FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartSpawnPickupTimer);


#define FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupSpawnPoint(); \
	friend struct Z_Construct_UClass_APickupSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(APickupSpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(APickupSpawnPoint)


#define FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickupSpawnPoint(); \
	friend struct Z_Construct_UClass_APickupSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(APickupSpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(APickupSpawnPoint)


#define FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupSpawnPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupSpawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupSpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupSpawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupSpawnPoint(APickupSpawnPoint&&); \
	NO_API APickupSpawnPoint(const APickupSpawnPoint&); \
public:


#define FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupSpawnPoint(APickupSpawnPoint&&); \
	NO_API APickupSpawnPoint(const APickupSpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupSpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupSpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupSpawnPoint)


#define FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_9_PROLOG
#define FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_INCLASS \
	FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class APickupSpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_Item_Pickup_PickupSpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
