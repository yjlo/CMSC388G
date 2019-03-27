// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomMotionController.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Engine/Engine.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "CustomPickupActorInterface.h"
#include "Components/SphereComponent.h"

// Sets default values
ACustomMotionController::ACustomMotionController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ACustomMotionController::ClearArc()
{
	//TODO - Clear blue laser arc every frame
	USplineComponent* Spline = FindComponentByClass<USplineComponent>();
	if (Spline != nullptr) {
		Spline->ClearSplinePoints();
	}

	TArray<USplineMeshComponent*> SplineMeshes;
	GetComponents<USplineMeshComponent>(SplineMeshes, true);
	for (USplineMeshComponent* s : SplineMeshes) {
		s->DestroyComponent();
	}

}

AActor* ACustomMotionController::GetActorNearHand()
{
	//TODO - Do something other than return null
	TArray<AActor*> OverlappingActorsOfSphere;
	GetOverlappingActors(OverlappingActorsOfSphere);
	USphereComponent* GrabSphere = FindComponentByClass<USphereComponent>();
	FVector GrabSphereLocation = GrabSphere->GetComponentLocation();
	float shortest_distance = 10000;
	AActor* NearestOverlappingActor = nullptr;
	for (AActor* OverlappingActor : OverlappingActorsOfSphere) {
		bool ActorOfPickUpType = UKismetSystemLibrary::DoesImplementInterface(OverlappingActor,UCustomPickupActorInterface::StaticClass());
		if (ActorOfPickUpType == true)
		{
			FVector OverlappingActorLocation = OverlappingActor->GetActorLocation();
			float distance = FVector::Dist(OverlappingActorLocation, GrabSphereLocation);
			if (distance < shortest_distance)
			{
				shortest_distance = FVector::Dist(OverlappingActorLocation, GrabSphereLocation);
				NearestOverlappingActor = OverlappingActor;
			}
		}
	}
	return NearestOverlappingActor;
}

//Blueprint function that is converted to C++ for your convenience.
FTeleportDestinationTransform ACustomMotionController::GetTeleportDestination()
{
	UStaticMeshComponent* TeleportCylinder = FindComponentByClass<UStaticMeshComponent>();
	FVector TeleportLocation = TeleportCylinder->GetComponentLocation();

	FVector DevicePosition;
	FRotator DeviceRotation;
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(DeviceRotation, DevicePosition);
	const FVector IgnoreHeightDifferenceVector = FVector(DevicePosition.X, DevicePosition.Y, 0);

	FRotator TeleportRotator;
	FVector RotatedVector = TeleportRotator.RotateVector(IgnoreHeightDifferenceVector);

	FVector DiffFromCamera = TeleportLocation - RotatedVector;

	FTeleportDestinationTransform TeleportDestinationTransform;

	TeleportDestinationTransform.DestinationLocation = DiffFromCamera;
	TeleportDestinationTransform.DestinationRotation = TeleportRotator;

	return TeleportDestinationTransform;
}

void ACustomMotionController::LeftSnap()
{
	
}

void ACustomMotionController::RightSnap()
{

}

