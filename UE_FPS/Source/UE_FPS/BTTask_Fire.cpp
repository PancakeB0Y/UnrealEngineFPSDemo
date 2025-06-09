// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Fire.h"
#include "NPC_AIController.h"
#include "NPC.h"

UBTTask_Fire::UBTTask_Fire()
{
	NodeName = TEXT("Fire");
}

EBTNodeResult::Type UBTTask_Fire::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// if we are out of range, do not attack the player
	auto const OutOfRange = !OwnerComp.GetBlackboardComponent()->GetValueAsBool(GetSelectedBlackboardKey());
	if (OutOfRange)
	{
		//finish the task
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}

	// get controller and NPC
	auto const* const cont = Cast<ANPC_AIController>(OwnerComp.GetAIOwner());
	auto* const npc = Cast<ANPC>(cont->GetPawn());

	// if the npc support the ICombatInterface, cast and call the Execute_Fire function
	if(auto* const icombat = Cast<ICombatInterface>(npc))
	{
		icombat->Execute_Fire(npc);
	}

	//finish the task
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Type();
}
