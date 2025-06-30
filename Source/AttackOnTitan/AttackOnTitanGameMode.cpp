// Copyright Epic Games, Inc. All Rights Reserved.

#include "AttackOnTitanGameMode.h"
#include "AttackOnTitanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAttackOnTitanGameMode::AAttackOnTitanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
