// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"


ATank* ATankPlayerController::GetControlOfTank() 
{
   return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay() 
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("Game Starts!"));

    ATank* TankPossessed = GetControlOfTank();
    if(!TankPossessed)
    {
        UE_LOG(LogTemp, Warning, TEXT("No Tank Possessed"));
    }

    else
    {
        UE_LOG(LogTemp, Warning, TEXT("The tank possessed is %s"), *TankPossessed->GetName()); 
    }
}
