// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/BBPlayerController.h"

#include "UI/BBChatInput.h"

void ABBPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	if (IsValid(ChatInputWidgetClass) == true)
	{
		ChatInputWidgetInstance = CreateWidget<UBBChatInput>(this, ChatInputWidgetClass);
		if (IsValid(ChatInputWidgetInstance) == true)
		{
			ChatInputWidgetInstance->AddToViewport();
		}
	}
}