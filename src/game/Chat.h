/*
 * Copyright (C) 2005-2008 MaNGOS <http://www.mangosproject.org/>
 *
 * Copyright (C) 2008 Trinity <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef TRINITYCORE_CHAT_H
#define TRINITYCORE_CHAT_H

#include "SharedDefines.h"

class ChatHandler;
class WorldSession;
class Creature;
class Player;
class Unit;
struct GameTele;

class ChatCommand
{
    public:
        const char *                  Name;
        uint32                        SecurityLevel;                   // function pointer required correct align (use uint32)
        /**
        Only set this to true if the command doesn't use the session.
        This is used to determine if CLI or IRC can use the command, because they don't have sessions
        */
        bool                          noSessionNeeded; 
        bool                          AllowIRC;     //no effect if noSessionNeeded is set to false. This is the default irc authorisation and may be replaced by the 'commands' table value
        bool (ChatHandler::*Handler)(const char* args);
        std::string                   Help;
        std::vector<ChatCommand>      ChildCommands;
};

class ChatHandler
{
    public:
        explicit ChatHandler(WorldSession* session) : m_session(session) {}
        explicit ChatHandler(Player* player) : m_session(player->GetSession()) {}
         ~ChatHandler() {}

         // Builds chat packet and returns receiver guid position in the packet to substitute in whisper builders
         static size_t BuildChatPacket(WorldPacket& data, ChatMsg chatType, Language language, uint64 senderGUID, uint64 receiverGUID, std::string const& message, uint8 chatTag = 0,
                                    std::string const& senderName = "", std::string const& receiverName = "",
                                    uint32 achievementId = 0, bool gmMessage = false, std::string const& channelName = "");
         // Builds chat packet and returns receiver guid position in the packet to substitute in whisper builders
        static size_t BuildChatPacket(WorldPacket& data, ChatMsg chatType, Language language, WorldObject const* sender, WorldObject const* receiver, std::string const& message, uint32 achievementId = 0, std::string const& channelName = "", LocaleConstant locale = DEFAULT_LOCALE);

        static char* LineFromMessage(char*& pos) { char* start = strtok(pos,"\n"); pos = NULL; return start; }
        
        // function with different implementation for chat/console
        virtual bool HasPermission(uint32 permission) const { return m_session->HasPermission(permission); }
        virtual std::string GetNameLink() const { return GetNameLink(m_session->GetPlayer()); }
        virtual LocaleConstant GetSessionDbcLocale() const;
        virtual bool isAvailable(ChatCommand const& cmd) const;
        virtual bool needReportToTarget(Player* chr) const;

        virtual const char* GetTrinityString(int32 entry) const;
        std::string GetTrinityStringVA(int32 entry, ...) const;

        virtual void SendSysMessage(char const* str, bool escapeCharacters = false);
        void SendSysMessage(int32 entry);
        
        template<typename... Args>
        void PSendSysMessage(const char* fmt, Args&&... args)
        {
            SendSysMessage(Trinity::StringFormat(fmt, std::forward<Args>(args)...).c_str());
        }
        template<typename... Args>
        void PSendSysMessage(uint32 entry, Args&&... args)
        {
            SendSysMessage(PGetParseString(entry, std::forward<Args>(args)...).c_str());
        }
        std::string PGetParseString(int32 entry, ...);

        int ParseCommands(const char* text);

        virtual std::string const GetName() const;
        static std::vector<ChatCommand> const& getCommandTable();
        
        WorldSession* GetSession() { return m_session; }

        static void SendMessageWithoutAuthor(char const* channel, const char* msg);
        char*     extractKeyFromLink(char* text, char const* linkType, char** something1 = NULL);

        std::string playerLink(std::string const& name) const { return m_session ? "|cffffffff|Hplayer:"+name+"|h["+name+"]|h|r" : name; }
        std::string GetNameLink(Player* chr) const { return playerLink(chr->GetName()); }

        std::string extractPlayerNameFromLink(char* text);
        // select by arg (name/link) or in-game selection online/offline player
        bool extractPlayerTarget(char* args, Player** player, uint64* player_guid = NULL, std::string* player_name = NULL);

        bool HasSentErrorMessage() const { return sentErrorMessage; }
        void SetSentErrorMessage(bool val){ sentErrorMessage = val;};

