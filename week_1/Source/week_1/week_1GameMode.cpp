// Copyright Epic Games, Inc. All Rights Reserved.

#include "week_1GameMode.h"
#include "week_1Character.h"
#include "UObject/ConstructorHelpers.h"

Aweek_1GameMode::Aweek_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
