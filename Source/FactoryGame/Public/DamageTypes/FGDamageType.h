// Copyright 2016-2021 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"

#include "GameFramework/DamageType.h"
#include "FGDamageType.generated.h"

UCLASS(EditInlineNew, DefaultToInstanced)
class FACTORYGAME_API UFGDamageType : public UDamageType
{
	GENERATED_BODY()
public:
	/** ctor */
	UFGDamageType( const FObjectInitializer& ObjectInitializer );

	UFUNCTION( BlueprintCallable )
	virtual void ProcessDamage( const FHitResult& hitResult, class AController* instigator, AActor* damageCauser, float damageAmount, TArray<AActor*> ignoredActors );

	UFUNCTION()
	void SpawnEffects(const FHitResult& hitResult, AActor* outer);

	/** When pawn take damage from a source, they play this take damage event */
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "SFX" )
	class UAkAudioEvent* mImpactAudioEvent;

	/** When pawn take damage from a source, they play this take damage event */
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "VFX" )
	class UParticleSystem* mImpactParticle;

	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "VFX" )
	bool mAttachParticleToTarget;

	/** Should this damage type hurt destrucrible actors? */
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "DamageType" )
	bool mShouldDamageDestructible;

	/** Amount of base damage dealt by this damage type */
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "DamageType" )
	float mDamageAmount;

	/** Always causes stun if this is set, overriding stun damage calculations  */
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "DamageType" )
	bool mAlwaysCauseStun;
};

UENUM()
enum EDamageModifierType
{
	DMT_Multiplicative UMETA( DisplayName="Multiplicative" ),
	DMT_Additive UMETA( DisplayName="Additive" )
};

USTRUCT(BlueprintType)
struct FDamageModifier
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Modifier")
	TSubclassOf<UFGDamageType> DamageType;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Modifier")
	TEnumAsByte<EDamageModifierType> DamageModifierType;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Modifier")
	float DamageModifier;

	UPROPERTY(BlueprintReadWrite, Category= "Modifiers")
	UObject* AppliedBy;

	FDamageModifier()
	{
		DamageType = nullptr;
		DamageModifierType = DMT_Multiplicative;
		DamageModifier = 1.0f;
		AppliedBy = nullptr;
	}
};
