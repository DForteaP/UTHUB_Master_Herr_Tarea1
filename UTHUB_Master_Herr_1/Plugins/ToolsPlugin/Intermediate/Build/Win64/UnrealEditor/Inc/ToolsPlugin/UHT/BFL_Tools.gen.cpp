// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsPlugin/Public/BFL_Tools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBFL_Tools() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
TOOLSPLUGIN_API UClass* Z_Construct_UClass_UBFL_Tools();
TOOLSPLUGIN_API UClass* Z_Construct_UClass_UBFL_Tools_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsPlugin();
// End Cross Module References

// Begin Class UBFL_Tools Function GetExportAssetDir
struct Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics
{
	struct BFL_Tools_eventGetExportAssetDir_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Public/BFL_Tools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_Tools_eventGetExportAssetDir_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBFL_Tools, nullptr, "GetExportAssetDir", nullptr, nullptr, Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::BFL_Tools_eventGetExportAssetDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::BFL_Tools_eventGetExportAssetDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL_Tools::execGetExportAssetDir)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UBFL_Tools::GetExportAssetDir();
	P_NATIVE_END;
}
// End Class UBFL_Tools Function GetExportAssetDir

// Begin Class UBFL_Tools Function ListStaticMeshActorsInLevel
struct Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics
{
	struct BFL_Tools_eventListStaticMeshActorsInLevel_Parms
	{
		TArray<UStaticMesh*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Public/BFL_Tools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_Tools_eventListStaticMeshActorsInLevel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBFL_Tools, nullptr, "ListStaticMeshActorsInLevel", nullptr, nullptr, Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::BFL_Tools_eventListStaticMeshActorsInLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::BFL_Tools_eventListStaticMeshActorsInLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL_Tools::execListStaticMeshActorsInLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UStaticMesh*>*)Z_Param__Result=UBFL_Tools::ListStaticMeshActorsInLevel();
	P_NATIVE_END;
}
// End Class UBFL_Tools Function ListStaticMeshActorsInLevel

// Begin Class UBFL_Tools
void UBFL_Tools::StaticRegisterNativesUBFL_Tools()
{
	UClass* Class = UBFL_Tools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetExportAssetDir", &UBFL_Tools::execGetExportAssetDir },
		{ "ListStaticMeshActorsInLevel", &UBFL_Tools::execListStaticMeshActorsInLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBFL_Tools);
UClass* Z_Construct_UClass_UBFL_Tools_NoRegister()
{
	return UBFL_Tools::StaticClass();
}
struct Z_Construct_UClass_UBFL_Tools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BFL_Tools.h" },
		{ "ModuleRelativePath", "Public/BFL_Tools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBFL_Tools_GetExportAssetDir, "GetExportAssetDir" }, // 1047390845
		{ &Z_Construct_UFunction_UBFL_Tools_ListStaticMeshActorsInLevel, "ListStaticMeshActorsInLevel" }, // 1679834328
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBFL_Tools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBFL_Tools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBFL_Tools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBFL_Tools_Statics::ClassParams = {
	&UBFL_Tools::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBFL_Tools_Statics::Class_MetaDataParams), Z_Construct_UClass_UBFL_Tools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBFL_Tools()
{
	if (!Z_Registration_Info_UClass_UBFL_Tools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBFL_Tools.OuterSingleton, Z_Construct_UClass_UBFL_Tools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBFL_Tools.OuterSingleton;
}
template<> TOOLSPLUGIN_API UClass* StaticClass<UBFL_Tools>()
{
	return UBFL_Tools::StaticClass();
}
UBFL_Tools::UBFL_Tools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBFL_Tools);
UBFL_Tools::~UBFL_Tools() {}
// End Class UBFL_Tools

// Begin Registration
struct Z_CompiledInDeferFile_FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBFL_Tools, UBFL_Tools::StaticClass, TEXT("UBFL_Tools"), &Z_Registration_Info_UClass_UBFL_Tools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBFL_Tools), 1252383238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_475577131(TEXT("/Script/ToolsPlugin"),
	Z_CompiledInDeferFile_FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
