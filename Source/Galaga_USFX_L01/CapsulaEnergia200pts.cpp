// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEnergia200pts.h"

ACapsulaEnergia200pts::ACapsulaEnergia200pts()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaEnergia->SetStaticMesh(CapsulaMesh.Object);
	SetVelocidad(10);
	SetCantEnergia(50);
}

void ACapsulaEnergia200pts::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		SetActorLocation(FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, PosicionActual.Z));

	}
}

void ACapsulaEnergia200pts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
