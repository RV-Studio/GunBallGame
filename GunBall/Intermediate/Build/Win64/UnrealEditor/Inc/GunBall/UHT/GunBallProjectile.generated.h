// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GunBallProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GUNBALL_GunBallProjectile_generated_h
#error "GunBallProjectile.generated.h already included, missing '#pragma once' in GunBallProjectile.h"
#endif
#define GUNBALL_GunBallProjectile_generated_h

#define FID_GunBall_Source_GunBall_GunBallProjectile_h_15_SPARSE_DATA
#define FID_GunBall_Source_GunBall_GunBallProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GunBall_Source_GunBall_GunBallProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GunBall_Source_GunBall_GunBallProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_GunBall_Source_GunBall_GunBallProjectile_h_15_ACCESSORS
#define FID_GunBall_Source_GunBall_GunBallProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunBallProjectile(); \
	friend struct Z_Construct_UClass_AGunBallProjectile_Statics; \
public: \
	DECLARE_CLASS(AGunBallProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunBall"), NO_API) \
	DECLARE_SERIALIZER(AGunBallProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_GunBall_Source_GunBall_GunBallProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunBallProjectile(AGunBallProjectile&&); \
	NO_API AGunBallProjectile(const AGunBallProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunBallProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunBallProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunBallProjectile) \
	NO_API virtual ~AGunBallProjectile();


#define FID_GunBall_Source_GunBall_GunBallProjectile_h_12_PROLOG
#define FID_GunBall_Source_GunBall_GunBallProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GunBall_Source_GunBall_GunBallProjectile_h_15_SPARSE_DATA \
	FID_GunBall_Source_GunBall_GunBallProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GunBall_Source_GunBall_GunBallProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GunBall_Source_GunBall_GunBallProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GunBall_Source_GunBall_GunBallProjectile_h_15_ACCESSORS \
	FID_GunBall_Source_GunBall_GunBallProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_GunBall_Source_GunBall_GunBallProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNBALL_API UClass* StaticClass<class AGunBallProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GunBall_Source_GunBall_GunBallProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