        void SendGlobalSysMessage(const char *str);
        void SendGlobalGMSysMessage(const char *str);
    protected:
        explicit ChatHandler() : m_session(NULL) {}      // for CLI subclass
        static bool SetDataForCommandInTable(std::vector<ChatCommand>& table, const char* text, uint32 securityLevel, std::string const& help, std::string const& fullcommand, bool allowIRC);

        bool hasStringAbbr(const char* name, const char* part) const;

        bool ExecuteCommandInTable(std::vector<ChatCommand> const& table, const char* text, const std::string& fullcommand);
        bool ShowHelpForCommand(std::vector<ChatCommand> const& table, const char* cmd);
        bool ShowHelpForSubCommands(std::vector<ChatCommand> const& table, char const* cmd, char const* subcmd);

        bool HandleAccountCommand(const char* args);
        bool HandleAccountCreateCommand(const char* args);
        bool HandleAccountDeleteCommand(const char* args);
        bool HandleAccountSetAddonCommand(const char* args);
        bool HandleAccountSetGmLevelCommand(const char* args);
        bool HandleAccountSetPasswordCommand(const char* args);
        bool HandleAccountMailChangeCommand(const char* args);

        bool HandleHelpCommand(const char* args);
        bool HandleCommandsCommand(const char* args);
        bool HandleStartCommand(const char* args);
        bool HandleDismountCommand(const char* args);
        bool HandleSaveCommand(const char* args);
        bool HandleGMListIngameCommand(const char* args);
        bool HandleGMListFullCommand(const char* args);

        bool HandleNamegoCommand(const char* args);
        bool HandleGonameCommand(const char* args);
        bool HandleGroupgoCommand(const char* args);
        bool HandleRecallCommand(const char* args);
        bool HandleNameAnnounceCommand(const char* args);
        bool HandleGMNameAnnounceCommand(const char* args);
        bool HandleAnnounceCommand(const char* args);
        bool HandleGMAnnounceCommand(const char* args);
        bool HandleNotifyCommand(const char* args);
        bool HandleGMNotifyCommand(const char* args);
        bool HandleGMmodeCommand(const char* args);
        bool HandleGMChatCommand(const char* args);
        bool HandleVisibleCommand(const char* args);
        bool HandleGPSCommand(const char* args);
        bool HandleGPSSCommand(const char* args);
        bool HandleWhispersCommand(const char* args);
        bool HandleNameTeleCommand(const char* args);
        bool HandleGroupTeleCommand(const char* args);
        bool HandleDrunkCommand(const char* args);
        bool HandleSendItemsCommand(const char* args);
        bool HandleSendMailCommand(const char* args);
        bool HandleSendMoneyCommand(const char* args);

        bool HandleEventActiveListCommand(const char* args);
        bool HandleEventStartCommand(const char* args);
        bool HandleEventStopCommand(const char* args);
        bool HandleEventInfoCommand(const char* args);
        bool HandleEventCreateCommand(const char* args);

        bool HandleLearnCommand(const char* args);
        bool HandleLearnAllCommand(const char* args);
        bool HandleLearnAllGMCommand(const char* args);
        bool HandleLearnAllCraftsCommand(const char* args);
        bool HandleLearnAllRecipesCommand(const char* args);
        bool HandleLearnAllDefaultCommand(const char* args);
        bool HandleLearnAllLangCommand(const char* args);
        bool HandleLearnAllMyClassCommand(const char* args);
        bool HandleLearnAllMySpellsCommand(const char* args);
        bool HandleLearnAllMyTalentsCommand(const char* args);

        bool HandleLookupAreaCommand(const char* args);
        bool HandleLookupCreatureCommand(const char* args);
        bool HandleLookupEventCommand(const char* args);
        bool HandleLookupFactionCommand(const char * args);
        bool HandleLookupItemCommand(const char * args);
        bool HandleLookupItemSetCommand(const char * args);
        bool HandleLookupObjectCommand(const char* args);
        bool HandleLookupPlayerIpCommand(const char* args);
        bool HandleLookupPlayerAccountCommand(const char* args);
        bool HandleLookupPlayerEmailCommand(const char* args);
        bool HandleLookupQuestCommand(const char* args);
        bool HandleLookupSkillCommand(const char* args);
        bool HandleGetSpellInfoCommand(const char* args);
        bool HandleLookupTeleCommand(const char * args);

