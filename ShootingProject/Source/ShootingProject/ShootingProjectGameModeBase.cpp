// Copyright Epic Games, Inc. All Rights Reserved.


#include "ShootingProjectGameModeBase.h"

void AShootingProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow,
			TEXT("Hello World, this is ShootingGameMode!"));
	}
}