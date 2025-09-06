// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/BBGameModeBase.h"

#include "BBGameStateBase.h"

void ABBGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	ABBGameStateBase* BBGameStateBase =  GetGameState<ABBGameStateBase>();
	if (IsValid(BBGameStateBase) == true)
	{
		BBGameStateBase->MulticastRPCBroadcastLoginMessage(TEXT("XXXXXXX"));
	}
}