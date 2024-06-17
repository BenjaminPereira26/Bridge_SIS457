// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaKamikaze.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaTransporte.h"
#include "CapsulaEnergia50pts.h"
#include "CapsulaEnergia100pts.h"
#include "CapsulaEnergia200pts.h"
#include "CapsulaBridge.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		/*const int32 NumeroDeColumnasCap50 = 1;
		const int32 NumeroDeFilasCap50 = 5;

		for (int32 Columna = 0; Columna < NumeroDeColumnasCap50; ++Columna)
		{
			TArray<ACapsulaEnergia50pts*> CapsulasEnColumnas;
			for (int32 Fila = 0; Fila < NumeroDeFilasCap50; ++Fila)
			{
				FVector SpawningLocation = FVector(1700.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, 250.0f);
				FRotator SpawningRotation = FRotator::ZeroRotator;

				ACapsulaEnergia50pts* NuevaCapsulaEnergia50 = GetWorld()->SpawnActor<ACapsulaEnergia50pts>(SpawningLocation, SpawningRotation);
				CapsulasEnColumnas.Add(NuevaCapsulaEnergia50);
			}
			ColumnaCapsulasEnergia50pts.Add(Columna, CapsulasEnColumnas);
		}

		const int32 NumeroDeColumnasCap100 = 1;
		const int32 NumeroDeFilasCap100 = 3;

		for (int32 Columna = 0; Columna < NumeroDeColumnasCap100; ++Columna)
		{
			TArray<ACapsulaEnergia100pts*> CapsulasEnColumnas;
			for (int32 Fila = 0; Fila < NumeroDeFilasCap100; ++Fila)
			{
				FVector SpawningLocation = FVector(1700.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, 250.0f);
				FRotator SpawningRotation = FRotator::ZeroRotator;

				ACapsulaEnergia100pts* NuevaCapsulaEnergia100 = GetWorld()->SpawnActor<ACapsulaEnergia100pts>(SpawningLocation, SpawningRotation);
				CapsulasEnColumnas.Add(NuevaCapsulaEnergia100);
			}
			ColumnaCapsulasEnergia100pts.Add(Columna, CapsulasEnColumnas);
		}
	
		const int32 NumeroDeColumnasCap200 = 1;
		const int32 NumeroDeFilasCap200 = 1;

		for (int32 Columna = 0; Columna < NumeroDeColumnasCap200; ++Columna)
		{
			TArray<ACapsulaEnergia200pts*> CapsulasEnColumnas;
			for (int32 Fila = 0; Fila < NumeroDeFilasCap200; ++Fila)
			{
				FVector SpawningLocation = FVector(1700.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, 250.0f);
				FRotator SpawningRotation = FRotator::ZeroRotator;

				ACapsulaEnergia200pts* NuevaCapsulaEnergia200 = GetWorld()->SpawnActor<ACapsulaEnergia200pts>(SpawningLocation, SpawningRotation);
				CapsulasEnColumnas.Add(NuevaCapsulaEnergia200);
			}
			ColumnaCapsulasEnergia200pts.Add(Columna, CapsulasEnColumnas);
		}*/


	const int32 NumeroDeColumnasCB = 1;
	const int32 NumeroDeFilasCB = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasCB; ++Columna)
	{
		TArray<ACapsulaBridge*> CBEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasCB; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1900.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ACapsulaBridge* NuevaCB = GetWorld()->SpawnActor<ACapsulaBridge>(SpawningLocation, SpawningRotation);
			CBEnColumna.Add(NuevaCB);
		}
		ColumnaCapsulasBridge.Add(Columna, CBEnColumna);
	}

	const int32 NumeroDeColumnasReabasteimiento = 1;
	const int32 NumeroDeFilasReabastecimiento = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasReabasteimiento; ++Columna)
	{
		TArray<ANaveEnemigaReabastecimiento*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasReabastecimiento; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1800.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaReabastecimiento* NuevaNaveReabastecimiento = GetWorld()->SpawnActor<ANaveEnemigaReabastecimiento>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveReabastecimiento);
		}
		ColumnaNavesEnemigasReabastecimiento.Add(Columna, NavesEnColumna);
	}
	
	const int32 NumeroDeColumnasNodriza = 1;
	const int32 NumeroDeFilasNodriza = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasNodriza; ++Columna)
	{
		TArray<ANaveEnemigaNodriza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasNodriza; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1500.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaNodriza* NuevaNaveNodriza = GetWorld()->SpawnActor<ANaveEnemigaNodriza>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveNodriza);
		}
		ColumnaNavesEnemigasNodriza.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasEspia = 1;
	const int32 NumeroDeFilasEspia = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasEspia; ++Columna)
	{
		TArray<ANaveEnemigaEspia*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasEspia; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1200.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaEspia* NuevaNaveEspia = GetWorld()->SpawnActor<ANaveEnemigaEspia>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveEspia);
		}
		ColumnaNavesEnemigasEspia.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasTransporte = 1;
	const int32 NumeroDeFilasTransporte = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasTransporte; ++Columna)
	{
		TArray<ANaveEnemigaTransporte*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasTransporte; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 900.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaTransporte* NuevaNaveTransporte = GetWorld()->SpawnActor<ANaveEnemigaTransporte>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveTransporte);
		}
		ColumnaNavesEnemigasTransporte.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasCaza = 2;
	const int32 NumeroDeFilasCaza = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasCaza; ++Columna)
	{
		TArray<ANaveEnemigaCaza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasCaza; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 300.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveCaza);
			if (Fila == 2)
			{
				NuevaNaveCaza->Destroy();
			}
		}
		ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasKamikaze = 1;
	const int32 NumeroDeFilasKamikaze = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasKamikaze; ++Columna)
	{
		TArray<ANaveEnemigaKamikaze*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasKamikaze; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 0.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaKamikaze* NuevaNaveKamikaze = GetWorld()->SpawnActor<ANaveEnemigaKamikaze>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveKamikaze);
			if (Fila % 2 == 1)
			{
				NuevaNaveKamikaze->Destroy();
			}
		}
		ColumnaNavesEnemigasKamikaze.Add(Columna, NavesEnColumna);
	}




	Nodriza = GetWorld()->SpawnActor<ANaveEnemigaNodriza>(ANaveEnemigaNodriza::StaticClass());
	Caza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass());
	Transporte = GetWorld()->SpawnActor<ANaveEnemigaTransporte>(ANaveEnemigaTransporte::StaticClass());

	Capsula = GetWorld()->SpawnActor<ACapsulaBridge>(ACapsulaBridge::StaticClass());

	
	}

}


void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TimerController += DeltaTime;

	if (TimerController >= 5.0f && TimerController <= 5.05f) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Caza:")), true, FVector2D(1.5f, 1.5f));
		Capsula->EstablecerPersonaje(Caza);
		Capsula->VerificarCapsulaConsumida("consumida", 5.0f);
		Capsula->TiposCapsulas("Velocidad");
		Capsula->EmplearCapsula();
	}
	if (TimerController >= 10.0f && TimerController <= 10.05f) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Transporte:")), true, FVector2D(1.5f, 1.5f));
		Capsula->EstablecerPersonaje(Transporte);
		Capsula->VerificarCapsulaConsumida("consumida", 5.0f);
		Capsula->TiposCapsulas("Fuerza");
		Capsula->EmplearCapsula();
	}
	if (TimerController >= 15.0f && TimerController <= 15.05f) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Nodriza:")), true, FVector2D(1.5f, 1.5f));
		Capsula->EstablecerPersonaje(Nodriza);
		Capsula->VerificarCapsulaConsumida("noconsumida", 5.0f);
		Capsula->TiposCapsulas("Debilitar");
		Capsula->EmplearCapsula();
	}
}