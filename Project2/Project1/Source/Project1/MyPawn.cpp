// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawn.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Controller.h"

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

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("JumpTeleportMoveForward", IE_Pressed, this, &AMyPawn::JumpTeleportMoveForward);
	PlayerInputComponent->BindAction("SnapLeft", IE_Pressed, this, &AMyPawn::SnapLeft);
	PlayerInputComponent->BindAction("SnapRight", IE_Pressed, this, &AMyPawn::SnapRight);
}

void AMyPawn::JumpTeleportMoveForward()
{
	FVector ForwardVector = GetActorForwardVector();
	AddMovementInput(ForwardVector, 10);
}

void AMyPawn::SnapLeft()
{
	FVector ForwardVector = GetActorForwardVector();
	float radian = FMath::DegreesToRadians(45);
	SetActorRotation(FRotator(0, radian,0), ETeleportType::None);
}

void AMyPawn::SnapRight()
{
	FVector ForwardVector = GetActorForwardVector();
	float radian = FMath::DegreesToRadians(45);
	SetActorRotation(FRotator(0, -radian, 0), ETeleportType::None);
}



