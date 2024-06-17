// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantEnergia;

public:
	ANaveEnemigaReabastecimiento();
	FORCEINLINE int GetCantEnergia() const { return cantEnergia; }
	
	FORCEINLINE void SetCantEnergia(int _cantEnergia) { cantEnergia = _cantEnergia; }

protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void DistribuirEnemiga();
public:
	virtual void Tick(float DeltaTime) override;
};