        bool HandleModifyKnownTitlesCommand(const char* args);
        bool HandleModifyHPCommand(const char* args);
        bool HandleModifyManaCommand(const char* args);
        bool HandleModifyRageCommand(const char* args);
        bool HandleModifyEnergyCommand(const char* args);
        bool HandleModifyMoneyCommand(const char* args);
        bool HandleModifyASpeedCommand(const char* args);
        bool HandleModifySpeedCommand(const char* args);
        bool HandleModifyBWalkCommand(const char* args);
        bool HandleModifyFlyCommand(const char* args);
        bool HandleModifySwimCommand(const char* args);
        bool HandleModifyScaleCommand(const char* args);
        bool HandleModifyMountCommand(const char* args);
        bool HandleModifyBitCommand(const char* args);
        bool HandleModifyFactionCommand(const char* args);
        bool HandleModifySpellCommand(const char* args);
        bool HandleModifyTalentCommand (const char* args);
        bool HandleModifyHonorCommand (const char* args);
        bool HandleModifyRepCommand(const char* args);
        bool HandleModifyArenaCommand(const char* args);
        bool HandleModifyGenderCommand(const char* args);

        bool HandleNpcAddCommand(const char* args);
        bool HandleNpcChangeEntryCommand(const char *args);
        bool HandleNpcDeleteCommand(const char* args);
        bool HandleNpcFactionIdCommand(const char* args);
        bool HandleNpcFlagCommand(const char* args);
        bool HandleNpcFollowCommand(const char* args);
        bool HandleNpcInfoCommand(const char* args);
        bool HandleNpcMoveCommand(const char* args);
        bool HandleNpcSetEmoteStateCommand(const char* args);
        bool HandleNpcSayCommand(const char* args);
        bool HandleNpcSetModelCommand(const char* args);
        bool HandleNpcSetMoveTypeCommand(const char* args);
        bool HandleNpcSpawnDistCommand(const char* args);
        bool HandleNpcSpawnTimeCommand(const char* args);
        bool HandleNpcTameCommand(const char* args);
        bool HandleNpcTextEmoteCommand(const char* args);
        bool HandleNpcUnFollowCommand(const char* args);
        bool HandleNpcWhisperCommand(const char* args);
        bool HandleNpcYellCommand(const char* args);
        bool HandleNpcAddFormationCommand(const char* args);
        bool HandleNpcRemoveFormationCommand(const char* args);
        bool HandleNpcSetLinkCommand(const char* args);
        bool HandleNpcGoBackHomeCommand(const char* args);
        bool HandleNpcSetPoolCommand(const char* args);
        bool HandleNpcSetInstanceEventCommand(const char* args);
        bool HandleNpcGuidCommand(const char* args);
        bool HandleNpcPathTypeCommand(const char* args);
        bool HandleNpcPathDirectionCommand(const char* args);
        bool HandleNpcPathCurrentIdCommand(const char* args);

