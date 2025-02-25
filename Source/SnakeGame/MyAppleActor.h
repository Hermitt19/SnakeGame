// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "interactable.h"
#include "MyAppleActor.generated.h"

UCLASS()
class SNAKEGAME_API AMyAppleActor : public AActor, public Iinteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyAppleActor();

protected: 
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	 virtual void Interact(AActor* Interactor, bool bIsHead) override;

};
