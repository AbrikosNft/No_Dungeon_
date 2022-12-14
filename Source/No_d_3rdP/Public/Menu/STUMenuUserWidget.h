// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Blueprint/UserWidget.h"
#include "STUMenuUserWidget.generated.h"

class UButon;
/**
 * 
 */
UCLASS()
class NO_D_3RDP_API USTUMenuUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
    UPROPERTY(meta = (BindWidget))
    UButton* ExitButton;
    /*UPROPERTY(meta = (BindWidget))
    UButton* SearchButton;

    UPROPERTY(meta = (BindWidget))
    UButton* SoloButton;

    UPROPERTY(meta = (BindWidget))
    UButton* ShopButton;

    UPROPERTY(meta = (BindWidget))
    UButton* DiaryButton;

    UPROPERTY(meta = (BindWidget))
    UButton* StatisticsButton;

    UPROPERTY(meta = (BindWidget))
    UButton* GalleryButton;

    UPROPERTY(meta = (BindWidget))
    UButton* SettingsButton;*/

    

	virtual void NativeOnInitialized() override;

private:
    UFUNCTION()
    void OnSearch();

	UFUNCTION()
    void OnSolo();

	UFUNCTION()
    void OnShop();

	UFUNCTION()
    void OnDiary();

	UFUNCTION()
    void OnStatistics();

	UFUNCTION()
    void OnGallery();

	UFUNCTION()
    void OnSettings();

	UFUNCTION()
    void OnExit();

};
