// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/UE_FPSGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_FPSGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UE_FPS_API UClass* Z_Construct_UClass_AUE_FPSGameModeBase();
UE_FPS_API UClass* Z_Construct_UClass_AUE_FPSGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Class AUE_FPSGameModeBase
void AUE_FPSGameModeBase::StaticRegisterNativesAUE_FPSGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE_FPSGameModeBase);
UClass* Z_Construct_UClass_AUE_FPSGameModeBase_NoRegister()
{
	return AUE_FPSGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AUE_FPSGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE_FPSGameModeBase.h" },
		{ "ModuleRelativePath", "UE_FPSGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE_FPSGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUE_FPSGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE_FPSGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE_FPSGameModeBase_Statics::ClassParams = {
	&AUE_FPSGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE_FPSGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE_FPSGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUE_FPSGameModeBase()
{
	if (!Z_Registration_Info_UClass_AUE_FPSGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE_FPSGameModeBase.OuterSingleton, Z_Construct_UClass_AUE_FPSGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUE_FPSGameModeBase.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<AUE_FPSGameModeBase>()
{
	return AUE_FPSGameModeBase::StaticClass();
}
AUE_FPSGameModeBase::AUE_FPSGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_FPSGameModeBase);
AUE_FPSGameModeBase::~AUE_FPSGameModeBase() {}
// End Class AUE_FPSGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_UE_FPSGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUE_FPSGameModeBase, AUE_FPSGameModeBase::StaticClass, TEXT("AUE_FPSGameModeBase"), &Z_Registration_Info_UClass_AUE_FPSGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE_FPSGameModeBase), 4245345014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_UE_FPSGameModeBase_h_120897888(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_UE_FPSGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_UE_FPSGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
