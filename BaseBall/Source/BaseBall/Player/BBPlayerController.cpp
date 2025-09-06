// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/BBPlayerController.h"

#include "UI/BBChatInput.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BaseBall.h"
#include "EngineUtils.h"

void ABBPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController() == false)
	{
		return;
	}
	
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

void ABBPlayerController::SetChatMessageString(const FString& InChatMessageString)
{
	ChatMessageString = InChatMessageString;
	if (IsLocalController() == true)
	{
		ServerRPCPrintChatMessageString(InChatMessageString);		
	}
}

void ABBPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	BaseBallFunctionLibrary::MyPrintString(this, InChatMessageString, 10.f);
}

void ABBPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	for (TActorIterator<ABBPlayerController> It(GetWorld()); It; ++It)
	{
		ABBPlayerController* BBPlayerController = *It;
		if (IsValid(BBPlayerController) == true)
		{
			BBPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
		}
	}
}

void ABBPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	PrintChatMessageString(InChatMessageString);
}
