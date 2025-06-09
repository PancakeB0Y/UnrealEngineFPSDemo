// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_IsPlayerInShootRange.h"
#include "NPC_AIController.h"
#include "NPC.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTService_IsPlayerInShootRange::UBTService_IsPlayerInShootRange()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("Is Player in Shoot Range");
}

void UBTService_IsPlayerInShootRange::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// get controller and NPC
	auto const * const cont = Cast<ANPC_AIController>(OwnerComp.GetAIOwner());
	auto const * const npc = Cast<ANPC>(cont->GetPawn());

	// get player character
	auto const* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	// write true or false to the blackboard key, depending on whether or not the player is in range
	OwnerComp.GetBlackboardComponent()->SetValueAsBool(
		GetSelectedBlackboardKey(),
		npc->GetDistanceTo(player) <= ShootRange);
}
