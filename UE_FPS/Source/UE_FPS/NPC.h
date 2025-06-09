// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <BehaviorTree/BehaviorTree.h>
#include "GameFramework/Character.h"
#include "FPSProjectile.h"
#include "CombatInterface.h"
#include "FPSCharacterBase.h"
#include "NPC.generated.h"

UCLASS()
class UE_FPS_API ANPC : public AFPSCharacterBase, public ICombatInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPC();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UBehaviorTree* GetBehaviorTree() const;

	void Fire_Implementation() override;

	// Gun muzzle offset from the camera location.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	// How often the npc can fire
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float FireRate = 0.5f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
	UBehaviorTree* Tree;

	// Projectile class to spawn.
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AFPSProjectile> ProjectileClass;

private:
	bool CanFire = true;

	FTimerHandle FireRateTimerHandle;

	void ResetCanFire();
};
