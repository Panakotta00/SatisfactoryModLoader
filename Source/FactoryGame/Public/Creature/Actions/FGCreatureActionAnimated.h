// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"
#include "Creature/Actions/FGCreatureActionAnimatedBase.h"
#include "FGCreatureActionAnimated.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class FACTORYGAME_API UFGCreatureActionAnimated : public UFGCreatureActionAnimatedBase
{
	GENERATED_BODY()
public:
	UFGCreatureActionAnimated( const FObjectInitializer& ObjectInitializer );

	// Begin UFGAction Interface
	virtual void PerformAction_Implementation() override;
	// End UFGAction Interface

	// Begin UFGCreatureActionAnimatedBase Interface
	virtual void OnAnimationFinished_Implementation( class UAnimMontage* montage, bool WasInterrupted ) override;
	// End UFGCreatureActionAnimatedBase Interface
	
protected:
	/** Animation to play when starting the action. */
	UPROPERTY( EditDefaultsOnly, Category = "Animation" )
	class UAnimMontage* mActionMontage;

	/** Whether or not to start the animation of the action immediately. */
	UPROPERTY( EditDefaultsOnly, Category = "Animation" )
	bool mAutoStartAnimation;
};
