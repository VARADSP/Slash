// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Begin Play Called asasa!"));

	UWorld* world = GetWorld();
	if (world) {
		FVector Location = GetActorLocation();
		DrawDebugSphere(world, Location, 25.f, 24, FColor::Red, false, 30.f);
	}
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item onScreen Message !"));
	}
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("Delta Time : %f"), DeltaTime);

	FString Name = GetName();

	FString Message = FString::Printf(TEXT("Item Name : %s"), *Name);

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message);

		UE_LOG(LogTemp, Warning, TEXT("Item Name : %s"), *Name);
	}
}

