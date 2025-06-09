// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/BTService_IsPlayerInShootRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_IsPlayerInShootRange() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
UE_FPS_API UClass* Z_Construct_UClass_UBTService_IsPlayerInShootRange();
UE_FPS_API UClass* Z_Construct_UClass_UBTService_IsPlayerInShootRange_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Class UBTService_IsPlayerInShootRange
void UBTService_IsPlayerInShootRange::StaticRegisterNativesUBTService_IsPlayerInShootRange()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_IsPlayerInShootRange);
UClass* Z_Construct_UClass_UBTService_IsPlayerInShootRange_NoRegister()
{
	return UBTService_IsPlayerInShootRange::StaticClass();
}
struct Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_IsPlayerInShootRange.h" },
		{ "ModuleRelativePath", "BTService_IsPlayerInShootRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BTService_IsPlayerInShootRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_IsPlayerInShootRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::NewProp_ShootRange = { "ShootRange", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_IsPlayerInShootRange, ShootRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootRange_MetaData), NewProp_ShootRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::NewProp_ShootRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::ClassParams = {
	&UBTService_IsPlayerInShootRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_IsPlayerInShootRange()
{
	if (!Z_Registration_Info_UClass_UBTService_IsPlayerInShootRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_IsPlayerInShootRange.OuterSingleton, Z_Construct_UClass_UBTService_IsPlayerInShootRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_IsPlayerInShootRange.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<UBTService_IsPlayerInShootRange>()
{
	return UBTService_IsPlayerInShootRange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_IsPlayerInShootRange);
UBTService_IsPlayerInShootRange::~UBTService_IsPlayerInShootRange() {}
// End Class UBTService_IsPlayerInShootRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTService_IsPlayerInShootRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_IsPlayerInShootRange, UBTService_IsPlayerInShootRange::StaticClass, TEXT("UBTService_IsPlayerInShootRange"), &Z_Registration_Info_UClass_UBTService_IsPlayerInShootRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_IsPlayerInShootRange), 4047609699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTService_IsPlayerInShootRange_h_1044517960(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTService_IsPlayerInShootRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTService_IsPlayerInShootRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
