// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/NPC_AIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_AIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UE_FPS_API UClass* Z_Construct_UClass_ANPC_AIController();
UE_FPS_API UClass* Z_Construct_UClass_ANPC_AIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Class ANPC_AIController Function OnTargetDetected
struct Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics
{
	struct NPC_AIController_eventOnTargetDetected_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPC_AIController_eventOnTargetDetected_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPC_AIController_eventOnTargetDetected_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stimulus_MetaData), NewProp_Stimulus_MetaData) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_AIController, nullptr, "OnTargetDetected", nullptr, nullptr, Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NPC_AIController_eventOnTargetDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NPC_AIController_eventOnTargetDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPC_AIController_OnTargetDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPC_AIController::execOnTargetDetected)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetDetected(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class ANPC_AIController Function OnTargetDetected

// Begin Class ANPC_AIController
void ANPC_AIController::StaticRegisterNativesANPC_AIController()
{
	UClass* Class = ANPC_AIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTargetDetected", &ANPC_AIController::execOnTargetDetected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC_AIController);
UClass* Z_Construct_UClass_ANPC_AIController_NoRegister()
{
	return ANPC_AIController::StaticClass();
}
struct Z_Construct_UClass_ANPC_AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NPC_AIController.h" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPC_AIController_OnTargetDetected, "OnTargetDetected" }, // 1584482709
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANPC_AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_AIController_Statics::ClassParams = {
	&ANPC_AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPC_AIController()
{
	if (!Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton, Z_Construct_UClass_ANPC_AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<ANPC_AIController>()
{
	return ANPC_AIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_AIController);
ANPC_AIController::~ANPC_AIController() {}
// End Class ANPC_AIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPC_AIController, ANPC_AIController::StaticClass, TEXT("ANPC_AIController"), &Z_Registration_Info_UClass_ANPC_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC_AIController), 871472163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_3488319674(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_AIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