        bool HandleReloadCommand(const char* args);
        bool HandleReloadAllCommand(const char* args);
        bool HandleReloadAllAreaCommand(const char* args);
        bool HandleReloadAllItemCommand(const char* args);
        bool HandleReloadAllLootCommand(const char* args);
        bool HandleReloadAllNpcCommand(const char* args);
        bool HandleReloadAllQuestCommand(const char* args);
        bool HandleReloadAllScriptsCommand(const char* args);
        bool HandleReloadAllSpellCommand(const char* args);
        bool HandleReloadAllLocalesCommand(const char* args);
        bool HandleReloadConfigCommand(const char* args);
        bool HandleReloadWpScriptsCommand(const char* args);
        bool HandleReloadSmartWaypointsCommand(const char* args);
        bool HandleReloadAutoAnnounceCommand(const char* args);
        bool HandleReloadAreaTriggerTavernCommand(const char* args);
        bool HandleReloadAreaTriggerTeleportCommand(const char* args);
        bool HandleReloadAccessRequirementCommand(const char* args);
        bool HandleReloadEventScriptsCommand(const char* args);
        bool HandleReloadCommandCommand(const char* args);
        bool HandleReloadCreatureTextCommand(const char* args);
        bool HandleReloadCreatureTemplateCommand(const char* args);
        bool HandleReloadCreatureQuestStartersCommand(const char* args);
        bool HandleReloadCreatureQuestEndersCommand(const char* args);
        bool HandleReloadCreatureLinkedRespawnCommand(const char* args);
        bool HandleReloadDbScriptStringCommand(const char* args);
        bool HandleReloadGameEventCommand(const char* args);
        bool HandleReloadGameGraveyardZoneCommand(const char* args);
        bool HandleReloadGameObjectScriptsCommand(const char* args);
        bool HandleReloadGameTeleCommand(const char* args);
        bool HandleReloadGameobjectQuestStartersCommand(const char* args);
        bool HandleReloadGameobjectQuestEndersCommand(const char* args);
        bool HandleReloadCreatureModelInfoCommand(const char* args);
        bool HandleReloadLootTemplatesCreatureCommand(const char* args);
        bool HandleReloadLootTemplatesDisenchantCommand(const char* args);
        bool HandleReloadLootTemplatesFishingCommand(const char* args);
        bool HandleReloadLootTemplatesGameobjectCommand(const char* args);
        bool HandleReloadLootTemplatesItemCommand(const char* args);
        bool HandleReloadLootTemplatesPickpocketingCommand(const char* args);
        bool HandleReloadLootTemplatesProspectingCommand(const char* args);
        bool HandleReloadLootTemplatesReferenceCommand(const char* args);
        bool HandleReloadLootTemplatesQuestMailCommand(const char* args);
        bool HandleReloadLootTemplatesSkinningCommand(const char* args);
        bool HandleReloadTrinityStringCommand(const char* args);
        bool HandleReloadGossipMenuCommand(const char* args);
        bool HandleReloadGossipTextCommand(const char* args);
        bool HandleReloadCreatureGossipCommand(const char* args);
        bool HandleReloadGossipMenuOptionCommand(const char* args);
        bool HandleReloadNpcTrainerCommand(const char* args);
        bool HandleReloadNpcVendorCommand(const char* args);
        bool HandleReloadQuestAreaTriggersCommand(const char* args);
        bool HandleReloadQuestEndScriptsCommand(const char* args);
        bool HandleReloadQuestStartScriptsCommand(const char* args);
        bool HandleReloadQuestTemplateCommand(const char* args);
        bool HandleReloadReservedNameCommand(const char*);
        bool HandleReloadSkillDiscoveryTemplateCommand(const char* args);
        bool HandleReloadSkillExtraItemTemplateCommand(const char* args);
        bool HandleReloadSkillFishingBaseLevelCommand(const char* args);
        bool HandleReloadSpellBonusesCommand(const char* args);
        bool HandleReloadSpellAffectCommand(const char* args);
        bool HandleReloadSpellRequiredCommand(const char* args);
        bool HandleReloadSpellElixirCommand(const char* args);
        bool HandleReloadSpellLearnSpellCommand(const char* args);
        bool HandleReloadSpellLinkedSpellCommand(const char* args);
        bool HandleReloadSpellProcEventCommand(const char* args);
        bool HandleReloadSpellScriptsCommand(const char* args);
        bool HandleReloadSpellTargetPositionCommand(const char* args);
        bool HandleReloadSpellThreatsCommand(const char* args);
        bool HandleReloadSpellPetAurasCommand(const char* args);
        bool HandleReloadSpellDisabledCommand(const char* args);
        bool HandleReloadPageTextsCommand(const char* args);
        bool HandleReloadItemExtendedCostCommand(const char*);
        bool HandleReloadItemEnchantementsCommand(const char* args);
        bool HandleReloadLocalesCreatureCommand(const char* args);
        bool HandleReloadLocalesGameobjectCommand(const char* args);
        bool HandleReloadLocalesItemCommand(const char* args);
        bool HandleReloadLocalesGossipTextCommand(const char* args);
        bool HandleReloadLocalesPageTextCommand(const char* args);
        bool HandleReloadLocalesQuestCommand(const char* args);
        bool HandleReloadAuctionsCommand(const char* args);
        bool HandleReloadConditions(const char* args);
        bool HandleReloadSmartAICommand(const char* args);
        bool HandleReloadSpellTemplates(const char* args);

        bool HandleInstanceListBindsCommand(const char* args);
        bool HandleInstanceUnbindCommand(const char* args);
        bool HandleInstanceStatsCommand(const char* args);
        bool HandleInstanceSaveDataCommand(const char * args);
        bool HandleInstanceSetDataCommand(const char* args);
        bool HandleInstanceGetDataCommand(const char* args);

