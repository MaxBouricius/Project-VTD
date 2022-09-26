// Fill out your copyright notice in the Description page of Project Settings.


#include "VTDEnemySpawner.h"


// Sets default values
AVTDEnemySpawner::AVTDEnemySpawner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemySpawnTimer = 0;
	SpawnRate = 1;
}

// Called when the game starts or when spawned
void AVTDEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVTDEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EnemySpawnTimer += DeltaTime;
	if (EnemySpawnTimer >= SpawnRate)
	{
		SpawnEnemy();
		EnemySpawnTimer = 0;
	}
}

void AVTDEnemySpawner::SpawnEnemy()
{
	AActor* SpawnedActor = GetWorld()->SpawnActor(EnemyClass);
	SpawnedActor->SetActorTransform(GetTransform());
}

