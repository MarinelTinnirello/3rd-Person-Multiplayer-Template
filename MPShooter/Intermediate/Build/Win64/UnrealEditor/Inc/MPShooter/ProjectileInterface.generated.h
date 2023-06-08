// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MPSHOOTER_ProjectileInterface_generated_h
#error "ProjectileInterface.generated.h already included, missing '#pragma once' in ProjectileInterface.h"
#endif
#define MPSHOOTER_ProjectileInterface_generated_h

#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_RPC_WRAPPERS
#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MPSHOOTER_API UProjectileInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MPSHOOTER_API, UProjectileInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MPSHOOTER_API UProjectileInterface(UProjectileInterface&&); \
	MPSHOOTER_API UProjectileInterface(const UProjectileInterface&); \
public:


#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MPSHOOTER_API UProjectileInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MPSHOOTER_API UProjectileInterface(UProjectileInterface&&); \
	MPSHOOTER_API UProjectileInterface(const UProjectileInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MPSHOOTER_API, UProjectileInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileInterface)


#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUProjectileInterface(); \
	friend struct Z_Construct_UClass_UProjectileInterface_Statics; \
public: \
	DECLARE_CLASS(UProjectileInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MPShooter"), MPSHOOTER_API) \
	DECLARE_SERIALIZER(UProjectileInterface)


#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IProjectileInterface() {} \
public: \
	typedef UProjectileInterface UClassType; \
	typedef IProjectileInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IProjectileInterface() {} \
public: \
	typedef UProjectileInterface UClassType; \
	typedef IProjectileInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_9_PROLOG
#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class UProjectileInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_Interfaces_ProjectileInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
