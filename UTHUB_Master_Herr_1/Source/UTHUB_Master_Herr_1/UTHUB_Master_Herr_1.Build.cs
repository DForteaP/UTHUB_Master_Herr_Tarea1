// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UTHUB_Master_Herr_1 : ModuleRules
{
	public UTHUB_Master_Herr_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
