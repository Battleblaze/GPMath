// Fill out your copyright notice in the Description page of Project Settings.


#include "GoombaActor.h"

// Sets default values
AGoombaActor::AGoombaActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGoombaActor::BeginPlay()
{
	
	UE_LOG(LogTemp, Display, TEXT("MyActor BeginPlay called!"));
	Super::BeginPlay();
	
	
}

// Called every frame
void AGoombaActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGoombaActor::Die()
{
	// Implement logic for Goomba's death, e.g., play death animation, destroy actor, etc.
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Goomba takes damage"));
	Destroy();
}

