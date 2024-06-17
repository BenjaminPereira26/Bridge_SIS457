// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapsulaEnergia.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ACapsulaEnergia : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaEnergia;
protected:
	float velocidad;
	int cantEnergia;
	float limiteX;

public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetCantEnergia() const { return cantEnergia; }
	FORCEINLINE float GetLimiteX() const { return limiteX; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetCantEnergia(float _cantEnergia) { cantEnergia = _cantEnergia; }
	FORCEINLINE void SetLimiteX(float _limiteX) { limiteX = _limiteX; }
	
public:	
	ACapsulaEnergia();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	void Mover(float DeltaTime) PURE_VIRTUAL(ACapsulaEnergia::Mover, );

};
