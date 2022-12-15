// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu/STUMenuGameModeBase.h"
#include "Menu/STUMenuPlayerController.h"
#include "Menu/STUMenuHUD.h"

void ASTUMenuGameModeBase::BeginPlay()
{
    Super::BeginPlay();
    PlayerControllerClass = ASTUMenuPlayerController::StaticClass();
    HUDClass = ASTUMenuHUD::StaticClass();
}