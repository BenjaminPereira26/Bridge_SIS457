// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	TiempoCapsula = 0.0f;
	TipoPoder = "";
	VerificarCapsula = true;
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	
}

void ANaveEnemigaTransporte::Disparar()
{
}

void ANaveEnemigaTransporte::Destruirse()
{
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

bool ANaveEnemigaTransporte::CapsulaConsumida(FString _consumida)
{
	if (_consumida.Equals("consumida"))
	{
		return true;
	}
	return false;
}

void ANaveEnemigaTransporte::HabilitarCapsula(float _tiempo)
{
	TiempoCapsula = _tiempo;
	VerificarCapsula = false;
}

bool ANaveEnemigaTransporte::DesHabilitarCapsula()
{
	return VerificarCapsula;
}

FString ANaveEnemigaTransporte::ObtenerTipoPoder()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Duracion: %f"), TiempoCapsula));
	return TipoPoder;
}

void ANaveEnemigaTransporte::EstablecerTipoPoder(FString _Poder)
{
	TipoPoder = _Poder;
}
