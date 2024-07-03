// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tale4Game : ModuleRules
{
	public Tale4Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
