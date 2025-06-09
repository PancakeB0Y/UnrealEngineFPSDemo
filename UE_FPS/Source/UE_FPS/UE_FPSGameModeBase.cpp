// Fill out your copyright notice in the Description page of Project Settings.


#include "UE_FPSGameModeBase.h"

void AUE_FPSGameModeBase::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);
}
