// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderProjectGameMode.h"
#include "ShaderProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderProjectGameMode::AShaderProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
