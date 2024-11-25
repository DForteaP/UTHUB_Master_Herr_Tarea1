// Copyright Epic Games, Inc. All Rights Reserved.

#include "UTHUB_Master_Herr_1GameMode.h"
#include "UTHUB_Master_Herr_1Character.h"
#include "UObject/ConstructorHelpers.h"

AUTHUB_Master_Herr_1GameMode::AUTHUB_Master_Herr_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
