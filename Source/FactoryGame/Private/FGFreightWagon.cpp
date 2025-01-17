// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFreightWagon.h"
#include "FGRailroadVehicleMovementComponent.h"

AFGFreightWagon::AFGFreightWagon() : Super() {
	this->mInteractWidgetClass = nullptr;
	this->mFreightCargoType = EFreightCargoType::FCT_NONE;
	this->mTransitoryCargoType = EFreightCargoType::FCT_NONE;
	this->mVehicleMovement = CreateDefaultSubobject<UFGRailroadVehicleMovementComponent>(TEXT("MovementComp"));
	this->mStorageInventory = nullptr;
	this->mContainerMeshStandard = nullptr;
	this->mContainerMeshLiquid = nullptr;
	this->mInventorySize = 24;
	this->mFluidStackSizeDefault = EStackSize::SS_ONE;
	this->mFluidStackSizeMultiplier = 0;
	this->mCargoMeshComponent = nullptr;
	this->mCargoMeshComponentDerailedTransform = FTransform(FQuat::Identity, FVector::ZeroVector, FVector::OneVector);
}
void AFGFreightWagon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGFreightWagon, mStorageInventory);
	DOREPLIFETIME(AFGFreightWagon, mCargoMeshComponentDerailedTransform);
}
void AFGFreightWagon::BeginPlay(){ }
void AFGFreightWagon::Tick(float dt){ }
UPawnMovementComponent* AFGFreightWagon::GetMovementComponent() const{ return nullptr; }
UFGRailroadVehicleMovementComponent* AFGFreightWagon::GetRailroadVehicleMovementComponent() const{ return nullptr; }
FText AFGFreightWagon::GetLookAtDecription_Implementation(AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGFreightWagon::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGFreightWagon::IsUseable_Implementation() const{ return bool(); }
UFGInventoryComponent* AFGFreightWagon::GetFreightInventory() const{ return nullptr; }
void AFGFreightWagon::SetCargoMeshVisibility(bool isVisible){ }
void AFGFreightWagon::UpdateFreightCargoType(EFreightCargoType forceType){ }
void AFGFreightWagon::UpdateFreightPayloadMass(){ }
bool AFGFreightWagon::CanDockWithPlatformOfType(EFreightCargoType platformType) const{ return bool(); }
void AFGFreightWagon::KillOverlappedCharacters(){ }
void AFGFreightWagon::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGFreightWagon::OnItemAddedToFreight(TSubclassOf<  UFGItemDescriptor > itemClass, int32 numAdded){ }
void AFGFreightWagon::OnItemRemovedFromFreight(TSubclassOf<  UFGItemDescriptor > itemClass, int32 numRemoved){ }
void AFGFreightWagon::InitializeInventoryComponent(){ }
void AFGFreightWagon::OnRep_StorageInventory(){ }
UStaticMesh* AFGFreightWagon::GetCargoStaticMesh(){ return nullptr; }
float AFGFreightWagon::GetInventoryFilledPercentage() const{ return float(); }
FName AFGFreightWagon::VehicleMovementComponentName = FName();
FName AFGFreightWagon::CargoMeshComponentName = FName();
