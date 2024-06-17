// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{

}

void ANaveEnemigaEspia::Disparar()
{
}

void ANaveEnemigaEspia::Destruirse()
{
}

void ANaveEnemigaEspia::Esconderse()
{
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
