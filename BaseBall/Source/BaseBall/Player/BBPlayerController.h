// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BBPlayerController.generated.h"

class UCXChatInput;
/**
 * 
 */
UCLASS()
class BASEBALL_API ABBPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBBChatInput> ChatInputWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UBBChatInput> ChatInputWidgetInstance;	
	
};
