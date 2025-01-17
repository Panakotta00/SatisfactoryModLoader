// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameMode.h"
#include "FGCharacterPlayer.h"
#include "FGGameState.h"
#include "FGHUD.h"
#include "FGPlayerState.h"

AFGGameMode::AFGGameMode() : Super() {
	this->mSaveSession = nullptr;
	this->mLastAutosaveId = 255;
	this->mSaveSessionName = TEXT("");
	this->mStartingPointTagName = TEXT("None");
	this->mAllowPossessAny = false;
	this->mDebugStartingPointTagName = TEXT("None");
	this->mDefaultRemoteCallObjectsClassNames.Add(FSoftClassPath("/Game/FactoryGame/Character/Player/BP_RemoteCallObject.BP_RemoteCallObject_C"));
	this->mDefaultRemoteCallObjectsClassNames.Add(FSoftClassPath("/Script/FactoryGame.FGBoomBoxRemoteCallObject"));
	this->mServerRestartTimeHours = 24.0;
	this->mIsMainMenu = false;
	this->InactivePlayerStateLifeSpan = 0.0;
	this->GameStateClass = AFGGameState::StaticClass();
	this->PlayerStateClass = AFGPlayerState::StaticClass();
	this->HUDClass = AFGHUD::StaticClass();
	this->DefaultPawnClass = AFGCharacterPlayer::StaticClass();
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = false;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AFGGameMode::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGGameMode::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameMode::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameMode::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameMode::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameMode::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGGameMode::NeedTransform_Implementation(){ return bool(); }
bool AFGGameMode::ShouldSave_Implementation() const{ return bool(); }
void AFGGameMode::FinishRestartPlayer(AController* NewPlayer, const FRotator& StartRotation){ }
void AFGGameMode::InitGame(const FString& mapName, const FString& options, FString& out_errorMessage){ }
APawn* AFGGameMode::SpawnDefaultPawnAtTransform_Implementation(AController* newPlayer, const FTransform& spawnTransform){ return nullptr; }
void AFGGameMode::InitGameState(){ }
bool AFGGameMode::AllowCheats(APlayerController* p){ return bool(); }
AActor* AFGGameMode::ChoosePlayerStart_Implementation(AController* player){ return nullptr; }
void AFGGameMode::RestartPlayer(AController* newPlayer){ }
APlayerController* AFGGameMode::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage){ return nullptr; }
bool AFGGameMode::IsPaused() const{ return bool(); }
void AFGGameMode::PostLogin(APlayerController* newPlayer){ }
void AFGGameMode::Logout(AController* exiting){ }
bool AFGGameMode::FindInactivePlayer(APlayerController* PC){ return bool(); }
void AFGGameMode::GenericPlayerInitialization(AController* C){ }
void AFGGameMode::PostActorsInitialized(const UWorld::FActorsInitializedParams& inParams){ }
uint8 AFGGameMode::GenerateNextAutosaveId(){ return uint8(); }
void AFGGameMode::SetSaveSessionName(FString name){ }
bool AFGGameMode::ShouldSetupSave() const{ return bool(); }
bool AFGGameMode::GetDefaultPlayerCapsuleSize(UWorld* world, float& out_capsuleRadius, float& out_capsuleHalfHeight){ return bool(); }
bool AFGGameMode::RegisterRemoteCallObjectClass(TSubclassOf< UFGRemoteCallObject > inClass){ return bool(); }
void AFGGameMode::RegisterCallObjectOnAllCurrentPlayers(TSubclassOf<UFGRemoteCallObject> inClass){ }
void AFGGameMode::RebootSession(){ }
bool AFGGameMode::ShouldSkipOnboarding() const{ return bool(); }
void AFGGameMode::SetServerRestartWorldTime(float worldTime){ }
void AFGGameMode::TriggerWorldSave(FString saveGameName){ }
void AFGGameMode::TriggerBundledWorldSave(FString saveGameName){ }
bool AFGGameMode::IsValidPawnToReclaim(APawn* pawn) const{ return bool(); }
void AFGGameMode::GetRestartSessionSaveName(FString& out_sessionName) const{ }
void AFGGameMode::BuildRestartSessionURL(const FString& saveName, FString& out_sessionUrl) const{ }
APlayerStart* AFGGameMode::CachePlayerStarts(TMap< FName, TArray<  APlayerStart* > >& out_playerStarts){ return nullptr; }
void AFGGameMode::PartitionPlayerStartsByOccupancy(const TArray<  APlayerStart* >& playerStarts,
		TSubclassOf<  APawn > pawnClassToFit,
		TArray<  APlayerStart* >& out_unOccupied,
		TArray<  APlayerStart* >& out_occupied){ }
bool AFGGameMode::CompareUniqueNetIdBetweenOSS(const FUniqueNetIdRepl& newID, const FUniqueNetIdRepl& savedID){ return bool(); }
