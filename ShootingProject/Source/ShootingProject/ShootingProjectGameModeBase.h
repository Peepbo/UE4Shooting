// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShootingProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGPROJECT_API AShootingProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void StartPlay() override;
};
