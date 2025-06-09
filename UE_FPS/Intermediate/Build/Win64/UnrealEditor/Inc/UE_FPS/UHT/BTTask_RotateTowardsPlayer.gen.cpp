// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/BTTask_RotateTowardsPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RotateTowardsPlayer() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
UE_FPS_API UClass* Z_Construct_UClass_UBTTask_RotateTowardsPlayer();
UE_FPS_API UClass* Z_Construct_UClass_UBTTask_RotateTowardsPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Class UBTTask_RotateTowardsPlayer
void UBTTask_RotateTowardsPlayer::StaticRegisterNativesUBTTask_RotateTowardsPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RotateTowardsPlayer);
UClass* Z_Construct_UClass_UBTTask_RotateTowardsPlayer_NoRegister()
{
	return UBTTask_RotateTowardsPlayer::StaticClass();
}
struct Z_Construct_UClass_UBTTask_RotateTowardsPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_RotateTowardsPlayer.h" },
		{ "ModuleRelativePath", "BTTask_RotateTowardsPlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RotateTowardsPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_RotateTowardsPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateTowardsPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RotateTowardsPlayer_Statics::ClassParams = {
	&UBTTask_RotateTowardsPlayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateTowardsPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_RotateTowardsPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_RotateTowardsPlayer()
{
	if (!Z_Registration_Info_UClass_UBTTask_RotateTowardsPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RotateTowardsPlayer.OuterSingleton, Z_Construct_UClass_UBTTask_RotateTowardsPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_RotateTowardsPlayer.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<UBTTask_RotateTowardsPlayer>()
{
	return UBTTask_RotateTowardsPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RotateTowardsPlayer);
UBTTask_RotateTowardsPlayer::~UBTTask_RotateTowardsPlayer() {}
// End Class UBTTask_RotateTowardsPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTTask_RotateTowardsPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RotateTowardsPlayer, UBTTask_RotateTowardsPlayer::StaticClass, TEXT("UBTTask_RotateTowardsPlayer"), &Z_Registration_Info_UClass_UBTTask_RotateTowardsPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RotateTowardsPlayer), 804439384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTTask_RotateTowardsPlayer_h_2083002359(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTTask_RotateTowardsPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_BTTask_RotateTowardsPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
