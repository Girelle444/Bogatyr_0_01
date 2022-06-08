// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Bogatyr_0_01 : ModuleRules
{
	public Bogatyr_0_01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
