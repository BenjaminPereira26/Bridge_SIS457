// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IImplementacion.h"
#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporte : public ANaveEnemiga, public IIImplementacion
{
	GENERATED_BODY()
private:
	float capacidadCargaPeso;
	float capacidadCargaVolumen;


public:
	ANaveEnemigaTransporte();
	FORCEINLINE float GetCapacidadCargaPeso() const { return capacidadCargaPeso; }
	FORCEINLINE void SetCapacidadCargaPeso(float capacidad) { capacidadCargaPeso = capacidad; }
	FORCEINLINE float GetCapacidadCargaVolumen() const { return capacidadCargaVolumen; }
	FORCEINLINE void SetCapacidadCargaVolumen(float capacidad) { capacidadCargaVolumen = capacidad; }

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
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