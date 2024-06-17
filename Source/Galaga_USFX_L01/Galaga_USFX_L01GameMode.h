// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaEspia;
class ANaveEnemigaKamikaze;
class ANaveEnemigaNodriza;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaTransporte;
class ACapsulaEnergia50pts;
class ACapsulaEnergia100pts;
class ACapsulaEnergia200pts;
class ACapsulaBridge;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;
	TArray<ANaveEnemigaKamikaze*> TANavesEnemigasKamikaze;
	TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;
	TArray<ANaveEnemigaReabastecimiento*> TANavesEnemigasReabastecimiento;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	TArray<ACapsulaEnergia50pts*> TACapsulasEnergia50pts;
	TArray<ACapsulaEnergia100pts*> TACapsulasEnergia100pts;
	TArray<ACapsulaEnergia200pts*> TACapsulasEnergia200pts;
	TArray<ACapsulaBridge*> TACapsulasBridge;
private:
	int TiempoTranscurrido;
	float TimerController;

public:
	virtual void Tick(float DeltaTime) override;

public:
	// Inicialización del TMap
	TMap<int32, TArray<ANaveEnemigaCaza*>> ColumnaNavesEnemigasCaza;
	TMap<int32, TArray<ANaveEnemigaEspia*>> ColumnaNavesEnemigasEspia;
	TMap<int32, TArray<ANaveEnemigaKamikaze*>> ColumnaNavesEnemigasKamikaze;
	TMap<int32, TArray<ANaveEnemigaNodriza*>> ColumnaNavesEnemigasNodriza;
	TMap<int32, TArray<ANaveEnemigaReabastecimiento*>> ColumnaNavesEnemigasReabastecimiento;
	TMap<int32, TArray<ANaveEnemigaTransporte*>> ColumnaNavesEnemigasTransporte;
	TMap<int32, TArray<ACapsulaEnergia50pts*>> ColumnaCapsulasEnergia50pts;
	TMap<int32, TArray<ACapsulaEnergia100pts*>> ColumnaCapsulasEnergia100pts;
	TMap<int32, TArray<ACapsulaEnergia200pts*>> ColumnaCapsulasEnergia200pts;
	TMap<int32, TArray<ACapsulaBridge*>> ColumnaCapsulasBridge;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ACapsulaBridge* Capsula;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ANaveEnemigaCaza* Caza;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ANaveEnemigaNodriza* Nodriza;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ANaveEnemigaTransporte* Transporte;

};