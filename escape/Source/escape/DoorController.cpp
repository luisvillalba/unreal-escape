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


// Called when the game starts
void UDoorController::BeginPlay()
{
	Super::BeginPlay();

	// ...
    UE_LOG(LogTemp, Warning, TEXT("Hello World!"));
    UE_LOG(LogTemp, Warning, TEXT("%s"), *GetOwner()->GetName());
    GetOwner()->SetActorRotation(FRotator(0.f,60.f,0.f));
}


// Called every frame
void UDoorController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

