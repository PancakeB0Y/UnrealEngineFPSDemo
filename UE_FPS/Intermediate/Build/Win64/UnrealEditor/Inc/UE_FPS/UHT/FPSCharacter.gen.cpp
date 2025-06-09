// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/FPSCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UE_FPS_API UClass* Z_Construct_UClass_AFPSCharacter();
UE_FPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
UE_FPS_API UClass* Z_Construct_UClass_AFPSCharacterBase();
UE_FPS_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
UE_FPS_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Class AFPSCharacter Function Fire_Implementation
struct Z_Construct_UFunction_AFPSCharacter_Fire_Implementation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function that handles firing projectiles.\n" },
#endif
		{ "ModuleRelativePath", "FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that handles firing projectiles." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Fire_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Fire_Implementation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Fire_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_Fire_Implementation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFPSCharacter_Fire_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Fire_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execFire_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire_Implementation();
	P_NATIVE_END;
}
// End Class AFPSCharacter Function Fire_Implementation

// Begin Class AFPSCharacter Function MoveForward
struct Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics
{
	struct FPSCharacter_eventMoveForward_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles input for moving forward and backward.\n" },
#endif
		{ "ModuleRelativePath", "FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles input for moving forward and backward." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventMoveForward_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FPSCharacter_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FPSCharacter_eventMoveForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execMoveForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveForward(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AFPSCharacter Function MoveForward

// Begin Class AFPSCharacter Function MoveRight
struct Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics
{
	struct FPSCharacter_eventMoveRight_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles input for moving right and left.\n" },
#endif
		{ "ModuleRelativePath", "FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles input for moving right and left." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventMoveRight_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FPSCharacter_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FPSCharacter_eventMoveRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execMoveRight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveRight(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AFPSCharacter Function MoveRight

// Begin Class AFPSCharacter Function StartJump
struct Z_Construct_UFunction_AFPSCharacter_StartJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets jump flag when key is pressed.\n" },
#endif
		{ "ModuleRelativePath", "FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets jump flag when key is pressed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "StartJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execStartJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump();
	P_NATIVE_END;
}
// End Class AFPSCharacter Function StartJump

// Begin Class AFPSCharacter Function StopJump
struct Z_Construct_UFunction_AFPSCharacter_StopJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears jump flag when key is released.\n" },
#endif
		{ "ModuleRelativePath", "FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears jump flag when key is released." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "StopJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_StopJump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execStopJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump();
	P_NATIVE_END;
}
// End Class AFPSCharacter Function StopJump

// Begin Class AFPSCharacter
void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
{
	UClass* Class = AFPSCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fire_Implementation", &AFPSCharacter::execFire_Implementation },
		{ "MoveForward", &AFPSCharacter::execMoveForward },
		{ "MoveRight", &AFPSCharacter::execMoveRight },
		{ "StartJump", &AFPSCharacter::execStartJump },
		{ "StopJump", &AFPSCharacter::execStopJump },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSCharacter);
UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
{
	return AFPSCharacter::StaticClass();
}
struct Z_Construct_UClass_AFPSCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSCharacter.h" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn.\n" },
#endif
		{ "ModuleRelativePath", "FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSCameraComponent_MetaData[] = {
		{ "Category", "FPSCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FPS camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FPS camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSMesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First-person mesh (arms), visible only to the owning player.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First-person mesh (arms), visible only to the owning player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gun muzzle offset from the camera location.\n" },
#endif
		{ "ModuleRelativePath", "FPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gun muzzle offset from the camera location." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_Fire_Implementation, "Fire_Implementation" }, // 1673940716
		{ &Z_Construct_UFunction_AFPSCharacter_MoveForward, "MoveForward" }, // 789986144
		{ &Z_Construct_UFunction_AFPSCharacter_MoveRight, "MoveRight" }, // 1724165180
		{ &Z_Construct_UFunction_AFPSCharacter_StartJump, "StartJump" }, // 1392660954
		{ &Z_Construct_UFunction_AFPSCharacter_StopJump, "StopJump" }, // 1894565465
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFPSProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSCameraComponent = { "FPSCameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, FPSCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSCameraComponent_MetaData), NewProp_FPSCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh = { "FPSMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, FPSMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSMesh_MetaData), NewProp_FPSMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleOffset_MetaData), NewProp_MuzzleOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MuzzleOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFPSCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFPSCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(AFPSCharacter, ICombatInterface), false },  // 1775630346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
	&AFPSCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPSCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSCharacter()
{
	if (!Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<AFPSCharacter>()
{
	return AFPSCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
AFPSCharacter::~AFPSCharacter() {}
// End Class AFPSCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCharacter, AFPSCharacter::StaticClass, TEXT("AFPSCharacter"), &Z_Registration_Info_UClass_AFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCharacter), 2314648156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_3033063349(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
