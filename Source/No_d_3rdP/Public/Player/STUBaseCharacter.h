// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "STUBaseCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class USTUHeathComponent;
//class UTextRenderComponent;

UCLASS()
class NO_D_3RDP_API ASTUBaseCharacter : public ACharacter 
{
  GENERATED_BODY()

public:
  // Sets default values for this character's properties
  ASTUBaseCharacter();

protected:
  UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
  USpringArmComponent *SpringArmComponent;

  UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
  UCameraComponent *CameraComponent;

   UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
  USTUHeathComponent *HealthComponent;


  // Called when the game starts or when spawned
  virtual void BeginPlay() override;

public:
  // Called every frame
  virtual void Tick(float DeltaTime) override;

  // Called to bind functionality to input
  virtual void SetupPlayerInputComponent(
      class UInputComponent *PlayerInputComponent) override;

private:
  void MoveForward(float Amount);
  void MoveRight(float Amount);

  void LookUP(float Amount);
  void TurnRight(float Amount);
};