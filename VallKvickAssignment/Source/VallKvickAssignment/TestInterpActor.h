// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestInterpActor.generated.h"

UCLASS()
class VALLKVICKASSIGNMENT_API ATestInterpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestInterpActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private: 
	// The starting and target locations for interpolation
	FVector StartLocation;
	FVector TargetLocation;

	// Time when the interpolation started
	float InterpStartTime;

	// Duration of the interpolation
	float InterpDuration;

};
