// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/BBPlayerController.h"

#include "UI/BBChatInput.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BaseBall.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Game/BBGameModeBase.h"
#include "BBPlayerState.h"

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
		// ServerRPCPrintChatMessageString(InChatMessageString);

		ABBPlayerState* BBPS = GetPlayerState<ABBPlayerState>();
		if (IsValid(BBPS) == true)
		{
			FString CombinedMessageString = BBPS->GetPlayerInfoString() + TEXT(": ") + InChatMessageString;

			ServerRPCPrintChatMessageString(CombinedMessageString);
		}
	}
}

void ABBPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	BaseBallFunctionLibrary::MyPrintString(this, InChatMessageString, 10.f);
}

void ABBPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (IsValid(GM) == true)
	{
		ABBGameModeBase* BBGM = Cast<ABBGameModeBase>(GM);
		if (IsValid(BBGM) == true)
		{
			BBGM->PrintChatMessageString(this, InChatMessageString);
		}
	}
}

void ABBPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	PrintChatMessageString(InChatMessageString);
}
