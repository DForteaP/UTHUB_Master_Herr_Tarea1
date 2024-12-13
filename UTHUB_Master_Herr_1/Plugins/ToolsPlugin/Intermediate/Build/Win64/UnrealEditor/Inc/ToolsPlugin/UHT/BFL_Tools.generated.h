// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BFL_Tools.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef TOOLSPLUGIN_BFL_Tools_generated_h
#error "BFL_Tools.generated.h already included, missing '#pragma once' in BFL_Tools.h"
#endif
#define TOOLSPLUGIN_BFL_Tools_generated_h

#define FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportListDependencies); \
	DECLARE_FUNCTION(execListDependencies); \
	DECLARE_FUNCTION(execGetExportAssetDir); \
	DECLARE_FUNCTION(execListStaticMeshActorsInLevel);


#define FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBFL_Tools(); \
	friend struct Z_Construct_UClass_UBFL_Tools_Statics; \
public: \
	DECLARE_CLASS(UBFL_Tools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBFL_Tools)


#define FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBFL_Tools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBFL_Tools(UBFL_Tools&&); \
	UBFL_Tools(const UBFL_Tools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBFL_Tools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBFL_Tools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBFL_Tools) \
	NO_API virtual ~UBFL_Tools();


#define FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_8_PROLOG
#define FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_11_INCLASS_NO_PURE_DECLS \
	FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLSPLUGIN_API UClass* StaticClass<class UBFL_Tools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UTHUB_Master_Herr_1_Plugins_ToolsPlugin_Source_ToolsPlugin_Public_BFL_Tools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
