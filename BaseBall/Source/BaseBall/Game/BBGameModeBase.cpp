// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/BBGameModeBase.h"
#include "BBGameStateBase.h"
#include "Player/BBPlayerController.h"
#include "EngineUtils.h"
#include "Player/BBPlayerState.h"

void ABBGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	ABBPlayerController* BBPlayerController = Cast<ABBPlayerController>(NewPlayer);
	if (IsValid(BBPlayerController) == true)
	{
		AllPlayerControllers.Add(BBPlayerController);

		ABBPlayerState* BBPS = BBPlayerController->GetPlayerState<ABBPlayerState>();
		if (IsValid(BBPS) == true)
		{
			BBPS->PlayerNameString = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}

		ABBGameStateBase* BBGameStateBase =  GetGameState<ABBGameStateBase>();
		if (IsValid(BBGameStateBase) == true)
		{
			BBGameStateBase->MulticastRPCBroadcastLoginMessage(BBPS->PlayerNameString);
		}
	}
}

FString ABBGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) { return Num > 0; });
	
	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ABBGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do {

		if (InNumberString.Len() != 3)
		{
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}
			
			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;
		
	} while (false);	

	return bCanPlay;
}

FString ABBGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0, BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else 
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;				
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void ABBGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	SecretNumberString = GenerateSecretNumber();
}

void ABBGameModeBase::PrintChatMessageString(ABBPlayerController* InChattingPlayerController,
	const FString& InChatMessageString)
{
	FString ChatMessageString = InChatMessageString;
	int Index = InChatMessageString.Len() - 3;
	FString GuessNumberString = InChatMessageString.RightChop(Index);
	if (IsGuessNumberString(GuessNumberString) == true)
	{
		FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);
		
		IncreaseGuessCount(InChattingPlayerController);
		
		for (TActorIterator<ABBPlayerController> It(GetWorld()); It; ++It)
		{
			ABBPlayerController* BBPlayerController = *It;
			if (IsValid(BBPlayerController) == true)
			{
				FString CombinedMessageString = InChatMessageString + TEXT(" -> ") + JudgeResultString;
				BBPlayerController->ClientRPCPrintChatMessageString(CombinedMessageString);
			}
		}
	}
	else
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
}

void ABBGameModeBase::IncreaseGuessCount(ABBPlayerController* InChattingPlayerController)
{
	ABBPlayerState* BBPS = InChattingPlayerController->GetPlayerState<ABBPlayerState>();
	if (IsValid(BBPS) == true)
	{
		BBPS->CurrentGuessCount++;
	}
}
