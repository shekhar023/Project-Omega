// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/SPlayerAnimInstance.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Characters/SCharacter.h"

void USPlayerAnimInstance::UpdateAnimationProperties()
{
    // Try to get the Pawn being animated and return if a nullptr.
    Pawn = TryGetPawnOwner();
    if (Pawn == nullptr) return;

    // Try to cast the Pawn to our ZombieCharacter since that's the only
    // thing we want to animate.
    Character = Cast<ASCharacter>(Pawn);
    if (Character == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("Character is not found in PlayerAnimIntance"));      
        return;
    }

    IsInAir = Pawn->GetMovementComponent()->IsFalling();
    SpeedAndDirectionCalculation();
}

void USPlayerAnimInstance::SpeedAndDirectionCalculation()
{
    auto PawnVelocity = Pawn->GetVelocity();
    auto PawnRotation = Pawn->GetActorRotation();
    Speed = PawnVelocity.Size();
    Direction = CalculateDirection(PawnVelocity, PawnRotation);
}

void USPlayerAnimInstance::SwitchAnimLayer(UClass* AnimClass, bool LinkLayer)
{
    if(!AnimClass) return;

    ///Check wether to link or unlink Anim Layer
    if(LinkLayer)
    {
        //set flag to true
        bSwitchAnimLayer = 1;
    }
    else
    {
        //set flag to false
        bSwitchAnimLayer = 0;
    }

    ///Toggle b/w linking a layer and unlinking a layer
    switch (bSwitchAnimLayer)
    {
        case 1: 
            LinkAnimClassLayers(AnimClass);
            break; 
        case 0:
            UnlinkAnimClassLayers(AnimClass);
            break;
        default:
            break;
    }
}
