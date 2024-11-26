// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolsPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ToolsPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ToolsPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ToolsPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ToolsPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBB147D9D,
				0x0A10EDE3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ToolsPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ToolsPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ToolsPlugin(Z_Construct_UPackage__Script_ToolsPlugin, TEXT("/Script/ToolsPlugin"), Z_Registration_Info_UPackage__Script_ToolsPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBB147D9D, 0x0A10EDE3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
