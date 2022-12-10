// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/STUBaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ASTUBaseCharacter::ASTUBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SpringArmComponent =
            CreateDefaultSubobject<USpringArmComponent>("SpringAramComponent");
        SpringArmComponent->SetupAttachment(GetRootComponent());
    SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject < UCameraComponent > ("CameraComponent");
    CameraComponent->SetupAttachment(SpringArmComponent);

}

// Called when the game starts or when spawned
void ASTUBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTUBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASTUBaseCharacter::SetupPlayerInputComponent(
    UInputComponent *PlayerInputComponent) {
        Super::SetupPlayerInputComponent(PlayerInputComponent);

        PlayerInputComponent->BindAxis("Move Forward / Backward", this,
                                       &ASTUBaseCharacter::MoveForward);
        PlayerInputComponent->BindAxis("Move Right / Left", this,
                                       &ASTUBaseCharacter::MoveRight);
        PlayerInputComponent->BindAxis("Look Up / Down Mouse", this,
                                       &ASTUBaseCharacter::LookUP);
        PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this,
                                       &ASTUBaseCharacter::TurnRight);
}



void ASTUBaseCharacter::MoveForward(float Amount)
{
  AddMovementInput(GetActorForwardVector(), Amount);
}

void ASTUBaseCharacter::MoveRight(float Amount)
{
  AddMovementInput(GetActorRightVector(), Amount);
}

void ASTUBaseCharacter::LookUP(float Amount) 
{
  AddControllerPitchInput(Amount);
}

void ASTUBaseCharacter::TurnRight(float Amount) {
  AddControllerYawInput(Amount);
}
