// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/HealthBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthBarWidget() {}

// Begin Cross Module References
UE_FPS_API UClass* Z_Construct_UClass_UHealthBarWidget();
UE_FPS_API UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Class UHealthBarWidget
void UHealthBarWidget::StaticRegisterNativesUHealthBarWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthBarWidget);
UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister()
{
	return UHealthBarWidget::StaticClass();
}
struct Z_Construct_UClass_UHealthBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HealthBarWidget.h" },
		{ "ModuleRelativePath", "HealthBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "HealthBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HealthBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthValue = { "HealthValue", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthBarWidget, HealthValue), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthValue_MetaData), NewProp_HealthValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthBarWidget_Statics::ClassParams = {
	&UHealthBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHealthBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthBarWidget()
{
	if (!Z_Registration_Info_UClass_UHealthBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthBarWidget.OuterSingleton, Z_Construct_UClass_UHealthBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthBarWidget.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<UHealthBarWidget>()
{
	return UHealthBarWidget::StaticClass();
}
UHealthBarWidget::UHealthBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthBarWidget);
UHealthBarWidget::~UHealthBarWidget() {}
// End Class UHealthBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_HealthBarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthBarWidget, UHealthBarWidget::StaticClass, TEXT("UHealthBarWidget"), &Z_Registration_Info_UClass_UHealthBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthBarWidget), 436581875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_HealthBarWidget_h_779470509(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_HealthBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_HealthBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
