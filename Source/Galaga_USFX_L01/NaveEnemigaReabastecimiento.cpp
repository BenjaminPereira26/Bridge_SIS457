// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/NavesShapes/NaveEnemigaReabast.NaveEnemigaReabast'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaReabastecimiento::Mover(float DeltaTime)
{


} 


void ANaveEnemigaReabastecimiento::Destruirse()
{
}

void ANaveEnemigaReabastecimiento::DistribuirEnemiga()
{
}
void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

