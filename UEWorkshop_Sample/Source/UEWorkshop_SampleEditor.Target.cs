// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UEWorkshop_SampleEditorTarget : TargetRules
{
	public UEWorkshop_SampleEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("UEWorkshop_Sample");
	}
}
