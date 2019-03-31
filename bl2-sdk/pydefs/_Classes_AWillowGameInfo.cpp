#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowGameInfo(py::module &m)
{
    py::class_< AWillowGameInfo,  AGearboxGameInfo   >(m, "AWillowGameInfo")
		.def_static("StaticClass", &AWillowGameInfo::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIDesignerAttributeProvider", &AWillowGameInfo::VfTable_IIDesignerAttributeProvider)
        .def_readwrite("VfTable_IIAIInterface", &AWillowGameInfo::VfTable_IIAIInterface)
        .def_readwrite("AdjustedDifficulty", &AWillowGameInfo::AdjustedDifficulty)
        .def_readwrite("PIESpawnInVehicleName", &AWillowGameInfo::PIESpawnInVehicleName)
        .def_readwrite("LastPlayerStartSpot", &AWillowGameInfo::LastPlayerStartSpot)
        .def_readwrite("LastStartSpot", &AWillowGameInfo::LastStartSpot)
        .def_readwrite("VehicleList", &AWillowGameInfo::VehicleList)
        .def_readwrite("MyGlobals", &AWillowGameInfo::MyGlobals)
        .def_readwrite("GlobalSkillManager", &AWillowGameInfo::GlobalSkillManager)
        .def_readwrite("GlobalPlayerInteractionManager", &AWillowGameInfo::GlobalPlayerInteractionManager)
        .def_readwrite("GlobalChallengeManager", &AWillowGameInfo::GlobalChallengeManager)
        .def_readwrite("GlobalCombatMusicManager", &AWillowGameInfo::GlobalCombatMusicManager)
        .def_readwrite("GlobalPlayerStatsNotifier", &AWillowGameInfo::GlobalPlayerStatsNotifier)
        .def_readwrite("GlobalBlackMarketUpgradeManager", &AWillowGameInfo::GlobalBlackMarketUpgradeManager)
        .def_readwrite("DesignerAttributes", &AWillowGameInfo::DesignerAttributes)
        .def_readwrite("ReturnTeleporter", &AWillowGameInfo::ReturnTeleporter)
        .def_readwrite("PersonalTeleporter", &AWillowGameInfo::PersonalTeleporter)
        .def_readwrite("TeleporterDestinationName", &AWillowGameInfo::TeleporterDestinationName)
        .def_readwrite("PlayerObservers", &AWillowGameInfo::PlayerObservers)
        .def_readwrite("MapChangeInitiated", &AWillowGameInfo::MapChangeInitiated)
        .def_readwrite("MapChangePlayerDown", &AWillowGameInfo::MapChangePlayerDown)
        .def_readwrite("MapChangePlayerInMenu", &AWillowGameInfo::MapChangePlayerInMenu)
        .def_readwrite("MapChangeYouAreInMenu", &AWillowGameInfo::MapChangeYouAreInMenu)
        .def_readwrite("MapChangeMissingDLC", &AWillowGameInfo::MapChangeMissingDLC)
        .def_readwrite("MapChangeNeedInstallMissingDLC", &AWillowGameInfo::MapChangeNeedInstallMissingDLC)
        .def_readwrite("MapChangeUpsellMissingDLC", &AWillowGameInfo::MapChangeUpsellMissingDLC)
        .def_readwrite("MapChangeCountdown", &AWillowGameInfo::MapChangeCountdown)
        .def_readwrite("MapChangeCanceledPlayerDown", &AWillowGameInfo::MapChangeCanceledPlayerDown)
        .def_readwrite("MapChangeCanceledPlayerMenu", &AWillowGameInfo::MapChangeCanceledPlayerMenu)
        .def_readwrite("MapChangePlayerIsSaving", &AWillowGameInfo::MapChangePlayerIsSaving)
        .def_readwrite("MapChangeCanceledPlayerIsSaving", &AWillowGameInfo::MapChangeCanceledPlayerIsSaving)
        .def_readwrite("MapChangePlayerJoining", &AWillowGameInfo::MapChangePlayerJoining)
        .def_readwrite("MapChangeUnknownPlayerJoining", &AWillowGameInfo::MapChangeUnknownPlayerJoining)
        .def_readwrite("MapChangeCanceledPlayerJoining", &AWillowGameInfo::MapChangeCanceledPlayerJoining)
        .def_readwrite("MapChangeCanceledUnknownPlayerJoining", &AWillowGameInfo::MapChangeCanceledUnknownPlayerJoining)
        .def_readwrite("MapChangePlayerDueling", &AWillowGameInfo::MapChangePlayerDueling)
        .def_readwrite("MapChangeCanceledPlayerDueling", &AWillowGameInfo::MapChangeCanceledPlayerDueling)
        .def_readwrite("MapChangePlayerRespawn", &AWillowGameInfo::MapChangePlayerRespawn)
        .def_readwrite("MapChangeCanceledPlayerRespawn", &AWillowGameInfo::MapChangeCanceledPlayerRespawn)
        .def_readwrite("TravelCountdownTime", &AWillowGameInfo::TravelCountdownTime)
        .def_readwrite("TravelPostCountdownTime", &AWillowGameInfo::TravelPostCountdownTime)
        .def_readwrite("TravelBehavior", &AWillowGameInfo::TravelBehavior)
        .def_readwrite("TravelEventInterface", &AWillowGameInfo::TravelEventInterface)
        .def_readwrite("TravelStationDef", &AWillowGameInfo::TravelStationDef)
        .def_readwrite("TravelInstigator", &AWillowGameInfo::TravelInstigator)
        .def_readwrite("NewShopInventory", &AWillowGameInfo::NewShopInventory)
        .def_readwrite("SecondsUntilShopsReset", &AWillowGameInfo::SecondsUntilShopsReset)
        .def_readwrite("ShopTimerRate", &AWillowGameInfo::ShopTimerRate)
        .def_readwrite("ShopTimerRateBaseValue", &AWillowGameInfo::ShopTimerRateBaseValue)
        .def_readwrite("ShopTimerRateModifierStack", &AWillowGameInfo::ShopTimerRateModifierStack)
        .def_readwrite("LastShopResetTime", &AWillowGameInfo::LastShopResetTime)
        .def_readwrite("SecondsUntilShopTimerResend", &AWillowGameInfo::SecondsUntilShopTimerResend)
        .def_readwrite("NewShopInventoryDisplayTime", &AWillowGameInfo::NewShopInventoryDisplayTime)
        .def_readwrite("NewShopInventoryDisplayColor", &AWillowGameInfo::NewShopInventoryDisplayColor)
        .def_readwrite("RecordedDialogEvents", &AWillowGameInfo::RecordedDialogEvents)
        .def_readwrite("AIBlackboards", &AWillowGameInfo::AIBlackboards)
        .def_readwrite("StartGameTimer", &AWillowGameInfo::StartGameTimer)
        .def_readwrite("StartGameState", &AWillowGameInfo::StartGameState)
        .def_readwrite("PlayersThatHaveSeenTheCharacterSelect", &AWillowGameInfo::PlayersThatHaveSeenTheCharacterSelect)
        .def_readwrite("PlayersThatHaveSelectedACharacter", &AWillowGameInfo::PlayersThatHaveSelectedACharacter)
        .def_readwrite("PlayersThatHaveReceivedAPawn", &AWillowGameInfo::PlayersThatHaveReceivedAPawn)
        .def_readwrite("CharacterSelectTimeInSeconds", &AWillowGameInfo::CharacterSelectTimeInSeconds)
        .def_readwrite("CharacterSelectQuickStartTimeInSeconds", &AWillowGameInfo::CharacterSelectQuickStartTimeInSeconds)
        .def_readwrite("NextNameListIndex", &AWillowGameInfo::NextNameListIndex)
        .def("GetNameListIndex", &AWillowGameInfo::GetNameListIndex)
        .def("DriverLeftVehicle", &AWillowGameInfo::DriverLeftVehicle)
        .def("DriverEnteredVehicle", &AWillowGameInfo::DriverEnteredVehicle)
        .def("ClientsShouldSeeLobby", &AWillowGameInfo::ClientsShouldSeeLobby)
        .def("UpdateBestNextHosts", &AWillowGameInfo::UpdateBestNextHosts)
        .def("UpdateTookDamageFromEnemyStats", &AWillowGameInfo::UpdateTookDamageFromEnemyStats)
        .def("UpdateWaypoints", &AWillowGameInfo::UpdateWaypoints)
        .def("CheckAllClientsLoaded", &AWillowGameInfo::CheckAllClientsLoaded)
        .def("eventPostSeamlessTravel", &AWillowGameInfo::eventPostSeamlessTravel)
        .def("eventGetSeamlessTravelActorList", &AWillowGameInfo::eventGetSeamlessTravelActorList)
        .def("GenericPlayerInitialization", &AWillowGameInfo::GenericPlayerInitialization)
        .def("TellClientsToSetSessionInviteFlags", &AWillowGameInfo::TellClientsToSetSessionInviteFlags)
        .def("PlayerRemoved", &AWillowGameInfo::PlayerRemoved)
        .def("PlayerAdded", &AWillowGameInfo::PlayerAdded)
        .def("PlayerReceivedPawn", &AWillowGameInfo::PlayerReceivedPawn)
        .def("PlayerSelectedCharacter", &AWillowGameInfo::PlayerSelectedCharacter)
        .def("PlayerOpenedCharacterSelect", &AWillowGameInfo::PlayerOpenedCharacterSelect)
        .def("HandlePublicGame", &AWillowGameInfo::HandlePublicGame)
        .def("TestStartGame", &AWillowGameInfo::TestStartGame)
        .def("EndStartGame", &AWillowGameInfo::EndStartGame)
        .def("BeginStartGame", &AWillowGameInfo::BeginStartGame)
        .def("ClearStartGameTimer", &AWillowGameInfo::ClearStartGameTimer)
        .def("UpdateStartGameTimer", &AWillowGameInfo::UpdateStartGameTimer)
        .def("SetStartGameTimer", &AWillowGameInfo::SetStartGameTimer)
        .def("UpdateStartGameState", &AWillowGameInfo::UpdateStartGameState)
        .def("StartNewGame", &AWillowGameInfo::StartNewGame)
        .def("RegisterServer", &AWillowGameInfo::RegisterServer)
        .def("IsHardcoreMode", &AWillowGameInfo::IsHardcoreMode)
        .def("SetHardcoreMode", &AWillowGameInfo::SetHardcoreMode)
        .def("CleanAIBlackBoards", &AWillowGameInfo::CleanAIBlackBoards)
        .def("GetAIBlackboard", &AWillowGameInfo::GetAIBlackboard, py::return_value_policy::reference)
        .def("InitSequence", &AWillowGameInfo::InitSequence)
        .def("GetAllegiance", &AWillowGameInfo::GetAllegiance, py::return_value_policy::reference)
        .def("GetAIDefinition", &AWillowGameInfo::GetAIDefinition, py::return_value_policy::reference)
        .def("GetAIComponent", &AWillowGameInfo::GetAIComponent, py::return_value_policy::reference)
        .def("GetAIParent", &AWillowGameInfo::GetAIParent, py::return_value_policy::reference)
        .def("GetAILocation", &AWillowGameInfo::GetAILocation)
        .def("GetAIActor", &AWillowGameInfo::GetAIActor, py::return_value_policy::reference)
        .def("CanTickAI", &AWillowGameInfo::CanTickAI)
        .def("CatchupInitialColiseumStat", &AWillowGameInfo::CatchupInitialColiseumStat)
        .def("ConditionallyConfigureColiseum", &AWillowGameInfo::ConditionallyConfigureColiseum)
        .def("PublishColiseumStatDeltaForPlayer", &AWillowGameInfo::PublishColiseumStatDeltaForPlayer)
        .def("PublishColiseumStatDeltas", &AWillowGameInfo::PublishColiseumStatDeltas)
        .def("RemoveColiseumStatCacheForPlayer", &AWillowGameInfo::RemoveColiseumStatCacheForPlayer)
        .def("InitColiseumStatArray", &AWillowGameInfo::InitColiseumStatArray)
        .def("FinishInitializingColiseumStatCache", &AWillowGameInfo::FinishInitializingColiseumStatCache)
        .def("InitColiseumStatCacheForPlayer", &AWillowGameInfo::InitColiseumStatCacheForPlayer)
        .def("ClearColiseumStatCache", &AWillowGameInfo::ClearColiseumStatCache)
        .def("ShouldRestartPlayerAfterLogin", &AWillowGameInfo::ShouldRestartPlayerAfterLogin)
        .def("SetRestartPlayerAfterLogin", &AWillowGameInfo::SetRestartPlayerAfterLogin)
        .def("ShouldInitializeStartupTeleporterAttribute", &AWillowGameInfo::ShouldInitializeStartupTeleporterAttribute)
        .def("SetStartupTeleporterAttributeInitialization", &AWillowGameInfo::SetStartupTeleporterAttributeInitialization)
        .def("PlayerResetShop", &AWillowGameInfo::PlayerResetShop)
        .def("RemoveWaypointComponent", &AWillowGameInfo::RemoveWaypointComponent)
        .def("AddWaypointComponent", &AWillowGameInfo::AddWaypointComponent)
        .def("ClearRemainingProjectiles", &AWillowGameInfo::ClearRemainingProjectiles)
        .def("TravelPostCountdownInProcess", &AWillowGameInfo::TravelPostCountdownInProcess)
        .def("TravelCountdownInProcess", &AWillowGameInfo::TravelCountdownInProcess)
        .def("ClearTravelData", &AWillowGameInfo::ClearTravelData)
        .def("TravelPostCountdown", &AWillowGameInfo::TravelPostCountdown)
        .def("TravelCountdown", &AWillowGameInfo::TravelCountdown)
        .def("InitiateTravel", &AWillowGameInfo::InitiateTravel)
        .def("CanAllPlayersTravelToDlcDestination", &AWillowGameInfo::CanAllPlayersTravelToDlcDestination)
        .def("GetDlcCannotTravelPlayerList", &AWillowGameInfo::GetDlcCannotTravelPlayerList)
        .def("TravelToFastTravelStation", &AWillowGameInfo::TravelToFastTravelStation)
        .def("TeleportToFinalDestinationAfterLoad", &AWillowGameInfo::TeleportToFinalDestinationAfterLoad)
        .def("TravelToRealDestinationLevel", &AWillowGameInfo::TravelToRealDestinationLevel)
        .def("CommitTravelToNewLevel", &AWillowGameInfo::CommitTravelToNewLevel)
        .def("TravelToStation", &AWillowGameInfo::TravelToStation)
        .def("eventCheckMapChangeConditions", &AWillowGameInfo::eventCheckMapChangeConditions)
        .def("TryFireInstigatorImpatientVO", &AWillowGameInfo::TryFireInstigatorImpatientVO)
        .def("FireInstigatorImpatientVO", &AWillowGameInfo::FireInstigatorImpatientVO)
        .def("ShouldSpawnAtStartSpot", &AWillowGameInfo::ShouldSpawnAtStartSpot)
        .def("eventEndGameHack", &AWillowGameInfo::eventEndGameHack)
        .def("DelayedEndGame", &AWillowGameInfo::DelayedEndGame)
        .def("InitGameReplicationInfo", &AWillowGameInfo::InitGameReplicationInfo)
        .def("eventPostCommitMapChange", &AWillowGameInfo::eventPostCommitMapChange)
        .def("PlayerLeftGameNotification", &AWillowGameInfo::PlayerLeftGameNotification)
        .def("PlayerEnteredGameNotification", &AWillowGameInfo::PlayerEnteredGameNotification)
        .def("UpdatePlayerObservers", &AWillowGameInfo::UpdatePlayerObservers)
        .def("RemovePlayerObserver", &AWillowGameInfo::RemovePlayerObserver)
        .def("AddPlayerObserver", &AWillowGameInfo::AddPlayerObserver)
        .def("SpawnDefaultPawnFor", &AWillowGameInfo::SpawnDefaultPawnFor, py::return_value_policy::reference)
        .def("InitiatePlayerPawnDataLoad", &AWillowGameInfo::InitiatePlayerPawnDataLoad)
        .def("ResurrectAllPlayers", &AWillowGameInfo::ResurrectAllPlayers)
        .def("HandlePlayerDeathResurrection", &AWillowGameInfo::HandlePlayerDeathResurrection)
        .def("AllowCheats", &AWillowGameInfo::AllowCheats)
        .def("ResetAI", &AWillowGameInfo::ResetAI)
        .def("ShouldCensorContent", &AWillowGameInfo::ShouldCensorContent)
        .def("IsShippingBuild", &AWillowGameInfo::IsShippingBuild)
        .def("IsEditor", &AWillowGameInfo::IsEditor)
        .def("GetBlackMarketUpgradeManager", &AWillowGameInfo::GetBlackMarketUpgradeManager, py::return_value_policy::reference)
        .def("GetPlayerStatsNotifier", &AWillowGameInfo::GetPlayerStatsNotifier, py::return_value_policy::reference)
        .def("GetCombatMusicManager", &AWillowGameInfo::GetCombatMusicManager, py::return_value_policy::reference)
        .def("GetChallengeManager", &AWillowGameInfo::GetChallengeManager, py::return_value_policy::reference)
        .def("GetPlayerInteractionManager", &AWillowGameInfo::GetPlayerInteractionManager, py::return_value_policy::reference)
        .def("GetSkillManager", &AWillowGameInfo::GetSkillManager, py::return_value_policy::reference)
        .def("eventLogin", &AWillowGameInfo::eventLogin, py::return_value_policy::reference)
        .def("ActivateVehicleFactory", &AWillowGameInfo::ActivateVehicleFactory)
        .def("RegisterVehicle", &AWillowGameInfo::RegisterVehicle)
        .def("ShouldRespawn", &AWillowGameInfo::ShouldRespawn)
        .def("AwardCombatExperience", &AWillowGameInfo::AwardCombatExperience)
        .def("Killed", &AWillowGameInfo::Killed)
        .def("InitializeStartupTeleporterAttribute", &AWillowGameInfo::InitializeStartupTeleporterAttribute)
        .def("SetInitialTeleportDestination", &AWillowGameInfo::SetInitialTeleportDestination)
        .def("FindPlayerStart", &AWillowGameInfo::FindPlayerStart, py::return_value_policy::reference)
        .def("RatePlayerStart", &AWillowGameInfo::RatePlayerStart)
        .def("DecodeEvent", &AWillowGameInfo::DecodeEvent)
        .def("RestartPlayer", &AWillowGameInfo::RestartPlayer)
        .def("SyncKismetSetProperties", &AWillowGameInfo::SyncKismetSetProperties)
        .def("EndGame", &AWillowGameInfo::EndGame)
        .def("StartMatch", &AWillowGameInfo::StartMatch)
        .def("Logout", &AWillowGameInfo::Logout)
        .def("eventPostLogin", &AWillowGameInfo::eventPostLogin)
        .def("DiscardInventory", &AWillowGameInfo::DiscardInventory)
        .def("ShouldPawnDropWeaponOnDeath", &AWillowGameInfo::ShouldPawnDropWeaponOnDeath)
        .def("ApplyGlobalPlayerMovementSettings", &AWillowGameInfo::ApplyGlobalPlayerMovementSettings)
        .def("SetPlayerDefaults", &AWillowGameInfo::SetPlayerDefaults)
        .def("eventGetInstancedDesignerAttribute", &AWillowGameInfo::eventGetInstancedDesignerAttribute, py::return_value_policy::reference)
        .def("CreateDesignerAttribute", &AWillowGameInfo::CreateDesignerAttribute, py::return_value_policy::reference)
        .def("eventInitGame", &AWillowGameInfo::eventInitGame)
        .def("PostBeginPlay", &AWillowGameInfo::PostBeginPlay)
        .def("PreBeginPlay", &AWillowGameInfo::PreBeginPlay)
          ;
}