// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAppleActor.h"
#include "SnakeBase.h"

// Sets default values
AMyAppleActor::AMyAppleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyAppleActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyAppleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyAppleActor::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);
		if (IsValid(Snake))
		{
			Snake->AddSnakeElement();
			Destroy();
		}
	}
}

