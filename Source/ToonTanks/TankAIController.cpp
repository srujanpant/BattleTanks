// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"

ATank* ATankAIController::AITankPossessed() 
{
    return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay() 
{
    auto AIPossessedTank = AITankPossessed();

    if(!AIPossessedTank)
    {
        UE_LOG(LogTemp, Warning, TEXT("The AI tank isn't possessed")); 
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("The AI tank possessed is %s"), *AIPossessedTank->GetName()); 
    }
    
}
