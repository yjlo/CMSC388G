// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawn.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Controller.h"

/* Initial values for interpolating jump teleportation */
bool isJumpTeleporting = false;
float interpolation = 0;
FVector NewActorLocation = FVector::ZeroVector;

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	PlayerInputComponent->BindAction("JumpTeleportMoveForward", IE_Pressed, this, &AMyPawn::JumpTeleportMoveForward);
	PlayerInputComponent->BindAction("SnapLeft", IE_Pressed, this, &AMyPawn::SnapLeft);
	PlayerInputComponent->BindAction("SnapRight", IE_Pressed, this, &AMyPawn::SnapRight);
}

/* To jump teleport forward, press B or A */
void AMyPawn::JumpTeleportMoveForward()
{
	isJumpTeleporting = true; // Tells tick, jump teleportation is happening
	FVector ActorRotation = GetActorRotation().Vector();
	FVector ActorLocation = GetActorLocation();
	NewActorLocation = ActorLocation + (ActorRotation * 300.0f); // Calculates new location, which is 300 units forward
}

/* To snap left, press X */
void AMyPawn::SnapLeft()
{
	FRotator ForwardVector = GetActorRotation(); // Gets current pawn rotation
	ForwardVector += FRotator(0, 45, 0); // Adds 45 degrees to current rotation
	SetActorRotation(FRotator(ForwardVector.Pitch, ForwardVector.Yaw, ForwardVector.Roll), ETeleportType::None); // Initiate rotation change
}

/* To snap right, press Y */
void AMyPawn::SnapRight()
{
	FRotator ForwardVector = GetActorRotation(); // Gets current pawn rotation
	ForwardVector += FRotator(0, -45, 0); // Subtracts 45 degrees to current rotation
	SetActorRotation(FRotator(ForwardVector.Pitch, ForwardVector.Yaw, ForwardVector.Roll), ETeleportType::None); // Initiate rotation change
}



