// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Tale4GameMode.generated.h"

/**
 * 
 */
UCLASS()
class TALE4GAME_API ATale4GameMode : public AGameModeBase
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable)
	void SecondsToNormalTime(float input1);
	
};
