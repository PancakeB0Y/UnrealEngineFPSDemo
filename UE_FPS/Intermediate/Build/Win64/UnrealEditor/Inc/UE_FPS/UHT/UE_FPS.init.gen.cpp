// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_FPS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE_FPS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE_FPS()
	{
		if (!Z_Registration_Info_UPackage__Script_UE_FPS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE_FPS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA4CE619C,
				0x4E33C7B7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE_FPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE_FPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE_FPS(Z_Construct_UPackage__Script_UE_FPS, TEXT("/Script/UE_FPS"), Z_Registration_Info_UPackage__Script_UE_FPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA4CE619C, 0x4E33C7B7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
