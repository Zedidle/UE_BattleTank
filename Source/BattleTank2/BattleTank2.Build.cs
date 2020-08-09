// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BattleTank2 : ModuleRules
{
	public BattleTank2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
