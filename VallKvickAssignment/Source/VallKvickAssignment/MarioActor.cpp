// Fill out your copyright notice in the Description page of Project Settings.


#include "MarioActor.h"
#include "GoombaActor.h"

// Sets default values
AMarioActor::AMarioActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AMarioActor::BeginPlay()
{
	Super::BeginPlay();

    
	
}

// Called every frame
void AMarioActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMarioActor::OnMarioHit(AGoombaActor* Goomba) {
    // Implement logic based on the relative positions of Mario and Goomba

    FVector MarioLocation = GetActorLocation();
    FVector GoombaLocation = Goomba->GetActorLocation();

    float VerticalDistance = FMath::Abs(MarioLocation.Z - GoombaLocation.Z);
    float HorizontalDistance = FMath::Abs(MarioLocation.X - GoombaLocation.X);

    // Check if Mario is above Goomba
    if (VerticalDistance > 50.0f)
    {
        // Mario stomps on Goomba, Goomba dies
        Goomba->Die();
    }
    else
    {
        // Mario collides from the side, Mario takes damage
        // Implement your damage logic here

        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Mario takes damage"));
    }
}





