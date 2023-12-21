// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheElderQuestsGameMode.h"
#include "TheElderQuestsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheElderQuestsGameMode::ATheElderQuestsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
