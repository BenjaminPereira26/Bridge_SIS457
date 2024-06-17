// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEnergia.h"

// Sets default values
ACapsulaEnergia::ACapsulaEnergia()
{
 	PrimaryActorTick.bCanEverTick = true;
	mallaEnergia = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TEXT"));
	mallaEnergia->SetupAttachment(RootComponent);
	RootComponent = mallaEnergia;
	velocidad = 2;
	limiteX = -1600.0f;
}

// Called when the game starts or when spawned
void ACapsulaEnergia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsulaEnergia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

