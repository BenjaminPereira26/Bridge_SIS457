// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vidas.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AVidas : public AActor
{
	GENERATED_BODY()
	
private:
	int numVidas;
	FVector posicion;

public:
	FORCEINLINE int GetNumVidas() const { return numVidas; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	FORCEINLINE void SetNumVidas(int _numVidas) { numVidas = _numVidas; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

public:	
	// Sets default values for this actor's properties
	AVidas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
