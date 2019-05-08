// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawn.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"
#include "Engine/Engine.h"

/* Initial values for interpolating jump teleportation */
bool isJumpTeleporting = false;
float interpolation = 0;
FVector NewActorLocation = FVector::ZeroVector;

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("ActualCamera"));
	Camera->SetupAttachment(RootComponent);


}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isJumpTeleporting) {
		if (floor(interpolation) < 1) { // Detects whether we have finished teleportation wih rounding down
			interpolation += DeltaTime * 2; // Teleportaion occurs in 2 seconds
			FVector ActorLocation = GetActorLocation(); // Gets current pawn location
			SetActorRelativeLocation(FMath::Lerp(ActorLocation, NewActorLocation, interpolation)); // Calling Lerp to interpolate between 2 locations
		} else
		{
			/* Reset initial jump teleportation values */
			isJumpTeleporting = false;
			interpolation = 0;
			NewActorLocation = FVector::ZeroVector;
		}
	}
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	/* Connecting buttons to actions (implemented functions) */
	PlayerInputComponent->BindAxis("MotionControllerVertical", this, &AMyPawn::MoveVertical);
	PlayerInputComponent->BindAxis("MotionControllerLeft", this, &AMyPawn::RotateLeft);
	PlayerInputComponent->BindAxis("MotionControllerRight", this, &AMyPawn::RotateRight);
}

/* To jump teleport forward, press B or A */
void AMyPawn::MoveVertical(float AxisValue)
{
	/*isJumpTeleporting = true; // Tells tick, jump teleportation is happening
	FVector ActorRotation = GetActorRotation().Vector();
	FVector ActorLocation = GetActorLocation();
	NewActorLocation = ActorLocation + (ActorRotation * FMath::Clamp(AxisValue, 0.0f, 1.0f) * 100.0f); // Calculates new location, which is 300 units forward*/
	FVector fwd = GetActorForwardVector();
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "FVector: " + FString::SanitizeFloat(AxisValue));
	this->AddActorWorldOffset(fwd * (FMath::Clamp(AxisValue, -1.0f, 1.0f) * 5.0f));
}

/* To snap left, press X */
void AMyPawn::RotateLeft(float AxisValue)
{
	this->AddActorWorldRotation(FRotator(0, FMath::Clamp(AxisValue,-1.0f,0.0f) * 2.0f, 0), false, nullptr, ETeleportType::None); // Initiate rotation change
}

/* To snap right, press Y */
void AMyPawn::RotateRight(float AxisValue)
{
	this->AddActorWorldRotation(FRotator(0, FMath::Clamp(AxisValue, 0.0f, 1.0f) * 2.0f, 0), false, nullptr, ETeleportType::None); // Initiate rotation change
}



