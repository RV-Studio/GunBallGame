// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunBall/GunBallGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunBallGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GUNBALL_API UClass* Z_Construct_UClass_AGunBallGameMode();
	GUNBALL_API UClass* Z_Construct_UClass_AGunBallGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GunBall();
// End Cross Module References
	void AGunBallGameMode::StaticRegisterNativesAGunBallGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGunBallGameMode);
	UClass* Z_Construct_UClass_AGunBallGameMode_NoRegister()
	{
		return AGunBallGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGunBallGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunBallGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GunBall,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGunBallGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunBallGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GunBallGameMode.h" },
		{ "ModuleRelativePath", "GunBallGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunBallGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunBallGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGunBallGameMode_Statics::ClassParams = {
		&AGunBallGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGunBallGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGunBallGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGunBallGameMode()
	{
		if (!Z_Registration_Info_UClass_AGunBallGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGunBallGameMode.OuterSingleton, Z_Construct_UClass_AGunBallGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGunBallGameMode.OuterSingleton;
	}
	template<> GUNBALL_API UClass* StaticClass<AGunBallGameMode>()
	{
		return AGunBallGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunBallGameMode);
	AGunBallGameMode::~AGunBallGameMode() {}
	struct Z_CompiledInDeferFile_FID_GunBall_Source_GunBall_GunBallGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GunBall_Source_GunBall_GunBallGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGunBallGameMode, AGunBallGameMode::StaticClass, TEXT("AGunBallGameMode"), &Z_Registration_Info_UClass_AGunBallGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGunBallGameMode), 3587317074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GunBall_Source_GunBall_GunBallGameMode_h_3773095097(TEXT("/Script/GunBall"),
		Z_CompiledInDeferFile_FID_GunBall_Source_GunBall_GunBallGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GunBall_Source_GunBall_GunBallGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
