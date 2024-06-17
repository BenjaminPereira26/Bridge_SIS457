// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEnergia50pts.h"

ACapsulaEnergia50pts::ACapsulaEnergia50pts()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaEnergia->SetStaticMesh(CapsulaMesh.Object);
	SetVelocidad(5);
	SetCantEnergia(50);
}

void ACapsulaEnergia50pts::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		SetActorLocation(FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, PosicionActual.Z));

	}
}

void ACapsulaEnergia50pts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
