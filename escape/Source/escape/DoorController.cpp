// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorController.h"

// Sets default values for this component's properties
UDoorController::UDoorController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UDoorController::openDoor() {
    GetOwner()->SetActorRotation(FRotator(0.f,-60.f,0.f));
}

void UDoorController::closeDoor() {
    GetOwner()->SetActorRotation(FRotator(0.f,0.f,0.f));
}

// Called when the game starts
void UDoorController::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UDoorController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
    if (PressurePlate->IsOverlappingActor(ActorThatOpens)) {
        openDoor();
    } else {
        closeDoor();
    }
}

