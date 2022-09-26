// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VTDEnemySpawner.generated.h"

UCLASS()
class PROJECTVTD_API AVTDEnemySpawner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AVTDEnemySpawner();

private:
	float EnemySpawnTimer;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void SpawnEnemy();

    
	UPROPERTY(EditDefaultsOnly)
	float SpawnRate;
    
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<AActor> EnemyClass;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
