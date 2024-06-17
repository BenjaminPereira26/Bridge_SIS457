// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IImplementacion.h"
#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCaza : public ANaveEnemiga, public IIImplementacion
{
	GENERATED_BODY()
private:
	int cantidadBombas;

public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Recargar();
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