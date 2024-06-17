// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int energiaCamuflaje;

public:
	ANaveEnemigaEspia();
	FORCEINLINE int GetEnergiaCamuflaje() const { return energiaCamuflaje; }
	FORCEINLINE void SetEnergiaCamuflaje(int _energiaCamuflaje) { energiaCamuflaje = _energiaCamuflaje; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Esconderse();
public:
	virtual void Tick(float DeltaTime) override;
};
