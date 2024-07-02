// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TALE4GAME_Shooter_generated_h
#error "Shooter.generated.h already included, missing '#pragma once' in Shooter.h"
#endif
#define TALE4GAME_Shooter_generated_h

#define FID_Tale4Game_Source_Tale4Game_Shooter_h_12_SPARSE_DATA
#define FID_Tale4Game_Source_Tale4Game_Shooter_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Tale4Game_Source_Tale4Game_Shooter_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Tale4Game_Source_Tale4Game_Shooter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSayHi);


#define FID_Tale4Game_Source_Tale4Game_Shooter_h_12_ACCESSORS
#define FID_Tale4Game_Source_Tale4Game_Shooter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooter(); \
	friend struct Z_Construct_UClass_AShooter_Statics; \
public: \
	DECLARE_CLASS(AShooter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tale4Game"), NO_API) \
	DECLARE_SERIALIZER(AShooter)


#define FID_Tale4Game_Source_Tale4Game_Shooter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter(AShooter&&); \
	NO_API AShooter(const AShooter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooter) \
	NO_API virtual ~AShooter();


#define FID_Tale4Game_Source_Tale4Game_Shooter_h_9_PROLOG
#define FID_Tale4Game_Source_Tale4Game_Shooter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tale4Game_Source_Tale4Game_Shooter_h_12_SPARSE_DATA \
	FID_Tale4Game_Source_Tale4Game_Shooter_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Tale4Game_Source_Tale4Game_Shooter_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Tale4Game_Source_Tale4Game_Shooter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tale4Game_Source_Tale4Game_Shooter_h_12_ACCESSORS \
	FID_Tale4Game_Source_Tale4Game_Shooter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Tale4Game_Source_Tale4Game_Shooter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TALE4GAME_API UClass* StaticClass<class AShooter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tale4Game_Source_Tale4Game_Shooter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
