// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE_FPSGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE_FPS_API AUE_FPSGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
};
