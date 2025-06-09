// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC_AIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef UE_FPS_NPC_AIController_generated_h
#error "NPC_AIController.generated.h already included, missing '#pragma once' in NPC_AIController.h"
#endif
#define UE_FPS_NPC_AIController_generated_h

#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetDetected);


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC_AIController(); \
	friend struct Z_Construct_UClass_ANPC_AIController_Statics; \
public: \
	DECLARE_CLASS(ANPC_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_FPS"), NO_API) \
	DECLARE_SERIALIZER(ANPC_AIController)


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANPC_AIController(ANPC_AIController&&); \
	ANPC_AIController(const ANPC_AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_AIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC_AIController) \
	NO_API virtual ~ANPC_AIController();


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_13_PROLOG
#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_FPS_API UClass* StaticClass<class ANPC_AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
