/**
 * ScriptDev2 is an extension for mangos-one providing enhanced features for
 * area triggers, creatures, game objects, instances, items, and spells beyond
 * the default database scripting in mangos-one.
 *
 * Copyright (C) 2006-2013  ScriptDev2 <http://www.scriptdev2.com/>
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
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#ifndef DEF_KARAZHAN_H
#define DEF_KARAZHAN_H

enum
{
    MAX_ENCOUNTER                   = 11,
    MAX_OZ_OPERA_MOBS               = 4,

    TYPE_ATTUMEN                    = 0,
    TYPE_MOROES                     = 1,
    TYPE_MAIDEN                     = 2,
    TYPE_OPERA                      = 3,
    TYPE_CURATOR                    = 4,
    TYPE_TERESTIAN                  = 5,
    TYPE_ARAN                       = 6,
    TYPE_NETHERSPITE                = 7,
    TYPE_CHESS                      = 8,
    TYPE_MALCHEZZAR                 = 9,
    TYPE_NIGHTBANE                  = 10,
    TYPE_OPERA_PERFORMANCE          = 11,               // no regular encounter - just store one random opera event

    NPC_ATTUMEN                     = 15550,
    NPC_MIDNIGHT                    = 16151,
    NPC_MOROES                      = 15687,
    NPC_BARNES                      = 16812,
    // NPC_TERESTIAN                = 15688,
    NPC_NIGHTBANE                   = 17225,
    NPC_NIGHTBANE_HELPER            = 17260,
    NPC_NETHERSPITE                 = 15689,
    NPC_ECHO_MEDIVH                 = 16816,
    NPC_INVISIBLE_STALKER           = 22519,                    // placeholder for dead chess npcs
    NPC_CHESS_STATUS_BAR            = 22520,                    // npc that controlls the transformation of dead pieces
    NPC_CHESS_VICTORY_CONTROLLER    = 22524,
    // NPC_CHESS_SOUND_BUNNY        = 21921,                    // npc that handles the encounter sounds
    // NPC_WAITING_ROOM_STALKER     = 17459,                    // trigger which marks the teleport location of the players; also used to cast some control spells during the game
    NPC_SQUARE_WHITE                = 17208,                    // chess white square
    NPC_SQUARE_BLACK                = 17305,                    // chess black square
    // NPC_SQUARE_OUTSIDE_BLACK     = 17316,                    // outside chess black square
    // NPC_SQUARE_OUTSIDE_WHITE     = 17317,                    // outside chess white square

    // Moroes event related
    NPC_LADY_KEIRA_BERRYBUCK        = 17007,
    NPC_LADY_CATRIONA_VON_INDI      = 19872,
    NPC_LORD_CRISPIN_FERENCE        = 19873,
    NPC_BARON_RAFE_DREUGER          = 19874,
    NPC_BARONESS_DOROTHEA_MILLSTIPE = 19875,
    NPC_LORD_ROBIN_DARIS            = 19876,

    // Opera event
    NPC_DOROTHEE                    = 17535,
    NPC_ROAR                        = 17546,
    NPC_TINHEAD                     = 17547,
    NPC_STRAWMAN                    = 17543,
    NPC_CRONE                       = 18168,
    NPC_GRANDMOTHER                 = 17603,
    NPC_JULIANNE                    = 17534,
    NPC_ROMULO                      = 17533,

    // The Master's Terrace quest related
    NPC_IMAGE_OF_MEDIVH             = 17651,
    NPC_IMAGE_OF_ARCANAGOS          = 17652,

    // Chess event
    NPC_ORC_GRUNT                   = 17469,                    // pawn
    NPC_ORC_WOLF                    = 21748,                    // knight
    NPC_ORC_WARLOCK                 = 21750,                    // queen
    NPC_ORC_NECROLYTE               = 21747,                    // bishop
    NPC_SUMMONED_DAEMON             = 21726,                    // rook
    NPC_WARCHIEF_BLACKHAND          = 21752,                    // king
    NPC_HUMAN_FOOTMAN               = 17211,                    // pawn
    NPC_HUMAN_CHARGER               = 21664,                    // knight
    NPC_HUMAN_CONJURER              = 21683,                    // queen
    NPC_HUMAN_CLERIC                = 21682,                    // bishop
    NPC_CONJURED_WATER_ELEMENTAL    = 21160,                    // rook
    NPC_KING_LLANE                  = 21684,                    // king

    GO_STAGE_CURTAIN                = 183932,
    GO_STAGE_DOOR_LEFT              = 184278,
    GO_STAGE_DOOR_RIGHT             = 184279,
    GO_PRIVATE_LIBRARY_DOOR         = 184517,
    GO_MASSIVE_DOOR                 = 185521,
    GO_GAMESMANS_HALL_DOOR          = 184276,
    GO_GAMESMANS_HALL_EXIT_DOOR     = 184277,
    GO_NETHERSPACE_DOOR             = 185134,
    GO_SIDE_ENTRANCE_DOOR           = 184275,
    GO_DUST_COVERED_CHEST           = 185119,
    GO_MASTERS_TERRACE_DOOR_1       = 184274,
    GO_MASTERS_TERRACE_DOOR_2       = 184280,

    // Opera event stage decoration
    GO_OZ_BACKDROP                  = 183442,
    GO_OZ_HAY                       = 183496,
    GO_HOOD_BACKDROP                = 183491,
    GO_HOOD_TREE                    = 183492,
    GO_HOOD_HOUSE                   = 183493,
    GO_RAJ_BACKDROP                 = 183443,
    GO_RAJ_MOON                     = 183494,
    GO_RAJ_BALCONY                  = 183495,

    // Chess event spells
    SPELL_CLEAR_BOARD               = 37366,                    // spell cast to clear the board at the end of the event
    SPELL_GAME_IN_SESSION           = 39331,                    // debuff on players received while the game is in session
    SPELL_FORCE_KILL_BUNNY          = 45260,                    // triggers 45259
    SPELL_GAME_OVER                 = 39401,                    // cast by Medivh on game end
    SPELL_VICTORY_VISUAL            = 39395,                    // cast by the Victory controller on game end

    FACTION_ID_CHESS_HORDE          = 1689,
    FACTION_ID_CHESS_ALLIANCE       = 1690,
};

enum OperaEvents
{
    OPERA_EVENT_WIZARD_OZ           = 1,
    OPERA_EVENT_RED_RIDING_HOOD     = 2,
    OPERA_EVENT_ROMULO_AND_JUL      = 3
};

struct OperaSpawns
{
    uint32 uiEntry;
    float fX, fY, fZ, fO;
};

static const OperaSpawns aOperaLocOz[MAX_OZ_OPERA_MOBS] =
{
    {NPC_DOROTHEE,  -10896.65f, -1757.62f, 90.55f, 4.86f},
    {NPC_ROAR,      -10889.53f, -1758.10f, 90.55f, 4.57f},
    {NPC_TINHEAD,   -10883.84f, -1758.85f, 90.55f, 4.53f},
    {NPC_STRAWMAN,  -10902.11f, -1756.45f, 90.55f, 4.66f},
};

static const OperaSpawns aOperaLocWolf = {NPC_GRANDMOTHER, -10892.01f, -1758.01f, 90.55f, 4.73f};
static const OperaSpawns aOperaLocJul  = {NPC_JULIANNE,    -10893.56f, -1760.43f, 90.55f, 4.55f};

static const float afChroneSpawnLoc[4] = { -10893.11f, -1757.85f, 90.55f, 4.60f};

class MANGOS_DLL_DECL instance_karazhan : public ScriptedInstance
{
    public:
        instance_karazhan(Map* pMap);
        ~instance_karazhan() {}

        void Initialize() override;
        bool IsEncounterInProgress() const override;

        void OnPlayerEnter(Player* pPlayer) override;
        void OnCreatureCreate(Creature* pCreature) override;
        void OnObjectCreate(GameObject* pGo) override;

        void OnCreatureDeath(Creature* pCreature) override;

        void SetData(uint32 uiType, uint32 uiData) override;
        uint32 GetData(uint32 uiType) const override;

        void DoPrepareOperaStage(Creature* pOrganizer);

        uint32 GetPlayerTeam() { return m_uiTeam; }
        bool IsFriendlyGameReady() { return m_bFriendlyGame; }
        void DoMoveChessPieceToSides(uint32 uiSpellId, uint32 uiFaction, bool bGameEnd = false);
        void GetChessPiecesByFaction(GuidList& lList, uint32 uiFaction) { lList = uiFaction == FACTION_ID_CHESS_ALLIANCE ? m_lChessPiecesAlliance : m_lChessPiecesHorde; }

        void GetNightbaneTriggers(GuidList& lList, bool bGround) { lList = bGround ? m_lNightbaneGroundTriggers : m_lNightbaneAirTriggers; }

        void Load(const char* chrIn) override;
        const char* Save() const override { return m_strInstData.c_str(); }

        void Update(uint32 uiDiff) override;

    private:
        void DoPrepareChessEvent();

        uint32 m_auiEncounter[MAX_ENCOUNTER];
        std::string m_strInstData;

        uint32 m_uiOperaEvent;
        uint32 m_uiOzDeathCount;
        uint32 m_uiTeam;                                    // Team of first entered player, used for the Chess event
        uint32 m_uiChessResetTimer;

        uint8 m_uiAllianceStalkerCount;
        uint8 m_uiHordeStalkerCount;

        bool m_bFriendlyGame;

        ObjectGuid m_HordeStatusGuid;
        ObjectGuid m_AllianceStatusGuid;

        GuidList m_lOperaTreeGuidList;
        GuidList m_lOperaHayGuidList;
        GuidList m_lNightbaneGroundTriggers;
        GuidList m_lNightbaneAirTriggers;

        GuidList m_lChessHordeStalkerList;
        GuidList m_lChessAllianceStalkerList;
        GuidList m_lChessPiecesAlliance;
        GuidList m_lChessPiecesHorde;
        GuidVector m_vHordeStalkers;
        GuidVector m_vAllianceStalkers;
};

#endif