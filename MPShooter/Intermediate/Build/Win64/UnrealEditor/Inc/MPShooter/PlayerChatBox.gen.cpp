// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/HUD/PlayerChatBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerChatBox() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UPlayerChatBox_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UPlayerChatBox();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerChatBox::execCommitChatTextBox)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CommitChatTextBox(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
		P_NATIVE_END;
	}
	void UPlayerChatBox::StaticRegisterNativesUPlayerChatBox()
	{
		UClass* Class = UPlayerChatBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CommitChatTextBox", &UPlayerChatBox::execCommitChatTextBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics
	{
		struct PlayerChatBox_eventCommitChatTextBox_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerChatBox_eventCommitChatTextBox_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerChatBox_eventCommitChatTextBox_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) }; // 1116915171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerChatBox, nullptr, "CommitChatTextBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::PlayerChatBox_eventCommitChatTextBox_Parms), Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerChatBox);
	UClass* Z_Construct_UClass_UPlayerChatBox_NoRegister()
	{
		return UPlayerChatBox::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerChatBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatTextBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChatBoxVisible_MetaData[];
#endif
		static void NewProp_bChatBoxVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChatBoxVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerChatBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerChatBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerChatBox_CommitChatTextBox, "CommitChatTextBox" }, // 398163114
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChatBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/PlayerChatBox.h" },
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementBox = { "AnnouncementBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerChatBox, AnnouncementBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementText = { "AnnouncementText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerChatBox, AnnouncementText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_ChatTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_ChatTextBox = { "ChatTextBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerChatBox, ChatTextBox), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_ChatTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_ChatTextBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_bChatBoxVisible_MetaData[] = {
		{ "ModuleRelativePath", "HUD/PlayerChatBox.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_bChatBoxVisible_SetBit(void* Obj)
	{
		((UPlayerChatBox*)Obj)->bChatBoxVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_bChatBoxVisible = { "bChatBoxVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerChatBox), &Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_bChatBoxVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_bChatBoxVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_bChatBoxVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerChatBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_AnnouncementText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_ChatTextBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChatBox_Statics::NewProp_bChatBoxVisible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerChatBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerChatBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerChatBox_Statics::ClassParams = {
		&UPlayerChatBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerChatBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerChatBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChatBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerChatBox()
	{
		if (!Z_Registration_Info_UClass_UPlayerChatBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerChatBox.OuterSingleton, Z_Construct_UClass_UPlayerChatBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerChatBox.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UPlayerChatBox>()
	{
		return UPlayerChatBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerChatBox);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerChatBox, UPlayerChatBox::StaticClass, TEXT("UPlayerChatBox"), &Z_Registration_Info_UClass_UPlayerChatBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerChatBox), 1108524094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_1872653303(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_PlayerChatBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
