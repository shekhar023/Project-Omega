// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SInterfaceComponent.h"

#include "Characters/SCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Interfaces/SInterface.h"
#include "DrawDebugHelpers.h"

static int32 DebugInteractDrawing = 1;
FAutoConsoleVariableRef CVARDebugInteractDrawing(TEXT("DebugInteractDrawing"), DebugInteractDrawing, TEXT("Draw Debug Lines for InteractComponent"),ECVF_Cheat);

// Sets default values for this component's properties
USInterfaceComponent::USInterfaceComponent()
{
    InteractTraceLength = 400.f;
    bCanInteract = true;
}


// Called when the game starts
void USInterfaceComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
    SetupPlayerInputComponent();
	
}

void USInterfaceComponent::SetupPlayerInputComponent()
{
    InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
    if(InputComponent)
    {
        InputComponent->BindAction("Interact", IE_Pressed, this, &USInterfaceComponent::InteractWithObjects);
    }
    
}


//MARK: HitResult
FHitResult USInterfaceComponent::GetHitResult()
{
    FHitResult Hit;
    
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());
    Params.AddIgnoredActor(GetOwner());
    Params.bTraceComplex = true;
    
    GetWorld()->LineTraceSingleByChannel(OUT Hit, GetPlayerWorldPosition(), GetEndPoint(), ECollisionChannel::ECC_Visibility, Params);

    if (DebugInteractDrawing > 0)
    {
        DrawDebugLine(GetWorld(), GetPlayerWorldPosition(), GetEndPoint(), FColor::Blue, false, 1.0f, 0, 1.0f);
    }

    
    return Hit;
}

FVector USInterfaceComponent::GetPlayerWorldPosition()
{
    PlayerCharacter = Cast<ASCharacter>(GetOwner());

   FVector CameraPosition;
    if(PlayerCharacter)
    {
        CameraPosition = PlayerCharacter->GetFollowCamera()->GetComponentLocation();

    }
    return CameraPosition;
    
}

FVector USInterfaceComponent::GetEndPoint()
{
   
   
    FVector EndTracePoint  = GetPlayerWorldPosition() + (GetDirection() * InteractTraceLength);

     return EndTracePoint;
    
}

FVector USInterfaceComponent::GetDirection()
{
    PlayerCharacter = Cast<ASCharacter>(GetOwner());

    FVector CameraDirection;
     if(PlayerCharacter)
     {
         CameraDirection = PlayerCharacter->GetFollowCamera()->GetForwardVector();

     }
     return CameraDirection;
}


void USInterfaceComponent::InteractWithObjects()
{
    
    FHitResult Hit = GetHitResult();
    
    AActor* HitActor = Hit.GetActor();

    if(bCanInteract)
    {
        if(HitActor)
        {
            SetFocusedActor(HitActor);
        }
        
        if(FocusedActor)
        {
            ISInterface* Interface = Cast<ISInterface>(FocusedActor);
            if(Interface)
            {
            
               Interface->Execute_OnInteract(FocusedActor, HitActor);
               Interface->Pickup();
               Interface->Interact();
                
            }
        }
    }
}

void USInterfaceComponent::SetFocusedActor(AActor* HitActor)
{
    if(HitActor != FocusedActor)
    {

    if(FocusedActor)
    {
       
        ISInterface* Interface = Cast<ISInterface>(FocusedActor);
        if(Interface)
        {
            Interface->Execute_EndFocus(FocusedActor);
        }
    }
    
    ISInterface* Interface = Cast<ISInterface>(HitActor);
    if(Interface)
    {
       
        Interface->Execute_StartFocus(HitActor);
    }
       
    FocusedActor = HitActor;
}
    
    else
    {
        if(FocusedActor)
        {
            ISInterface* Interface = Cast<ISInterface>(FocusedActor);
            if(Interface)
            {
                Interface->Execute_EndFocus(FocusedActor);
            }
        }
        FocusedActor = nullptr;
    }
}
