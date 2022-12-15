// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu/STUMenuUserWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void USTUMenuUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (SearchButton)
    {
        SearchButton->OnClicked.AddDynamic(this, &USTUMenuUserWidget::OnSearch);
    }
    if (SoloButton)
    {
        SoloButton->OnClicked.AddDynamic(this, &USTUMenuUserWidget::OnSolo);
    }
    if (ShopButton)
    {
        ShopButton->OnClicked.AddDynamic(this, &USTUMenuUserWidget::OnShop);
    }
    if (DiaryButton)
    {
        DiaryButton->OnClicked.AddDynamic(this, &USTUMenuUserWidget::OnDiary);
    }
    if (StatisticsButton)
    {
        StatisticsButton->OnClicked.AddDynamic(this, &USTUMenuUserWidget::OnStatistics);
    }
    if (GalleryButton)
    {
        GalleryButton->OnClicked.AddDynamic(this, &USTUMenuUserWidget::OnGallery);
    }
    if (SettingsButton)
    {
        SettingsButton->OnClicked.AddDynamic(this, &USTUMenuUserWidget::OnSettings);
    }
    if (ExitButton)
   {
        ExitButton->OnClicked.AddDynamic(this, &USTUMenuUserWidget::OnExit);
    }
}

void USTUMenuUserWidget::OnSearch() {}

void USTUMenuUserWidget::OnSolo() {}

void USTUMenuUserWidget::OnShop() {}

void USTUMenuUserWidget::OnDiary() {}

void USTUMenuUserWidget::OnStatistics() {}

void USTUMenuUserWidget::OnGallery() {}

void USTUMenuUserWidget::OnSettings() {}

void USTUMenuUserWidget::OnExit()
{
    UKismetSystemLibrary::QuitGame(this, GetOwningPlayer(), EQuitPreference::Quit, true);
}
