// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaBridge.h"
#include "IImplementacion.h"

ACapsulaBridge::ACapsulaBridge()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaEnergia->SetStaticMesh(CapsulaMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 10;
	limiteX = -200.0f;
}

void ACapsulaBridge::Mover(float DeltaTime)
{

	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < limiteX) {

		FVector PosicionRet = GetActorLocation();
		SetActorLocation(FVector(1900.0f, PosicionRet.Y, PosicionRet.Z));

	}
}

void ACapsulaBridge::BeginPlay()
{
	Super::BeginPlay();
}

void ACapsulaBridge::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ACapsulaBridge::EstablecerPersonaje(AActor* _Personaje)
{
	personaje = Cast<IIImplementacion>(_Personaje);
}

void ACapsulaBridge::VerificarCapsulaConsumida(FString _consumida, float _tiempo)
{
	if (personaje->CapsulaConsumida(_consumida))
	{
		personaje->HabilitarCapsula(_tiempo);
	}
	else
	{
		personaje->DesHabilitarCapsula();
	}
}

void ACapsulaBridge::TiposCapsulas(FString _capsulas)
{
	if (personaje->DesHabilitarCapsula())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("La capsula no fue consumida")));
	}
	else {
		if (_capsulas.Equals("Debilitar"))
		{
			personaje->EstablecerTipoPoder("Debilitar");
		}
		if (_capsulas.Equals("Enloquecido"))
		{
			personaje->EstablecerTipoPoder("Enloquecido");
		}
		if (_capsulas.Equals("Velocidad"))
		{
			personaje->EstablecerTipoPoder("Velocidad");
		}
		if (_capsulas.Equals("Fuerza"))
		{
			personaje->EstablecerTipoPoder("Fuerza");
		}
	}
}

void ACapsulaBridge::EmplearCapsula()
{
	if (personaje->DesHabilitarCapsula())
	{
		return;
	}
	else {
		FString poder = personaje->ObtenerTipoPoder();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("El poder es: %s"), *poder));
	}
}
