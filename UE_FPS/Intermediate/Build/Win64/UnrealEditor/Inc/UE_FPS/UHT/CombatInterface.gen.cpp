// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/CombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UE_FPS_API UClass* Z_Construct_UClass_UCombatInterface();
UE_FPS_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Interface UCombatInterface Function Fire
void ICombatInterface::Fire()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Fire instead.");
}
static FName NAME_UCombatInterface_Fire = FName(TEXT("Fire"));
void ICombatInterface::Execute_Fire(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_Fire);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		I->Fire_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatInterface_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatInterface_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatInterface Function Fire

// Begin Interface UCombatInterface
void UCombatInterface::StaticRegisterNativesUCombatInterface()
{
	UClass* Class = UCombatInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fire", &ICombatInterface::execFire },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatInterface);
UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
{
	return UCombatInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_Fire, "Fire" }, // 4071390572
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
	&UCombatInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatInterface()
{
	if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<UCombatInterface>()
{
	return UCombatInterface::StaticClass();
}
UCombatInterface::UCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
UCombatInterface::~UCombatInterface() {}
// End Interface UCombatInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_CombatInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 1775630346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_CombatInterface_h_3766469067(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_CombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_CombatInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
