// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GunBallCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GUNBALL_GunBallCharacter_generated_h
#error "GunBallCharacter.generated.h already included, missing '#pragma once' in GunBallCharacter.h"
#endif
#define GUNBALL_GunBallCharacter_generated_h

#define FID_GunBall_Source_GunBall_GunBallCharacter_h_22_SPARSE_DATA
#define FID_GunBall_Source_GunBall_GunBallCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GunBall_Source_GunBall_GunBallCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GunBall_Source_GunBall_GunBallCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_GunBall_Source_GunBall_GunBallCharacter_h_22_ACCESSORS
#define FID_GunBall_Source_GunBall_GunBallCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunBallCharacter(); \
	friend struct Z_Construct_UClass_AGunBallCharacter_Statics; \
public: \
	DECLARE_CLASS(AGunBallCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunBall"), NO_API) \
	DECLARE_SERIALIZER(AGunBallCharacter)


#define FID_GunBall_Source_GunBall_GunBallCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunBallCharacter(AGunBallCharacter&&); \
	NO_API AGunBallCharacter(const AGunBallCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunBallCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunBallCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunBallCharacter) \
	NO_API virtual ~AGunBallCharacter();


#define FID_GunBall_Source_GunBall_GunBallCharacter_h_19_PROLOG
#define FID_GunBall_Source_GunBall_GunBallCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GunBall_Source_GunBall_GunBallCharacter_h_22_SPARSE_DATA \
	FID_GunBall_Source_GunBall_GunBallCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GunBall_Source_GunBall_GunBallCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GunBall_Source_GunBall_GunBallCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GunBall_Source_GunBall_GunBallCharacter_h_22_ACCESSORS \
	FID_GunBall_Source_GunBall_GunBallCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_GunBall_Source_GunBall_GunBallCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNBALL_API UClass* StaticClass<class AGunBallCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GunBall_Source_GunBall_GunBallCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
