// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/HUD/WeaponWheelWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponWheelWidget() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UWeaponWheelWidget_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UWeaponWheelWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UWeaponWheelWidget::execChangeColorOnHover)
	{
		P_GET_UBOOL(Z_Param_bIsHovered);
		P_GET_OBJECT(UButton,Z_Param_button);
		P_GET_OBJECT(UImage,Z_Param_image);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeColorOnHover(Z_Param_bIsHovered,Z_Param_button,Z_Param_image);
		P_NATIVE_END;
	}
	void UWeaponWheelWidget::StaticRegisterNativesUWeaponWheelWidget()
	{
		UClass* Class = UWeaponWheelWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeColorOnHover", &UWeaponWheelWidget::execChangeColorOnHover },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics
	{
		struct WeaponWheelWidget_eventChangeColorOnHover_Parms
		{
			bool bIsHovered;
			UButton* button;
			UImage* image;
		};
		static void NewProp_bIsHovered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_bIsHovered_SetBit(void* Obj)
	{
		((WeaponWheelWidget_eventChangeColorOnHover_Parms*)Obj)->bIsHovered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_bIsHovered = { "bIsHovered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponWheelWidget_eventChangeColorOnHover_Parms), &Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_bIsHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponWheelWidget_eventChangeColorOnHover_Parms, button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_image_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponWheelWidget_eventChangeColorOnHover_Parms, image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_image_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_bIsHovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::NewProp_image,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponWheelWidget, nullptr, "ChangeColorOnHover", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::WeaponWheelWidget_eventChangeColorOnHover_Parms), Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponWheelWidget);
	UClass* Z_Construct_UClass_UWeaponWheelWidget_NoRegister()
	{
		return UWeaponWheelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponWheelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopLeftButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopLeftButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopRightButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopRightButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomLeftButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomLeftButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomRightButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomRightButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopLeftImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopLeftImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopRightImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopRightImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomLeftImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomLeftImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomRightImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomRightImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Appear_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Appear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSlowDown_MetaData[];
#endif
		static void NewProp_bUseSlowDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSlowDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowDownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowDownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageHoverColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageHoverColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponWheelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponWheelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponWheelWidget_ChangeColorOnHover, "ChangeColorOnHover" }, // 4210679652
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/WeaponWheelWidget.h" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_CenterButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "Comment", "//\n// Buttons\n//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
		{ "ToolTip", "Buttons" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_CenterButton = { "CenterButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, CenterButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_CenterButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_CenterButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopButton = { "TopButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, TopButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopLeftButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopLeftButton = { "TopLeftButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, TopLeftButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopLeftButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopLeftButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopRightButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopRightButton = { "TopRightButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, TopRightButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopRightButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopRightButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_LeftButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_LeftButton = { "LeftButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, LeftButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_LeftButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_LeftButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_RightButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_RightButton = { "RightButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, RightButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_RightButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_RightButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomLeftButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomLeftButton = { "BottomLeftButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, BottomLeftButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomLeftButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomLeftButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomRightButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomRightButton = { "BottomRightButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, BottomRightButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomRightButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomRightButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomButton = { "BottomButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, BottomButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_CenterImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "Comment", "//\n// Images\n//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
		{ "ToolTip", "Images" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_CenterImage = { "CenterImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, CenterImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_CenterImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_CenterImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopImage = { "TopImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, TopImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopLeftImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopLeftImage = { "TopLeftImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, TopLeftImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopLeftImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopLeftImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopRightImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopRightImage = { "TopRightImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, TopRightImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopRightImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopRightImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_LeftImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_LeftImage = { "LeftImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, LeftImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_LeftImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_LeftImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_RightImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_RightImage = { "RightImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, RightImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_RightImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_RightImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomLeftImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomLeftImage = { "BottomLeftImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, BottomLeftImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomLeftImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomLeftImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomRightImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomRightImage = { "BottomRightImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, BottomRightImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomRightImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomRightImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WeaponWheelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomImage = { "BottomImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, BottomImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_Appear_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Comment", "//\n// Animations\n//\n" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
		{ "ToolTip", "Animations" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_Appear = { "Appear", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, Appear), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_Appear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_Appear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_bUseSlowDown_MetaData[] = {
		{ "Category", "Time Dilation" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
		{ "ToolTip", "Check if time should slow down while the screen is up." },
	};
#endif
	void Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_bUseSlowDown_SetBit(void* Obj)
	{
		((UWeaponWheelWidget*)Obj)->bUseSlowDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_bUseSlowDown = { "bUseSlowDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponWheelWidget), &Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_bUseSlowDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_bUseSlowDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_bUseSlowDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_SlowDownTime_MetaData[] = {
		{ "Category", "Time Dilation" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
		{ "ToolTip", "Amount that time slows down while the screen is up." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_SlowDownTime = { "SlowDownTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, SlowDownTime), METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_SlowDownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_SlowDownTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_ImageHoverColor_MetaData[] = {
		{ "Category", "Coloration" },
		{ "ModuleRelativePath", "HUD/WeaponWheelWidget.h" },
		{ "ToolTip", "Color of an image when hovered over." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_ImageHoverColor = { "ImageHoverColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponWheelWidget, ImageHoverColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_ImageHoverColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_ImageHoverColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponWheelWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_CenterButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopLeftButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopRightButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_LeftButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_RightButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomLeftButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomRightButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_CenterImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopLeftImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_TopRightImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_LeftImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_RightImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomLeftImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomRightImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_BottomImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_Appear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_bUseSlowDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_SlowDownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponWheelWidget_Statics::NewProp_ImageHoverColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponWheelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponWheelWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponWheelWidget_Statics::ClassParams = {
		&UWeaponWheelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponWheelWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponWheelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponWheelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponWheelWidget()
	{
		if (!Z_Registration_Info_UClass_UWeaponWheelWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponWheelWidget.OuterSingleton, Z_Construct_UClass_UWeaponWheelWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponWheelWidget.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UWeaponWheelWidget>()
	{
		return UWeaponWheelWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponWheelWidget);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_WeaponWheelWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_WeaponWheelWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponWheelWidget, UWeaponWheelWidget::StaticClass, TEXT("UWeaponWheelWidget"), &Z_Registration_Info_UClass_UWeaponWheelWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponWheelWidget), 764983953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_WeaponWheelWidget_h_636537239(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_WeaponWheelWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_HUD_WeaponWheelWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
