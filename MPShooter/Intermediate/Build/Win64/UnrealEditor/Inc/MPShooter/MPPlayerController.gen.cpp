// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/PlayerController/MPPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPPlayerController() {}
// Cross Module References
	MPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerController_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPShooterGameMode_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPHUD_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UReturnToMainMenu_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics
	{
		struct _Script_MPShooter_eventHighPingDelegate_Parms
		{
			bool bPingTooHigh;
		};
		static void NewProp_bPingTooHigh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPingTooHigh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh_SetBit(void* Obj)
	{
		((_Script_MPShooter_eventHighPingDelegate_Parms*)Obj)->bPingTooHigh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh = { "bPingTooHigh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MPShooter_eventHighPingDelegate_Parms), &Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MPShooter, nullptr, "HighPingDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::_Script_MPShooter_eventHighPingDelegate_Parms), Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMPPlayerController::execOnRep_MatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MatchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPPlayerController::execClientEliminateAnnouncement)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Attacker);
		P_GET_OBJECT(APlayerState,Z_Param_Victim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEliminateAnnouncement_Implementation(Z_Param_Attacker,Z_Param_Victim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPPlayerController::execClientJoinMidGame)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateOfMatch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Warmup);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LevelStart);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Match);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Cooldown);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MatchWarning);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientJoinMidGame_Implementation(Z_Param_StateOfMatch,Z_Param_Warmup,Z_Param_LevelStart,Z_Param_Match,Z_Param_Cooldown,Z_Param_MatchWarning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPPlayerController::execServerCheckMatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCheckMatchState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPPlayerController::execServerReportPingStatus)
	{
		P_GET_UBOOL(Z_Param_bHighPing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerReportPingStatus_Implementation(Z_Param_bHighPing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPPlayerController::execClientReportServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientRequest);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeServerReceivedClientRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReportServerTime_Implementation(Z_Param_TimeOfClientRequest,Z_Param_TimeServerReceivedClientRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPPlayerController::execServerRequestServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequestServerTime_Implementation(Z_Param_TimeOfClientRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPPlayerController::execClientChatMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SenderName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientChatMessage_Implementation(Z_Param_SenderName,Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPPlayerController::execServerBroadcastChatMessage)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Sender);
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerBroadcastChatMessage_Implementation(Z_Param_Sender,Z_Param_Msg);
		P_NATIVE_END;
	}
	static FName NAME_AMPPlayerController_ClientChatMessage = FName(TEXT("ClientChatMessage"));
	void AMPPlayerController::ClientChatMessage(const FString& SenderName, const FString& Msg)
	{
		MPPlayerController_eventClientChatMessage_Parms Parms;
		Parms.SenderName=SenderName;
		Parms.Msg=Msg;
		ProcessEvent(FindFunctionChecked(NAME_AMPPlayerController_ClientChatMessage),&Parms);
	}
	static FName NAME_AMPPlayerController_ClientEliminateAnnouncement = FName(TEXT("ClientEliminateAnnouncement"));
	void AMPPlayerController::ClientEliminateAnnouncement(APlayerState* Attacker, APlayerState* Victim)
	{
		MPPlayerController_eventClientEliminateAnnouncement_Parms Parms;
		Parms.Attacker=Attacker;
		Parms.Victim=Victim;
		ProcessEvent(FindFunctionChecked(NAME_AMPPlayerController_ClientEliminateAnnouncement),&Parms);
	}
	static FName NAME_AMPPlayerController_ClientJoinMidGame = FName(TEXT("ClientJoinMidGame"));
	void AMPPlayerController::ClientJoinMidGame(FName StateOfMatch, float Warmup, float LevelStart, float Match, float Cooldown, float MatchWarning)
	{
		MPPlayerController_eventClientJoinMidGame_Parms Parms;
		Parms.StateOfMatch=StateOfMatch;
		Parms.Warmup=Warmup;
		Parms.LevelStart=LevelStart;
		Parms.Match=Match;
		Parms.Cooldown=Cooldown;
		Parms.MatchWarning=MatchWarning;
		ProcessEvent(FindFunctionChecked(NAME_AMPPlayerController_ClientJoinMidGame),&Parms);
	}
	static FName NAME_AMPPlayerController_ClientReportServerTime = FName(TEXT("ClientReportServerTime"));
	void AMPPlayerController::ClientReportServerTime(float TimeOfClientRequest, float TimeServerReceivedClientRequest)
	{
		MPPlayerController_eventClientReportServerTime_Parms Parms;
		Parms.TimeOfClientRequest=TimeOfClientRequest;
		Parms.TimeServerReceivedClientRequest=TimeServerReceivedClientRequest;
		ProcessEvent(FindFunctionChecked(NAME_AMPPlayerController_ClientReportServerTime),&Parms);
	}
	static FName NAME_AMPPlayerController_ServerBroadcastChatMessage = FName(TEXT("ServerBroadcastChatMessage"));
	void AMPPlayerController::ServerBroadcastChatMessage(APlayerState* Sender, const FString& Msg)
	{
		MPPlayerController_eventServerBroadcastChatMessage_Parms Parms;
		Parms.Sender=Sender;
		Parms.Msg=Msg;
		ProcessEvent(FindFunctionChecked(NAME_AMPPlayerController_ServerBroadcastChatMessage),&Parms);
	}
	static FName NAME_AMPPlayerController_ServerCheckMatchState = FName(TEXT("ServerCheckMatchState"));
	void AMPPlayerController::ServerCheckMatchState()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMPPlayerController_ServerCheckMatchState),NULL);
	}
	static FName NAME_AMPPlayerController_ServerReportPingStatus = FName(TEXT("ServerReportPingStatus"));
	void AMPPlayerController::ServerReportPingStatus(bool bHighPing)
	{
		MPPlayerController_eventServerReportPingStatus_Parms Parms;
		Parms.bHighPing=bHighPing ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMPPlayerController_ServerReportPingStatus),&Parms);
	}
	static FName NAME_AMPPlayerController_ServerRequestServerTime = FName(TEXT("ServerRequestServerTime"));
	void AMPPlayerController::ServerRequestServerTime(float TimeOfClientRequest)
	{
		MPPlayerController_eventServerRequestServerTime_Parms Parms;
		Parms.TimeOfClientRequest=TimeOfClientRequest;
		ProcessEvent(FindFunctionChecked(NAME_AMPPlayerController_ServerRequestServerTime),&Parms);
	}
	void AMPPlayerController::StaticRegisterNativesAMPPlayerController()
	{
		UClass* Class = AMPPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientChatMessage", &AMPPlayerController::execClientChatMessage },
			{ "ClientEliminateAnnouncement", &AMPPlayerController::execClientEliminateAnnouncement },
			{ "ClientJoinMidGame", &AMPPlayerController::execClientJoinMidGame },
			{ "ClientReportServerTime", &AMPPlayerController::execClientReportServerTime },
			{ "OnRep_MatchState", &AMPPlayerController::execOnRep_MatchState },
			{ "ServerBroadcastChatMessage", &AMPPlayerController::execServerBroadcastChatMessage },
			{ "ServerCheckMatchState", &AMPPlayerController::execServerCheckMatchState },
			{ "ServerReportPingStatus", &AMPPlayerController::execServerReportPingStatus },
			{ "ServerRequestServerTime", &AMPPlayerController::execServerRequestServerTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::NewProp_SenderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientChatMessage_Parms, SenderName), METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::NewProp_SenderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::NewProp_SenderName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientChatMessage_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::NewProp_Msg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::NewProp_SenderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerController, nullptr, "ClientChatMessage", nullptr, nullptr, sizeof(MPPlayerController_eventClientChatMessage_Parms), Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPPlayerController_ClientChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerController_ClientChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientEliminateAnnouncement_Parms, Attacker), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientEliminateAnnouncement_Parms, Victim), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::NewProp_Attacker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::NewProp_Victim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerController, nullptr, "ClientEliminateAnnouncement", nullptr, nullptr, sizeof(MPPlayerController_eventClientEliminateAnnouncement_Parms), Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateOfMatch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warmup;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelStart;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Match;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatchWarning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch = { "StateOfMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientJoinMidGame_Parms, StateOfMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_Warmup = { "Warmup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientJoinMidGame_Parms, Warmup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_LevelStart = { "LevelStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientJoinMidGame_Parms, LevelStart), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientJoinMidGame_Parms, Match), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientJoinMidGame_Parms, Cooldown), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_MatchWarning = { "MatchWarning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientJoinMidGame_Parms, MatchWarning), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_Warmup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_LevelStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_Match,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_Cooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::NewProp_MatchWarning,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerController, nullptr, "ClientJoinMidGame", nullptr, nullptr, sizeof(MPPlayerController_eventClientJoinMidGame_Parms), Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientRequest;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeServerReceivedClientRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::NewProp_TimeOfClientRequest = { "TimeOfClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientReportServerTime_Parms, TimeOfClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::NewProp_TimeServerReceivedClientRequest = { "TimeServerReceivedClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventClientReportServerTime_Parms, TimeServerReceivedClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::NewProp_TimeOfClientRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::NewProp_TimeServerReceivedClientRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerController, nullptr, "ClientReportServerTime", nullptr, nullptr, sizeof(MPPlayerController_eventClientReportServerTime_Parms), Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPPlayerController_OnRep_MatchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerController_OnRep_MatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerController, nullptr, "OnRep_MatchState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPPlayerController_OnRep_MatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerController_OnRep_MatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventServerBroadcastChatMessage_Parms, Sender), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventServerBroadcastChatMessage_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::NewProp_Msg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::NewProp_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerController, nullptr, "ServerBroadcastChatMessage", nullptr, nullptr, sizeof(MPPlayerController_eventServerBroadcastChatMessage_Parms), Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPPlayerController_ServerCheckMatchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Match State\n//\n" },
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
		{ "ToolTip", "Match State" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerController_ServerCheckMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerController, nullptr, "ServerCheckMatchState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPPlayerController_ServerCheckMatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerController_ServerCheckMatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics
	{
		static void NewProp_bHighPing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing_SetBit(void* Obj)
	{
		((MPPlayerController_eventServerReportPingStatus_Parms*)Obj)->bHighPing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing = { "bHighPing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MPPlayerController_eventServerReportPingStatus_Parms), &Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerController, nullptr, "ServerReportPingStatus", nullptr, nullptr, sizeof(MPPlayerController_eventServerReportPingStatus_Parms), Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics::NewProp_TimeOfClientRequest = { "TimeOfClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MPPlayerController_eventServerRequestServerTime_Parms, TimeOfClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics::NewProp_TimeOfClientRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerController, nullptr, "ServerRequestServerTime", nullptr, nullptr, sizeof(MPPlayerController_eventServerRequestServerTime_Parms), Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPPlayerController);
	UClass* Z_Construct_UClass_AMPPlayerController_NoRegister()
	{
		return AMPPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMPPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSyncFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSyncFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPShooterGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPShooterGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MatchState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPingDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPingFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckPingFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToMainMenuWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnToMainMenuWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToMainMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToMainMenu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMPPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMPPlayerController_ClientChatMessage, "ClientChatMessage" }, // 3187986061
		{ &Z_Construct_UFunction_AMPPlayerController_ClientEliminateAnnouncement, "ClientEliminateAnnouncement" }, // 1266057710
		{ &Z_Construct_UFunction_AMPPlayerController_ClientJoinMidGame, "ClientJoinMidGame" }, // 4236702150
		{ &Z_Construct_UFunction_AMPPlayerController_ClientReportServerTime, "ClientReportServerTime" }, // 4208733907
		{ &Z_Construct_UFunction_AMPPlayerController_OnRep_MatchState, "OnRep_MatchState" }, // 1253050963
		{ &Z_Construct_UFunction_AMPPlayerController_ServerBroadcastChatMessage, "ServerBroadcastChatMessage" }, // 1146088138
		{ &Z_Construct_UFunction_AMPPlayerController_ServerCheckMatchState, "ServerCheckMatchState" }, // 1562194947
		{ &Z_Construct_UFunction_AMPPlayerController_ServerReportPingStatus, "ServerReportPingStatus" }, // 300720284
		{ &Z_Construct_UFunction_AMPPlayerController_ServerRequestServerTime, "ServerRequestServerTime" }, // 4203439380
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/MPPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
		{ "ToolTip", "How frequently to get the server's time (seconds)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPPlayerController_Statics::NewProp_TimeSyncFrequency = { "TimeSyncFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerController, TimeSyncFrequency), METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MPShooterGameMode_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MPShooterGameMode = { "MPShooterGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerController, MPShooterGameMode), Z_Construct_UClass_AMPShooterGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MPShooterGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MPShooterGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MPHUD_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MPHUD = { "MPHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerController, MPHUD), Z_Construct_UClass_AMPHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MPHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MPHUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MatchState_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MatchState = { "MatchState", "OnRep_MatchState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerController, MatchState), METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MatchState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::NewProp_CharacterOverlay_MetaData[] = {
		{ "Comment", "//\n// Character Overlay - Cached Properties\n// it updates late in the process, so it's best to separate what updates\n//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
		{ "ToolTip", "Character Overlay - Cached Properties\nit updates late in the process, so it's best to separate what updates" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPPlayerController_Statics::NewProp_CharacterOverlay = { "CharacterOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerController, CharacterOverlay), Z_Construct_UClass_UCharacterOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_CharacterOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_CharacterOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::NewProp_HighPingDuration_MetaData[] = {
		{ "Category", "Ping" },
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
		{ "ToolTip", "Amount of time the high ping animation plays." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPPlayerController_Statics::NewProp_HighPingDuration = { "HighPingDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerController, HighPingDuration), METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_HighPingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_HighPingDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::NewProp_CheckPingFrequency_MetaData[] = {
		{ "Category", "Ping" },
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
		{ "ToolTip", "How often to check for ping." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPPlayerController_Statics::NewProp_CheckPingFrequency = { "CheckPingFrequency", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerController, CheckPingFrequency), METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_CheckPingFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_CheckPingFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::NewProp_HighPingThreshold_MetaData[] = {
		{ "Category", "Ping" },
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
		{ "ToolTip", "Threshold of acceptable ping." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMPPlayerController_Statics::NewProp_HighPingThreshold = { "HighPingThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerController, HighPingThreshold), METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_HighPingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_HighPingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::NewProp_ReturnToMainMenuWidget_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
		{ "ToolTip", "Widget for returning to the main menu." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMPPlayerController_Statics::NewProp_ReturnToMainMenuWidget = { "ReturnToMainMenuWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerController, ReturnToMainMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_ReturnToMainMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_ReturnToMainMenuWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerController_Statics::NewProp_ReturnToMainMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/MPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPPlayerController_Statics::NewProp_ReturnToMainMenu = { "ReturnToMainMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerController, ReturnToMainMenu), Z_Construct_UClass_UReturnToMainMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_ReturnToMainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::NewProp_ReturnToMainMenu_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerController_Statics::NewProp_TimeSyncFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MPShooterGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MPHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerController_Statics::NewProp_MatchState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerController_Statics::NewProp_CharacterOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerController_Statics::NewProp_HighPingDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerController_Statics::NewProp_CheckPingFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerController_Statics::NewProp_HighPingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerController_Statics::NewProp_ReturnToMainMenuWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerController_Statics::NewProp_ReturnToMainMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPPlayerController_Statics::ClassParams = {
		&AMPPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMPPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMPPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMPPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMPPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPPlayerController.OuterSingleton, Z_Construct_UClass_AMPPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMPPlayerController.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AMPPlayerController>()
	{
		return AMPPlayerController::StaticClass();
	}

	void AMPPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MatchState(TEXT("MatchState"));

		const bool bIsValid = true
			&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMPPlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPPlayerController);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMPPlayerController, AMPPlayerController::StaticClass, TEXT("AMPPlayerController"), &Z_Registration_Info_UClass_AMPPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPPlayerController), 3422313579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_3944133200(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_PlayerController_MPPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
