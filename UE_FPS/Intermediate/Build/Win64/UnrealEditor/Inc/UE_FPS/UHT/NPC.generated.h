// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_FPS_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define UE_FPS_NPC_generated_h

#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, AFPSCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_FPS"), NO_API) \
	DECLARE_SERIALIZER(ANPC) \
	virtual UObject* _getUObject() const override { return const_cast<ANPC*>(this); }


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANPC(ANPC&&); \
	ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC) \
	NO_API virtual ~ANPC();


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h_13_PROLOG
#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h_16_INCLASS_NO_PURE_DECLS \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_FPS_API UClass* StaticClass<class ANPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
