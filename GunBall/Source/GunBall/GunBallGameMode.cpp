// Copyright Epic Games, Inc. All Rights Reserved.

#include "GunBallGameMode.h"
#include "GunBallCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGunBallGameMode::AGunBallGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
