// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToolsPlugin.h"

#include "BFL_Tools.h"
#include "EngineUtils.h"
#include "Engine/StaticMeshActor.h"

#define LOCTEXT_NAMESPACE "FToolsPluginModule"

void FToolsPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UBFL_Tools::ListDependencies();
}

void FToolsPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FToolsPluginModule, ToolsPlugin)