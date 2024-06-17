// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	TiempoCapsula = 0.0f;
	TipoPoder = "";
	VerificarCapsula = true;
}

void ANaveEnemigaNodriza::Mover(float DeltaTime)
{
  
}

void ANaveEnemigaNodriza::Destruirse()
{
}

void ANaveEnemigaNodriza::Desplegar()
{
}

void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

bool ANaveEnemigaNodriza::CapsulaConsumida(FString _consumida)
{
	if (_consumida.Equals("consumida"))
	{
		return true;
	}
	return false;
}

void ANaveEnemigaNodriza::HabilitarCapsula(float _tiempo)
{
	TiempoCapsula = _tiempo;
	VerificarCapsula = false;
}

bool ANaveEnemigaNodriza::DesHabilitarCapsula()
{
	return VerificarCapsula;
}

FString ANaveEnemigaNodriza::ObtenerTipoPoder()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Duracion: %f"), TiempoCapsula));
	return TipoPoder;
}

void ANaveEnemigaNodriza::EstablecerTipoPoder(FString _Poder)
{
	TipoPoder = _Poder;
}
