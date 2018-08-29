// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UEWorkshop_SampleGameMode.h"
#include "UEWorkshop_SampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEWorkshop_SampleGameMode::AUEWorkshop_SampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/DefaultAssets/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
