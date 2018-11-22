// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "Engine.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPE_API UDoorController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorController();

protected:
    void openDoor();
    void closeDoor();
    
    // Called when the game starts
	virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere)
    ATriggerVolume* PressurePlate;
    
    UPROPERTY(EditAnywhere)
    AActor* ActorThatOpens;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