        bool HandleServerCorpsesCommand(const char* args);
        bool HandleServerExitCommand(const char* args);
        bool HandleServerIdleRestartCommand(const char* args);
        bool HandleServerIdleShutDownCommand(const char* args);
        bool HandleServerInfoCommand(const char* args);
        bool HandleServerMotdCommand(const char* args);
        bool HandleServerRestartCommand(const char* args);
        bool HandleServerSetMotdCommand(const char* args);
        bool HandleServerShutDownCommand(const char* args);
        bool HandleServerShutDownCancelCommand(const char* args);
        bool HandleServerSetConfigCommand(const char* args);

        bool HandleAddHonorCommand(const char* args);
        bool HandleHonorAddKillCommand(const char* args);
        bool HandleUpdateHonorFieldsCommand(const char* args);

        bool HandleLoadScriptsCommand(const char* args);
        bool HandleSendQuestPartyMsgCommand(const char* args);
        bool HandleSendQuestInvalidMsgCommand(const char* args);

        bool HandleYoloCommand(const char* args);
        bool HandleDebugBatchAttack(const char* args);
        bool HandleDebugInArcCommand(const char* args);
        bool HandleDebugSpellFailCommand(const char* args);
        bool HandleDebugStealthLevel(const char* args);
        bool HandleDebugAttackDistance(const char* args);
        bool HandleDebugUnloadGrid(const char* args);
        bool HandleDebugLoadedScripts(const char* args);
        bool HandleDebugResetDailyQuests(const char* args);
        bool HandleDebugShowAttackers(const char* args);
        bool HandleDebugSendZoneUnderAttack(const char* args);
        bool HandleDebugLoSCommand(const char* args);
        bool HandleDebugPlayerFlags(const char* args);
        bool HandleSmartAIDebugCommand(const char* args);
        bool HandleSmartAIShowErrorsCommand(const char* args);
        bool HandleDebugOpcodeTestCommand(const char* args);
        bool HandleDebugPlayEmoteCommand(const char* args);
        bool HandleDebugMapHeight(const char* args);
        bool HandleDebugValuesSnapshot(const char* args);
        bool HandleDebugCrashCommand(const char* args);

        bool HandleGUIDCommand(const char* args);
        bool HandleNameCommand(const char* args);
        bool HandleItemMoveCommand(const char* args);
        bool HandleDeMorphCommand(const char* args);
        bool HandleAddVendorItemCommand(const char* args);
        bool HandleDelVendorItemCommand(const char* args);
        bool HandleChangeLevelCommand(const char* args);
        bool HandleSetPoiCommand(const char* args);
        bool HandleEquipErrorCommand(const char* args);
        bool HandleGoCreatureCommand(const char* args);
        bool HandleGoObjectCommand(const char* args);
        bool HandleGoTicketCommand(const char* args);
        bool HandleGoTriggerCommand(const char* args);
        bool HandleGoGraveyardCommand(const char* args);
        bool HandleTargetObjectCommand(const char* args);
        bool HandleDelObjectCommand(const char* args);
        bool HandleMoveObjectCommand(const char* args);
        bool HandleNpcGotoCommand(const char* args);
        bool HandleNpcNearCommand(const char* args);
        bool HandleNpcFlyCommand(const char* args);
        bool HandleTurnObjectCommand(const char* args);
        bool HandleObjectStateCommand(const char* args);
        bool HandlePInfoCommand(const char* args);
        bool HandlePLimitCommand(const char* args);
        bool HandleMuteCommand(const char* args);
        bool HandleUnmuteCommand(const char* args);
        bool HandleMovegensCommand(const char* args);
        bool HandleFreezeCommand(const char *args);
        bool HandleUnFreezeCommand(const char *args);
        bool HandleListFreezeCommand(const char* args);

        bool HandleCharacterDeleteCommand(const char* args);
        bool HandleBanAccountCommand(const char* args);
        bool HandleBanCharacterCommand(const char* args);
        bool HandleBanIPCommand(const char* args);
        bool HandleUnBanAccountCommand(const char* args);
        bool HandleUnBanCharacterCommand(const char* args);
        bool HandleUnBanIPCommand(const char* args);
        bool HandleBanInfoAccountCommand(const char* args);
        bool HandleBanInfoCharacterCommand(const char* args);
        bool HandleBanInfoIPCommand(const char* args);
        bool HandleMuteInfoAccountCommand(const char* args);
        bool HandleMuteInfoCharacterCommand(const char* args);
        bool HandleBanListAccountCommand(const char* args);
        bool HandleBanListCharacterCommand(const char* args);
        bool HandleBanListIPCommand(const char* args);
        bool HandleGoXYCommand(const char* args);
        bool HandleGoXYZCommand(const char* args);
        bool HandleGoXYZOCommand(const char* args);
        bool HandleGoZoneXYCommand(const char* args);
        bool HandleGoGridCommand(const char* args);
        bool HandleAddWeaponCommand(const char* args);
        bool HandleGoCommand(const char* args);
        bool HandleGoATCommand(const char* args);

