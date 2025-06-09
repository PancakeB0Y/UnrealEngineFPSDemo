// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacterBase.h"
#include "Components/WidgetComponent.h"
#include "HealthBarWidget.h"
#include "FPSCharacter.h"
#include "NPC.h"

// Sets default values
AFPSCharacterBase::AFPSCharacterBase() :
	WidgetComponent{CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthValue"))},
	Health{MaxHealth}
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (WidgetComponent) {
		WidgetComponent->SetupAttachment(RootComponent);
		WidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
		WidgetComponent->SetRelativeLocation(FVector(0, 0, 95.f));
		static ConstructorHelpers::FClassFinder<UUserWidget> WidgetClass(TEXT("/Game/UI/BP_HealthBar"));
		if(WidgetClass.Succeeded())
		{
			WidgetComponent->SetWidgetClass(WidgetClass.Class);
		}
	}
}

// Called when the game starts or when spawned
void AFPSCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (auto const widget = Cast<UHealthBarWidget>(WidgetComponent->GetUserWidgetObject()))
	{
		widget->SetBarValuePercent(Health / MaxHealth);
	}
}

// Called to bind functionality to input
void AFPSCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AFPSCharacterBase::GetHealth() const
{
	return Health;
}

float AFPSCharacterBase::GetMaxHealth() const
{
	return MaxHealth;
}

void AFPSCharacterBase::SetHealth(float const NewHealth)
{
	Health = NewHealth;

	if (Cast<AFPSCharacter>(this)) 
	{
		if (Health <= 0) 
		{
			UE_LOG(LogTemp, Error, TEXT("You Lose!!!"));
			GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Health: %f"), Health));
		}
	}
	else if (Cast<ANPC>(this)) 
	{
		if (Health <= 0)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Enemy killed"));
			Destroy();
		}
	}
}

