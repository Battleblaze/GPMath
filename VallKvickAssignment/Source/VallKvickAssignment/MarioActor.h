// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MarioActor.generated.h"

UCLASS()
class VALLKVICKASSIGNMENT_API AMarioActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMarioActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UFUNCTION(BlueprintCallable)
		void OnMarioHit(class AGoombaActor* Goomba);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
