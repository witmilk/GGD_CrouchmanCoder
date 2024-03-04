// Copyright Epic Games, Inc. All Rights Reserved.
// test comment FIXED
using UnrealBuildTool;
using System.Collections.Generic;

public class CrouchManCoderTarget : TargetRules
{
	public CrouchManCoderTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_3;
		ExtraModuleNames.Add("CrouchManCoder");
	}
}
