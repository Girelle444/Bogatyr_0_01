// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bogatyr_0_01GameMode.h"
#include "Bogatyr_0_01Character.h"
#include "UObject/ConstructorHelpers.h"

ABogatyr_0_01GameMode::ABogatyr_0_01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
