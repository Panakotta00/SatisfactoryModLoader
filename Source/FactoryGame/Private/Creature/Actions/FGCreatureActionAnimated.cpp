// This file has been automatically generated by the Unreal Header Implementation tool

#include "Creature/Actions/FGCreatureActionAnimated.h"

UFGCreatureActionAnimated::UFGCreatureActionAnimated(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mActionMontage = nullptr;
	this->mAutoStartAnimation = true;
}
void UFGCreatureActionAnimated::PerformAction_Implementation(){ }
void UFGCreatureActionAnimated::OnAnimationFinished_Implementation( UAnimMontage* montage, bool WasInterrupted){ }