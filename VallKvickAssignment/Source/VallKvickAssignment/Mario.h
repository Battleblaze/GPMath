// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Mario.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VALLKVICKASSIGNMENT_API UMario : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMario();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//UFUNCTION()
		//void OnMarioHit(class UState* state);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
