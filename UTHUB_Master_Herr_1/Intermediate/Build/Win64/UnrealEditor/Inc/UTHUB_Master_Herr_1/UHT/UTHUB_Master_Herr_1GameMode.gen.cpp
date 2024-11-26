// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_Master_Herr_1/UTHUB_Master_Herr_1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTHUB_Master_Herr_1GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_UTHUB_Master_Herr_1();
UTHUB_MASTER_HERR_1_API UClass* Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode();
UTHUB_MASTER_HERR_1_API UClass* Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode_NoRegister();
// End Cross Module References

// Begin Class AUTHUB_Master_Herr_1GameMode
void AUTHUB_Master_Herr_1GameMode::StaticRegisterNativesAUTHUB_Master_Herr_1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUTHUB_Master_Herr_1GameMode);
UClass* Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode_NoRegister()
{
	return AUTHUB_Master_Herr_1GameMode::StaticClass();
}
struct Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UTHUB_Master_Herr_1GameMode.h" },
		{ "ModuleRelativePath", "UTHUB_Master_Herr_1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUTHUB_Master_Herr_1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_Master_Herr_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode_Statics::ClassParams = {
	&AUTHUB_Master_Herr_1GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode()
{
	if (!Z_Registration_Info_UClass_AUTHUB_Master_Herr_1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUTHUB_Master_Herr_1GameMode.OuterSingleton, Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUTHUB_Master_Herr_1GameMode.OuterSingleton;
}
template<> UTHUB_MASTER_HERR_1_API UClass* StaticClass<AUTHUB_Master_Herr_1GameMode>()
{
	return AUTHUB_Master_Herr_1GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUTHUB_Master_Herr_1GameMode);
AUTHUB_Master_Herr_1GameMode::~AUTHUB_Master_Herr_1GameMode() {}
// End Class AUTHUB_Master_Herr_1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UTHUB_Master_Herr_1_Source_UTHUB_Master_Herr_1_UTHUB_Master_Herr_1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUTHUB_Master_Herr_1GameMode, AUTHUB_Master_Herr_1GameMode::StaticClass, TEXT("AUTHUB_Master_Herr_1GameMode"), &Z_Registration_Info_UClass_AUTHUB_Master_Herr_1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUTHUB_Master_Herr_1GameMode), 3224182802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UTHUB_Master_Herr_1_Source_UTHUB_Master_Herr_1_UTHUB_Master_Herr_1GameMode_h_2932227335(TEXT("/Script/UTHUB_Master_Herr_1"),
	Z_CompiledInDeferFile_FID_UTHUB_Master_Herr_1_Source_UTHUB_Master_Herr_1_UTHUB_Master_Herr_1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UTHUB_Master_Herr_1_Source_UTHUB_Master_Herr_1_UTHUB_Master_Herr_1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
