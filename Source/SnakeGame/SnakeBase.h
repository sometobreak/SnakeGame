// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnakeBase.generated.h"

class ASnakeElementBase;
class AFood;

UENUM()
enum class EMovementDirection
{
	UP,
	DOWN,
	LEFT,
	RIGHT
};

UCLASS()
class SNAKEGAME_API ASnakeBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnakeBase();

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASnakeElementBase> SnakeElementClass;

	UPROPERTY(EditDefaultsOnly)
	float ElementSize;

	UPROPERTY(EditDefaultsOnly)
	float MovementSpeed;

	UPROPERTY()
	TArray<ASnakeElementBase*> SnakeElements;

	UPROPERTY()
	EMovementDirection LastMoveDirection;

	UPROPERTY()
	AFood* FoodElement;
	UPROPERTY()
	AFood* FoodElement2;
	UPROPERTY()
	AFood* FoodElement3;
	UPROPERTY()
	AFood* FoodElement4;
	UPROPERTY()
	AFood* FoodElement5;
	UPROPERTY()
	AFood* FoodElement6;
	UPROPERTY()
	AFood* FoodElement7;
	UPROPERTY()
	AFood* FoodElement8;
	UPROPERTY()
	AFood* FoodElement9;
	UPROPERTY()
	AFood* FoodElement10;
	UPROPERTY()
	AFood* FoodElement11;
	UPROPERTY()
	AFood* FoodElement12;
	UPROPERTY()
	AFood* FoodElement13;
	UPROPERTY()
	AFood* FoodElement14;
	UPROPERTY()
	AFood* FoodElement15;
	UPROPERTY()
	AFood* FoodElement16;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AFood> FoodElementClass;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void AddSnakeElement(int ElementNum = 1);
	UFUNCTION(BlueprintCallable)
	void CreateFoodElement();
	UFUNCTION(BlueprintCallable)
	void Move();
	UFUNCTION()
	void SnakeElementOverlap(ASnakeElementBase* OverlappedElement, AActor* Other); 
};
