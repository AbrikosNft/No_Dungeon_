// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "STUMenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class NO_D_3RDP_API ASTUMenuHUD : public AHUD
{
	GENERATED_BODY()

		protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> MenuWidgetClass;
	
	virtual void BeginPlay() override;
};
