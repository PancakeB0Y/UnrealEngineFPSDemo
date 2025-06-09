// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/FPSCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UE_FPS_API UClass* Z_Construct_UClass_AFPSCharacterBase();
UE_FPS_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Class AFPSCharacterBase
void AFPSCharacterBase::StaticRegisterNativesAFPSCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSCharacterBase);
UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister()
{
	return AFPSCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AFPSCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSCharacterBase.h" },
		{ "ModuleRelativePath", "FPSCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacterBase, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponent_MetaData), NewProp_WidgetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_WidgetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacterBase_Statics::ClassParams = {
	&AFPSCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFPSCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSCharacterBase()
{
	if (!Z_Registration_Info_UClass_AFPSCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCharacterBase.OuterSingleton, Z_Construct_UClass_AFPSCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSCharacterBase.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<AFPSCharacterBase>()
{
	return AFPSCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacterBase);
AFPSCharacterBase::~AFPSCharacterBase() {}
// End Class AFPSCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCharacterBase, AFPSCharacterBase::StaticClass, TEXT("AFPSCharacterBase"), &Z_Registration_Info_UClass_AFPSCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCharacterBase), 382757309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacterBase_h_487629856(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
