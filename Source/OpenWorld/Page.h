// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PageActor.h"
#include "Page.generated.h"

UCLASS()
class OPENWORLD_API APage : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APage();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};
