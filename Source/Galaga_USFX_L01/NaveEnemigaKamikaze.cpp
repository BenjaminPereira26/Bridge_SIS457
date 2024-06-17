// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaKamikaze.h"

ANaveEnemigaKamikaze::ANaveEnemigaKamikaze()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaKamikaze::Mover(float DeltaTime)
{
	
}

void ANaveEnemigaKamikaze::Destruirse()
{
}

void ANaveEnemigaKamikaze::CaidaLibre()
{
}

void ANaveEnemigaKamikaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
