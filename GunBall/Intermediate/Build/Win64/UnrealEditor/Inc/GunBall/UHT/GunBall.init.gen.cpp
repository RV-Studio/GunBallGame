// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunBall_init() {}
	GUNBALL_API UFunction* Z_Construct_UDelegateFunction_GunBall_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GunBall;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GunBall()
	{
		if (!Z_Registration_Info_UPackage__Script_GunBall.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GunBall_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GunBall",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x17341CE9,
				0x1ED1FCDD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GunBall.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GunBall.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GunBall(Z_Construct_UPackage__Script_GunBall, TEXT("/Script/GunBall"), Z_Registration_Info_UPackage__Script_GunBall, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x17341CE9, 0x1ED1FCDD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
