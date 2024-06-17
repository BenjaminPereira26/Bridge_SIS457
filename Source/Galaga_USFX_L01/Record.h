// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Record.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ARecord : public AActor
{
	GENERATED_BODY()

private:
	int numPuntos;
	FVector posicion;

public:
	FORCEINLINE int GetNumPuntos() const { return numPuntos; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	FORCEINLINE void SetNumPuntos(int _numPuntos) { numPuntos = _numPuntos; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
public:	
	// Sets default values for this actor's properties
	ARecord();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
