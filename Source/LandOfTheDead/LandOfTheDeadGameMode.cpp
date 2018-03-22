// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "LandOfTheDead.h"
#include "LandOfTheDeadGameMode.h"
#include "LandOfTheDeadHUD.h"
#include "LandOfTheDeadCharacter.h"

ALandOfTheDeadGameMode::ALandOfTheDeadGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALandOfTheDeadHUD::StaticClass();
}
