// Copyright Epic Games, Inc. All Rights Reserved.

#include "BattleTank2GameMode.h"
#include "BattleTank2Character.h"
#include "UObject/ConstructorHelpers.h"

ABattleTank2GameMode::ABattleTank2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
