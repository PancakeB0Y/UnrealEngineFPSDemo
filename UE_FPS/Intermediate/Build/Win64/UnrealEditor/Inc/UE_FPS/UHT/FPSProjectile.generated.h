// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UE_FPS_FPSProjectile_generated_h
#error "FPSProjectile.generated.h already included, missing '#pragma once' in FPSProjectile.h"
#endif
#define UE_FPS_FPSProjectile_generated_h

#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectile(); \
	friend struct Z_Construct_UClass_AFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSProjectile)


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPSProjectile(AFPSProjectile&&); \
	AFPSProjectile(const AFPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectile) \
	NO_API virtual ~AFPSProjectile();


#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSProjectile_h_11_PROLOG
#define FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_FPS_API UClass* StaticClass<class AFPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