        bool HandleCooldownCommand(const char* args);
        bool HandleUnLearnCommand(const char* args);
        bool HandleGetDistanceCommand(const char* args);
        bool HandleGameObjectCommand(const char* args);
        bool HandleAnimCommand(const char* args);
        bool HandlePlaySoundCommand(const char* args);
        bool HandleDieCommand(const char* args);
        bool HandleDamageCommand(const char *args);
        bool HandleReviveCommand(const char* args);
        bool HandleMorphCommand(const char* args);
        bool HandleCopyStuffCommand(const char* args);
        bool HandleAuraCommand(const char* args);
        bool HandleUnAuraCommand(const char* args);
        bool HandleLinkGraveCommand(const char* args);
        bool HandleNearGraveCommand(const char* args);
        bool HandleActivateObjectCommand(const char* args);
        bool HandleSpawnTransportCommand(const char* args);
        bool HandleHoverCommand(const char* args);
        bool HandleMmapPathCommand(const char* args);
        bool HandleMmapLocCommand(const char* args);
        bool HandleMmapLoadedTilesCommand(const char* args);
        bool HandleMmapStatsCommand(const char* args);
        bool HandleMmap(const char* args);
        bool HandleMmapTestArea(const char* args);
        bool HandleLevelUpCommand(const char* args);
        bool HandleShowAreaCommand(const char* args);
        bool HandleHideAreaCommand(const char* args);
        bool HandleAddItemCommand(const char* args);
        bool HandleAddItemSetCommand(const char* args);
        bool HandlePetTpCommand(const char* args);
        bool HandlePetUnlearnCommand(const char* args);
        bool HandlePetLearnCommand(const char* args);
        bool HandleCreatePetCommand(const char* args);
        bool HandlePetRenameCommand(const char* args);

        bool HandleGroupLeaderCommand(const char* args);
        bool HandleGroupDisbandCommand(const char* args);
        bool HandleGroupRemoveCommand(const char* args);

        bool HandleGuildCreateCommand(const char* args);
        bool HandleGuildInviteCommand(const char* args);
        bool HandleGuildUninviteCommand(const char* args);
        bool HandleGuildRankCommand(const char* args);
        bool HandleGuildDeleteCommand(const char* args);
        bool HandleGuildRenameCommand(const char* args);
        bool HandleUpdateCommand(const char* args);
        bool HandleBankCommand(const char* args);
        bool HandleChangeWeather(const char* args);
        bool HandleKickPlayerCommand(const char * args);
        bool HandleTeleCommand(const char * args);
        bool HandleAddTeleCommand(const char * args);
        bool HandleDelTeleCommand(const char * args);
        bool HandleListAurasCommand(const char * args);
        bool HandleBlinkCommand(const char* args);

        bool HandleResetHonorCommand(const char * args);
        bool HandleResetLevelCommand(const char * args);
        bool HandleResetSpellsCommand(const char * args);

        bool HandleResetStatsCommand(const char * args);
        bool HandleResetTalentsCommand(const char * args);

        bool HandleResetAllCommand(const char * args);
        
        bool HandleGetMaxCreaturePoolIdCommand(const char* args);
        
        bool HandleSetTitleCommand(const char* args);
        bool HandleRemoveTitleCommand(const char* args);


        // GM ticket command handlers std::string comment = "");
        //Send ticket description to session. (the current time is here just for optimization purpose)
        void SendTicket(GM_Ticket const* ticket, time_t currentTime, bool showMessage = false, bool showComment = false, bool showAge = false, bool showAssign = false, bool globalMessage = false);
        bool HandleGMTicketList(bool onlineOnly = false, bool closedOnly = false);
        bool HandleGMTicketListCommand(const char* args);
        bool HandleGMTicketListOnlineCommand(const char* args);
        bool HandleGMTicketListClosedCommand(const char* args);
        bool HandleGMTicketGetByIdCommand(const char* args);
        bool HandleGMTicketGetByNameCommand(const char* args);
        bool HandleGMTicketCloseByIdCommand(const char* args);
        bool HandleGMTicketAssignToCommand(const char* args);
        bool HandleGMTicketUnAssignCommand(const char* args);
        bool HandleGMTicketCommentCommand(const char* args);
        bool HandleGMTicketDeleteByIdCommand(const char* args);
        bool HandleGMTicketReloadCommand(const char* args);
        bool HandleGMStats(const char* args);

