// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef MPSHOOTER_MPPlayerController_generated_h
#error "MPPlayerController.generated.h already included, missing '#pragma once' in MPPlayerController.h"
#endif
#define MPSHOOTER_MPPlayerController_generated_h

#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_12_DELEGATE \
struct _Script_MPShooter_eventHighPingDelegate_Parms \
{ \
	bool bPingTooHigh; \
}; \
static inline void FHighPingDelegate_DelegateWrapper(const FMulticastScriptDelegate& HighPingDelegate, bool bPingTooHigh) \
{ \
	_Script_MPShooter_eventHighPingDelegate_Parms Parms; \
	Parms.bPingTooHigh=bPingTooHigh ? true : false; \
	HighPingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_SPARSE_DATA
#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_RPC_WRAPPERS \
	virtual void ClientEliminateAnnouncement_Implementation(APlayerState* Attacker, APlayerState* Victim); \
	virtual void ClientJoinMidGame_Implementation(FName StateOfMatch, float Warmup, float LevelStart, float Match, float Cooldown, float MatchWarning); \
	virtual void ServerCheckMatchState_Implementation(); \
	virtual void ServerReportPingStatus_Implementation(bool bHighPing); \
	virtual void ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest); \
	virtual void ServerRequestServerTime_Implementation(float TimeOfClientRequest); \
	virtual void ClientChatMessage_Implementation(const FString& SenderName, const FString& Msg); \
	virtual void ServerBroadcastChatMessage_Implementation(APlayerState* Sender, const FString& Msg); \
 \
	DECLARE_FUNCTION(execOnRep_MatchState); \
	DECLARE_FUNCTION(execClientEliminateAnnouncement); \
	DECLARE_FUNCTION(execClientJoinMidGame); \
	DECLARE_FUNCTION(execServerCheckMatchState); \
	DECLARE_FUNCTION(execServerReportPingStatus); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execServerRequestServerTime); \
	DECLARE_FUNCTION(execClientChatMessage); \
	DECLARE_FUNCTION(execServerBroadcastChatMessage); \
	DECLARE_FUNCTION(execCommitChatTextBox);


#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientEliminateAnnouncement_Implementation(APlayerState* Attacker, APlayerState* Victim); \
	virtual void ClientJoinMidGame_Implementation(FName StateOfMatch, float Warmup, float LevelStart, float Match, float Cooldown, float MatchWarning); \
	virtual void ServerCheckMatchState_Implementation(); \
	virtual void ServerReportPingStatus_Implementation(bool bHighPing); \
	virtual void ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest); \
	virtual void ServerRequestServerTime_Implementation(float TimeOfClientRequest); \
	virtual void ClientChatMessage_Implementation(const FString& SenderName, const FString& Msg); \
	virtual void ServerBroadcastChatMessage_Implementation(APlayerState* Sender, const FString& Msg); \
 \
	DECLARE_FUNCTION(execOnRep_MatchState); \
	DECLARE_FUNCTION(execClientEliminateAnnouncement); \
	DECLARE_FUNCTION(execClientJoinMidGame); \
	DECLARE_FUNCTION(execServerCheckMatchState); \
	DECLARE_FUNCTION(execServerReportPingStatus); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execServerRequestServerTime); \
	DECLARE_FUNCTION(execClientChatMessage); \
	DECLARE_FUNCTION(execServerBroadcastChatMessage); \
	DECLARE_FUNCTION(execCommitChatTextBox);


#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_EVENT_PARMS \
	struct MPPlayerController_eventClientChatMessage_Parms \
	{ \
		FString SenderName; \
		FString Msg; \
	}; \
	struct MPPlayerController_eventClientEliminateAnnouncement_Parms \
	{ \
		APlayerState* Attacker; \
		APlayerState* Victim; \
	}; \
	struct MPPlayerController_eventClientJoinMidGame_Parms \
	{ \
		FName StateOfMatch; \
		float Warmup; \
		float LevelStart; \
		float Match; \
		float Cooldown; \
		float MatchWarning; \
	}; \
	struct MPPlayerController_eventClientReportServerTime_Parms \
	{ \
		float TimeOfClientRequest; \
		float TimeServerReceivedClientRequest; \
	}; \
	struct MPPlayerController_eventServerBroadcastChatMessage_Parms \
	{ \
		APlayerState* Sender; \
		FString Msg; \
	}; \
	struct MPPlayerController_eventServerReportPingStatus_Parms \
	{ \
		bool bHighPing; \
	}; \
	struct MPPlayerController_eventServerRequestServerTime_Parms \
	{ \
		float TimeOfClientRequest; \
	};


#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_CALLBACK_WRAPPERS
#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPPlayerController(); \
	friend struct Z_Construct_UClass_AMPPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMPPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AMPPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMPPlayerController(); \
	friend struct Z_Construct_UClass_AMPPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMPPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MPShooter"), NO_API) \
	DECLARE_SERIALIZER(AMPPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPPlayerController(AMPPlayerController&&); \
	NO_API AMPPlayerController(const AMPPlayerController&); \
public:


#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPPlayerController(AMPPlayerController&&); \
	NO_API AMPPlayerController(const AMPPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPPlayerController)


#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_14_PROLOG \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_EVENT_PARMS


#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_RPC_WRAPPERS \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_INCLASS \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_SPARSE_DATA \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_CALLBACK_WRAPPERS \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MPSHOOTER_API UClass* StaticClass<class AMPPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
