// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "interactable.h"
#include "SnakeElemBase.generated.h"


class UStaticMeshComponent;
class ASnakeBase;

UCLASS()
class SNAKEGAME_API ASnakeElemBase : public AActor, public Iinteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnakeElemBase();

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY()
	ASnakeBase* SnakeOwner;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintNativeEvent)
	void SetFirstElementType();
	void SetFirstElementType_Implementation();

	UFUNCTION()
	void HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
	UFUNCTION()
	void ToggleCollision();
	

	virtual void Interact(AActor* Interactor, bool bIsHead) override;
};
 