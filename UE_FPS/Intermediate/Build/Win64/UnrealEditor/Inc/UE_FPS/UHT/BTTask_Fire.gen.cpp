// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/BTTask_Fire.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Fire() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
UE_FPS_API UClass* Z_Construct_UClass_UBTTask_Fire();
UE_FPS_API UClass* Z_Construct_UClass_UBTTask_Fire_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Class UBTTask_Fire
void UBTTask_Fire::StaticRegisterNativesUBTTask_Fire()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Fire);
UClass* Z_Construct_UClass_UBTTask_Fire_NoRegister()
{
	return UBTTask_Fire::StaticClass();
}
struct Z_Construct_UClass_UBTTask_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_Fire.h" },
		{ "ModuleRelativePath", "BTTask_Fire.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Fire>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_Fire_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Fire_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Fire_Statics::ClassParams = {
	&UBTTask_Fire::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Fire_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_Fire_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_Fire()
{
	if (!Z_Registration_Info_UClass_UBTTask_Fire.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Fire.OuterSingleton, Z_Construct_UClass_UBTTask_Fire_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_Fire.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<UBTTask_Fire>()
{
	return UBTTask_Fire::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Fire);
UBTTask_Fire::~UBTTask_Fire() {}
// End Class UBTTask_Fire

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTTask_Fire_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Fire, UBTTask_Fire::StaticClass, TEXT("UBTTask_Fire"), &Z_Registration_Info_UClass_UBTTask_Fire, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Fire), 2106411985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTTask_Fire_h_163166087(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTTask_Fire_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTTask_Fire_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