        bool HandleMaxSkillCommand(const char* args);
        bool HandleSetSkillCommand(const char* args);
        bool HandleListCreatureCommand(const char* args);
        bool HandleListItemCommand(const char* args);
        bool HandleListObjectCommand(const char* args);
        bool HandleNearObjectCommand(const char* args);
        bool HandlePasswordCommand(const char* args);
        bool HandleLockAccountCommand(const char* args);
        bool HandleRespawnCommand(const char* args);

        bool HandleWpAddCommand(const char* args);
        bool HandleWpLoadPathCommand(const char* args);
        bool HandleWpUnLoadPathCommand(const char* args);
        bool HandleWpModifyCommand(const char* args);
        bool HandleWpEventCommand(const char* args);
        bool HandleWpShowCommand(const char* args);
        bool HandleWpChangePathDirectionCommand(const char* args);
        bool HandleWpChangePathTypeCommand(const char* args);
        bool HandleWpTeleportToPathCommand(const char* args);
        bool HandleReloadAllPaths(const char *args);

        bool HandleFlyModeCommand(const char* args);
        bool HandleSendOpcodeCommand(const char* args);
        bool HandleSellErrorCommand(const char* args);
        bool HandleBuyErrorCommand(const char* args);
        bool HandleUpdateWorldStateCommand(const char* args);
        bool HandlePlaySound2Command(const char* args);
        bool HandleSendChannelNotifyCommand(const char* args);
        bool HandleSendChatMsgCommand(const char* args);
        bool HandleRenameCommand(const char* args);
        bool HandleRenameArenaTeamCommand(const char* args);
        bool HandleLoadPDumpCommand(const char *args);
        bool HandleWritePDumpCommand(const char *args);
        bool HandleCastCommand(const char *args);
        bool HandleCastBatchCommand(const char* args);
        bool HandleCastBackCommand(const char *args);
        bool HandleCastDistCommand(const char *args);
        bool HandleCastSelfCommand(const char *args);
        bool HandleCastTargetCommand(const char *args);
        bool HandleComeToMeCommand(const char *args);
        bool HandleCombatStopCommand(const char *args);
        bool HandleCharDeleteCommand(const char *args);
        bool HandleSendMessageCommand(const char * args);
        bool HandleFlushArenaPointsCommand(const char *args);
        bool HandlePlayAllCommand(const char* args);
        bool HandleRepairitemsCommand(const char* args);

        bool HandleTempGameObjectCommand(const char* args);
        bool HandleTempAddSpwCommand(const char* args);
        
        bool HandleChanBan(const char* args);
        bool HandleChanUnban(const char* args);
        bool HandleChanInfoBan(const char* args);

        // WoW Mania Commands
        bool HandleBuyInShopCommand(const char* args); 
        bool HandleViewCreditsCommand(const char* args);
        bool HandleRecupCommand(const char* args);
        bool HandleRecupReputations(Player *player, std::string reputs);
        bool HandleReskinCommand(const char* args);
        bool HandleRaceOrFactionChange(const char* args);
        
        bool HandleZoneBuffCommand(const char* args);
        bool HandleZoneMorphCommand(const char* args);
        bool HandleNpcMassFactionIdCommand(const char* args);

        // Spectate command
        bool HandleSpectateFromCommand(const char* args);
        bool HandleSpectateCancelCommand(const char* args);
        bool HandleSpectateVersion(const char* args);
        bool HandleSpectateInitCommand(const char* args);

        bool HandleUpdatePvPTitleCommand(const char* args);

