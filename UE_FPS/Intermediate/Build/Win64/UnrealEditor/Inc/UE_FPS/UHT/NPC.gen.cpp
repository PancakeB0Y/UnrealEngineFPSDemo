// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_FPS/NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UE_FPS_API UClass* Z_Construct_UClass_AFPSCharacterBase();
UE_FPS_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
UE_FPS_API UClass* Z_Construct_UClass_ANPC();
UE_FPS_API UClass* Z_Construct_UClass_ANPC_NoRegister();
UE_FPS_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_FPS();
// End Cross Module References

// Begin Class ANPC
void ANPC::StaticRegisterNativesANPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC);
UClass* Z_Construct_UClass_ANPC_NoRegister()
{
	return ANPC::StaticClass();
}
struct Z_Construct_UClass_ANPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC.h" },
		{ "ModuleRelativePath", "NPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gun muzzle offset from the camera location.\n" },
#endif
		{ "ModuleRelativePath", "NPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gun muzzle offset from the camera location." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How often the npc can fire\n" },
#endif
		{ "ModuleRelativePath", "NPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often the npc can fire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "NPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn.\n" },
#endif
		{ "ModuleRelativePath", "NPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tree;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleOffset_MetaData), NewProp_MuzzleOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC, Tree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tree_MetaData), NewProp_Tree_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFPSProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_MuzzleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_Tree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFPSCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_FPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANPC_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(ANPC, ICombatInterface), false },  // 1775630346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_Statics::ClassParams = {
	&ANPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANPC_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPC()
{
	if (!Z_Registration_Info_UClass_ANPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC.OuterSingleton, Z_Construct_UClass_ANPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPC.OuterSingleton;
}
template<> UE_FPS_API UClass* StaticClass<ANPC>()
{
	return ANPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC);
ANPC::~ANPC() {}
// End Class ANPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPC, ANPC::StaticClass, TEXT("ANPC"), &Z_Registration_Info_UClass_ANPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC), 4216232106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h_2887311740(TEXT("/Script/UE_FPS"),
	Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Year_2_UE_FPS_Source_UE_FPS_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
