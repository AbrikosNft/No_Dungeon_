// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Blueprint/UserWidget.h"
#include "STUMenuUserWidget.generated.h"

//class UButon;
/**
 * 
 */
UCLASS()
class NO_D_3RDP_API USTUMenuUserWidget : public UUserWidget
{
	GENERATED_BODY()
	


    UPROPERTY(meta = (BindWidget))
    class UButton* ExitButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* SearchButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* SoloButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* ShopButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* DiaryButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* StatisticsButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* GalleryButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* SettingsButton;

    

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