        //! Development Commands
        bool HandleSetValueCommand(const char* args);
        bool HandleGetValueCommand(const char* args);
        bool HandleGobSetValueCommand(const char* args);
        bool HandleGobGetValueCommand(const char* args);
        bool HandleAddQuest(const char * args);
        bool HandleRemoveQuest(const char * args);
        bool HandleCompleteQuest(const char * args);
        bool HandleReportQuest(const char* args);
        bool HandleCountCompleteQuest(const char * args);
        bool HandleTotalCount(const char* args);
        bool HandleSaveAllCommand(const char* args);
        bool HandleGetItemState(const char * args);
        bool HandleGetLootRecipient(const char * args);
        bool HandleDebugArenaCommand(const char * args);
        bool HandleDebugBattleGroundCommand(const char * args);
        bool HandleDebugThreatList(const char * args);
        bool HandleDebugHostilRefList(const char * args);
        bool HandlePossessCommand(const char* args);
        bool HandleUnPossessCommand(const char* args);
        bool HandleBindSightCommand(const char* args);
        bool HandleUnbindSightCommand(const char* args);
        bool HandleRemoveLootItem(const char* args);
        bool HandleDebugPvPAnnounce(const char* args);

        //IRC
        bool HandleIRCReconnectCommand(const char* args);
        //NYI
        bool HandleIRCJoinCommand(const char* args);
        bool HandleIRCPartCommand(const char* args);
        bool HandleIRCQuitCommand(const char* args);

        bool HandleNpcSetCombatDistanceCommand(const char* args);
        bool HandleNpcAllowCombatMovementCommand(const char* args);

        bool HandleNpcLinkGameEventCommand(const char* args);
        bool HandleNpcUnlinkGameEventCommand(const char* args);
        bool HandleGobLinkGameEventCommand(const char* args);
        bool HandleGobUnlinkGameEventCommand(const char* args);

        bool HandleDebugCinematic(const char* args);
        bool HandleDebugItemByPos(const char* args);
        bool HandleDebugItemLevelSum(const char* args);
        bool HandleDebugAurasList(const char* args);
        bool HandleGetMoveFlagsCommand(const char* args);
        bool HandleSetMoveFlagsCommand(const char* args);
        
        bool HandleHerodayCommand(const char* args);
        bool HandleSpellInfoCommand(const char* args);
        bool HandleReportLagCommand(const char* args);
        bool HandleBattlegroundCommand(const char* args);

        //Cheat commands
        bool HandlePowerCheatCommand(const char *args);
        bool HandleCoolDownCheatCommand(const char *args);
        bool HandleCasttimeCheatCommand(const char *args);
        bool HandleGodModeCheatCommand(const char *args);
        bool HandleExploreCheatCommand(const char* args);
        bool HandleWaterwalkCheatCommand(const char* args);
        bool HandleTaxiCheatCommand(const char* args);

        Player*   GetSelectedPlayer() const;
        Creature* GetSelectedCreature() const;
        Unit*     GetSelectedUnit() const;
        Player*   GetSelectedPlayerOrSelf() const;
        char*     extractKeyFromLink(char* text, char const* const* linkTypes, int* found_idx, char** something1 = NULL);
        uint32    extractSpellIdFromLink(char* text);
        GameTele const* extractGameTeleFromLink(char* text);
        bool GetPlayerGroupAndGUIDByName(const char* cname, Player* &plr, Group* &group, uint64 &guid, bool offline = false);

        GameObject* GetObjectGlobalyWithGuidOrNearWithDbGuid(uint32 lowguid,uint32 entry);

        // Utility methods for commands
        bool LookupPlayerSearchCommand(QueryResult result, int32 limit);
        bool HandleBanListHelper(QueryResult result);
        bool HandleBanHelper(SanctionType mode,char const* args);
        bool HandleBanInfoHelper(uint32 accountid, char const* accountname);
        bool HandleUnBanHelper(SanctionType mode, char const* args);

    private:
        WorldSession * m_session;                           // != NULL for chat command call and NULL for CLI/IRC command

        // common global flag
        static bool load_command_table;
        bool sentErrorMessage;
};

class CliHandler : public ChatHandler
{
    public:
        typedef void Print(void*, char const*);
        explicit CliHandler(void* callbackArg, Print* zprint) : m_callbackArg(callbackArg), m_print(zprint) { }

        // overwrite functions
        const char *GetTrinityString(int32 entry) const override;
        bool isAvailable(ChatCommand const& cmd) const override;
        bool HasPermission(uint32 /*permission*/) const override { return true; }
        void SendSysMessage(const char *str, bool escapeCharacters = false) override;
        std::string GetNameLink() const override;
        bool needReportToTarget(Player* chr) const override;
        LocaleConstant GetSessionDbcLocale() const override;

    private:
        void* m_callbackArg;
        Print* m_print;
};

char const *fmtstring(char const *format, ...);

//return false if args char* is empty
#define ARGS_CHECK if(!*args)return false;

#endif