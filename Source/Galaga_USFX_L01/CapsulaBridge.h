// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CapsulaEnergia.h"
#include "CapsulaBridge.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACapsulaBridge : public ACapsulaEnergia
{
	GENERATED_BODY()
public:
	ACapsulaBridge();

protected:
	virtual void Mover(float DeltaTime);

public:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	float velocidad;

public:
	void EstablecerPersonaje(AActor* _Personaje);
	void VerificarCapsulaConsumida(FString _consumida, float _tiempo);
	void TiposCapsulas(FString _capsulas);
	void EmplearCapsula();

protected:
	class IIImplementacion* personaje;
};
