// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IImplementacion.h"
#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodriza : public ANaveEnemiga, public IIImplementacion
{
	GENERATED_BODY()
private:
	int cantSoldados;
	int intervaloDespliegue;
	int numSoldDespliegue;

public:
	ANaveEnemigaNodriza();
	FORCEINLINE int GetCantSoldados() const { return cantSoldados; }
	FORCEINLINE int GetIntervaloDespliegue() const { return intervaloDespliegue; }
	FORCEINLINE int GetNumSoldDespliegue() const { return numSoldDespliegue; }

	FORCEINLINE void SetCantSoldados(int _cantSoldados) { cantSoldados = _cantSoldados; }
	FORCEINLINE void SetIntervaloDespliegue(int _intervaloDespliegue) { intervaloDespliegue = _intervaloDespliegue; }
	FORCEINLINE void SetNumSoldDespliegue(int _numSoldDespliegue) { numSoldDespliegue = _numSoldDespliegue; }

protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Desplegar();
public:
	virtual void Tick(float DeltaTime) override;

public:
	bool CapsulaConsumida(FString _consumida) override;
	void HabilitarCapsula(float _tiempo) override;
	bool DesHabilitarCapsula() override;
	FString ObtenerTipoPoder() override;
	void EstablecerTipoPoder(FString _Poder) override;

protected:
	float TiempoCapsula;
	FString TipoPoder;
	bool VerificarCapsula;
};
