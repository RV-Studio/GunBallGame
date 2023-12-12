// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunBall/GunBallPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunBallPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GUNBALL_API UClass* Z_Construct_UClass_AGunBallPlayerController();
	GUNBALL_API UClass* Z_Construct_UClass_AGunBallPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GunBall();
// End Cross Module References
	void AGunBallPlayerController::StaticRegisterNativesAGunBallPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGunBallPlayerController);
	UClass* Z_Construct_UClass_AGunBallPlayerController_NoRegister()
	{
		return AGunBallPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGunBallPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunBallPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GunBall,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGunBallPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunBallPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GunBallPlayerController.h" },
		{ "ModuleRelativePath", "GunBallPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunBallPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "GunBallPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunBallPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGunBallPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGunBallPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AGunBallPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunBallPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunBallPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunBallPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunBallPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGunBallPlayerController_Statics::ClassParams = {
		&AGunBallPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGunBallPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunBallPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGunBallPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGunBallPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGunBallPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGunBallPlayerController()
	{
		if (!Z_Registration_Info_UClass_AGunBallPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGunBallPlayerController.OuterSingleton, Z_Construct_UClass_AGunBallPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGunBallPlayerController.OuterSingleton;
	}
	template<> GUNBALL_API UClass* StaticClass<AGunBallPlayerController>()
	{
		return AGunBallPlayerController::StaticClass();
	}
	AGunBallPlayerController::AGunBallPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunBallPlayerController);
	AGunBallPlayerController::~AGunBallPlayerController() {}
	struct Z_CompiledInDeferFile_FID_GunBall_Source_GunBall_GunBallPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GunBall_Source_GunBall_GunBallPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGunBallPlayerController, AGunBallPlayerController::StaticClass, TEXT("AGunBallPlayerController"), &Z_Registration_Info_UClass_AGunBallPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGunBallPlayerController), 199878596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GunBall_Source_GunBall_GunBallPlayerController_h_1308177323(TEXT("/Script/GunBall"),
		Z_CompiledInDeferFile_FID_GunBall_Source_GunBall_GunBallPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GunBall_Source_GunBall_GunBallPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
