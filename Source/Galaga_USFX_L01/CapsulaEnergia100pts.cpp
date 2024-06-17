// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEnergia100pts.h"

ACapsulaEnergia100pts::ACapsulaEnergia100pts()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaEnergia->SetStaticMesh(CapsulaMesh.Object);
	SetVelocidad(6.5);
	SetCantEnergia(50);
}

void ACapsulaEnergia100pts::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		SetActorLocation(FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, PosicionActual.Z));

	}
}

void ACapsulaEnergia100pts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
