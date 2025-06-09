// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/FPSHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UE_FPS_API UClass* Z_Construct_UClass_AFPSHUD();
UE_FPS_API UClass* Z_Construct_UClass_AFPSHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Class AFPSHUD
void AFPSHUD::StaticRegisterNativesAFPSHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSHUD);
UClass* Z_Construct_UClass_AFPSHUD_NoRegister()
{
	return AFPSHUD::StaticClass();
}
struct Z_Construct_UClass_AFPSHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FPSHUD.h" },
		{ "ModuleRelativePath", "FPSHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "FPSHUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This will be drawn at the center of the screen.\n" },
#endif
		{ "ModuleRelativePath", "FPSHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will be drawn at the center of the screen." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairTexture_MetaData), NewProp_CrosshairTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSHUD_Statics::ClassParams = {
	&AFPSHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFPSHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSHUD()
{
	if (!Z_Registration_Info_UClass_AFPSHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSHUD.OuterSingleton, Z_Construct_UClass_AFPSHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSHUD.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<AFPSHUD>()
{
	return AFPSHUD::StaticClass();
}
AFPSHUD::AFPSHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSHUD);
AFPSHUD::~AFPSHUD() {}
// End Class AFPSHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSHUD, AFPSHUD::StaticClass, TEXT("AFPSHUD"), &Z_Registration_Info_UClass_AFPSHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSHUD), 193732896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSHUD_h_3286841393(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_FPSHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
