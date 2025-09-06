// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/BBPawn.h"
#include "BaseBall.h"

void ABBPawn::BeginPlay()
{
	Super::BeginPlay();

	FString NetRoleString = BaseBallFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("BBPawn::BeginPlay() %s [%s]"), *BaseBallFunctionLibrary::GetNetModeString(this), *NetRoleString);
	BaseBallFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}

void ABBPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FString NetRoleString = BaseBallFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("BBPawn::PossessedBy() %s [%s]"), *BaseBallFunctionLibrary::GetNetModeString(this), *NetRoleString);
	BaseBallFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}

