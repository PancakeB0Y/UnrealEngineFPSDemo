// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_FPS_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define UE_FPS_FPSCharacter_generated_h

#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFire_Implementation); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, AFPSCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSCharacter*>(this); }


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPSCharacter(AFPSCharacter&&); \
	AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter) \
	NO_API virtual ~AFPSCharacter();


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_15_PROLOG
#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_FPS_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
