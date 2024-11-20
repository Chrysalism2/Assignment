// Copyright Epic Games, Inc. All Rights Reserved.

#include "Assignment1GameMode.h"
#include "Assignment1Character.h"
#include "UObject/ConstructorHelpers.h"

AAssignment1GameMode::AAssignment1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
