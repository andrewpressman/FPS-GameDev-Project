// Copyright Epic Games, Inc. All Rights Reserved.

#include "fpsGameGameMode.h"
#include "fpsGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfpsGameGameMode::AfpsGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
