// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SplineComponent.h"
#include "SimEngine.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMPLETRAFFICSIM_API USimEngine : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USimEngine();
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Component")
	AActor *Owner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component")
	USplineComponent  *CurSpline=nullptr, *NextSpline=nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float CurDist = 0, Speed = 0, DeltaMove = 0;

	UFUNCTION(BlueprintCallable,Category)

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
