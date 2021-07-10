// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/SController.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"

ASController::ASController()
{
    // set our turn rates for input
    BaseTurnRate = 45.f;
    BaseLookUpRate = 45.f;
}


void ASController::SetupInputComponent()
{
    Super::SetupInputComponent();
    check(InputComponent)
    
    InputComponent->BindAxis("MoveForward", this, &ASController::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &ASController::MoveRight);

    // We have 2 versions of the rotation bindings to handle different kinds of devices differently
    // "turn" handles devices that provide an absolute delta, such as a mouse.
    // "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
    //InputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
    InputComponent->BindAxis("Turn", this, &ASController::TurnAtRate);
    //InputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
    InputComponent->BindAxis("LookUp", this, &ASController::LookUpAtRate);
}

void ASController::TurnAtRate(float Rate)
{
    // calculate delta for this frame from the rate information
    UGameplayStatics::GetPlayerPawn(GetWorld(), 0)->AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ASController::LookUpAtRate(float Rate)
{
    // calculate delta for this frame from the rate information
    UGameplayStatics::GetPlayerPawn(GetWorld(), 0)->AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ASController::MoveForward(float Value)
{
    if (Value != 0.0f)
    {
        // find out which way is forward
        const FRotator Rotation = GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        // get forward vector
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AController::GetPawn()->AddMovementInput(Direction, Value);
    }
}

void ASController::MoveRight(float Value)
{
    if ( Value != 0.0f )
    {
        // find out which way is right
        const FRotator Rotation = GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
    
        // get right vector
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        // add movement in that direction
        AController::GetPawn()->AddMovementInput(Direction, Value);
    }
}

