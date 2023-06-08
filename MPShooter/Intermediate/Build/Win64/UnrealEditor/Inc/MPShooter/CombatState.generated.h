// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MPSHOOTER_CombatState_generated_h
#error "CombatState.generated.h already included, missing '#pragma once' in CombatState.h"
#endif
#define MPSHOOTER_CombatState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_MPTypes_CombatState_h


#define FOREACH_ENUM_ECOMBATSTATE(op) \
	op(ECombatState::ECS_Unoccupied) \
	op(ECombatState::ECS_Reloading) \
	op(ECombatState::ECS_Throwing) \
	op(ECombatState::ECS_SwappingWeapons) 

enum class ECombatState : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<ECombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
