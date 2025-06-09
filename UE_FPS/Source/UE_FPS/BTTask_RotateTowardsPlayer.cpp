// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_RotateTowardsPlayer.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NPC_AIController.h"
#include "NPC.h"

UBTTask_RotateTowardsPlayer::UBTTask_RotateTowardsPlayer(FObjectInitializer const& ObjectInitializer)
{
	NodeName = TEXT("Rotate Towards Player");
}

EBTNodeResult::Type UBTTask_RotateTowardsPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// get target location from blackboard via the NPC's controller
	if (auto const * const cont = Cast<ANPC_AIController>(OwnerComp.GetAIOwner()))
	{
		if(auto* const npc = Cast<ANPC>(cont->GetPawn()))
		{
			auto const PawnLocation = npc->GetActorLocation();
			auto const PlayerLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(GetSelectedBlackboardKey());

			// calcute direction towards player
			auto Direction = PlayerLocation - PawnLocation;
			Direction.Z = 0; // keep rotation in the horizontal plane

			// rotate towards player's location
			if (!Direction.IsNearlyZero())
			{
				FRotator DesiredRotation = Direction.Rotation();

				npc->SetActorRotation(DesiredRotation);
			}

			// finish with success
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}

	return EBTNodeResult::Failed;
}
