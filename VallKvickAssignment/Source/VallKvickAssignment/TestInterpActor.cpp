// Fill out your copyright notice in the Description page of Project Settings.


#include "TestInterpActor.h"

// Sets default values
ATestInterpActor::ATestInterpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestInterpActor::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
	TargetLocation = StartLocation + FVector(100.0f, 0.0f, 0.0f);

	InterpStartTime = GetWorld()->GetRealTimeSeconds();
	InterpDuration = 2.0f;

	
}

// Called every frame
void ATestInterpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float Alpha = FMath::Clamp((GetWorld()->GetTimeSeconds() - InterpStartTime) / InterpDuration, 0.0f, 1.0f);

	FVector NewLocation = FMath::Lerp(StartLocation, TargetLocation, Alpha);

	SetActorLocation(NewLocation);

}

