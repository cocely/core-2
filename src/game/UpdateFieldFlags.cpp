/*
 * Copyright (C) 2008-2014 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "UpdateFieldFlags.h"

uint32 ItemUpdateFieldFlags[CONTAINER_END] =
{
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID+1
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_TYPE
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_ENTRY
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_SCALE_X
    UF_FLAG_NONE,                                           // OBJECT_FIELD_PADDING
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_OWNER
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_OWNER+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_CONTAINED
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_CONTAINED+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_CREATOR
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_CREATOR+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_GIFTCREATOR
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_GIFTCREATOR+1
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_STACK_COUNT
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_DURATION
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_SPELL_CHARGES
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_SPELL_CHARGES+1
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_SPELL_CHARGES+2
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_SPELL_CHARGES+3
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_SPELL_CHARGES+4
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_FLAGS
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_1_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_1_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_1_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_2_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_2_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_2_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_3_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_3_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_3_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_4_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_4_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_4_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_5_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_5_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_5_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_6_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_6_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_6_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_7_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_7_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_7_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_8_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_8_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_8_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_9_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_9_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_9_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_10_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_10_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_10_3
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_11_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_11_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_11_3
#ifdef LICH_KING
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_12_1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_12_1+1
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_ENCHANTMENT_12_3
#endif
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_PROPERTY_SEED
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_RANDOM_PROPERTIES_ID
#ifndef LICH_KING
    UF_FLAG_PUBLIC,                                          // ITEM_FIELD_ITEM_TEXT_ID
#endif
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_DURABILITY
    UF_FLAG_OWNER | UF_FLAG_ITEM_OWNER,                     // ITEM_FIELD_MAXDURABILITY
#ifdef LICH_KING
    UF_FLAG_PUBLIC,                                         // ITEM_FIELD_CREATE_PLAYED_TIME
    UF_FLAG_NONE,                                           // ITEM_FIELD_PAD
#endif
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_NUM_SLOTS
    UF_FLAG_NONE,                                           // CONTAINER_ALIGN_PAD
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+1
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+2
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+3
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+4
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+5
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+6
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+7
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+8
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+9
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+10
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+11
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+12
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+13
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+14
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+15
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+16
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+17
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+18
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+19
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+20
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+21
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+22
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+23
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+24
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+25
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+26
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+27
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+28
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+29
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+30
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+31
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+32
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+33
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+34
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+35
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+36
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+37
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+38
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+39
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+40
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+41
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+42
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+43
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+44
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+45
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+46
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+47
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+48
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+49
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+50
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+51
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+52
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+53
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+54
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+55
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+56
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+57
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+58
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+59
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+60
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+61
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+62
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+63
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+64
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+65
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+66
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+67
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+68
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+69
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+70
    UF_FLAG_PUBLIC,                                         // CONTAINER_FIELD_SLOT_1+71
};

uint32 UnitUpdateFieldFlags[PLAYER_END] =
{
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID+1
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_TYPE
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_ENTRY
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_SCALE_X
    UF_FLAG_NONE,                                           // OBJECT_FIELD_PADDING
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHARM
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHARM+1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_SUMMON
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_SUMMON+1
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // UNIT_FIELD_CRITTER
    UF_FLAG_PRIVATE,                                        // UNIT_FIELD_CRITTER+1
#endif
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHARMEDBY
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHARMEDBY+1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_SUMMONEDBY
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_SUMMONEDBY+1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CREATEDBY
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CREATEDBY+1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_TARGET
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_TARGET+1
#ifdef LICH_KING
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHANNEL_OBJECT
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHANNEL_OBJECT+1
    UF_FLAG_PUBLIC,                                         // UNIT_CHANNEL_SPELL
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BYTES_0
#else
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_PERSUADED
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_PERSUADED
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHANNEL_OBJECT
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_CHANNEL_OBJECT
#endif
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_HEALTH
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER2
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER3
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER4
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER5
#ifdef LICH_KING
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER6
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_POWER7
#endif
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXHEALTH
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER2
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER3
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER4
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER5
#ifdef LICH_KING
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER6
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MAXPOWER7
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER+6
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER+6
#endif
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_LEVEL
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_FACTIONTEMPLATE
#ifdef LICH_KING
    UF_FLAG_PUBLIC,                                         // UNIT_VIRTUAL_ITEM_SLOT_ID
    UF_FLAG_PUBLIC,                                         // UNIT_VIRTUAL_ITEM_SLOT_ID+1
    UF_FLAG_PUBLIC,                                         // UNIT_VIRTUAL_ITEM_SLOT_ID+2
#else
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BYTES_0
    UF_FLAG_PUBLIC,                                         // UNIT_VIRTUAL_ITEM_SLOT_DISPLAY
    UF_FLAG_PUBLIC,                                         // UNIT_VIRTUAL_ITEM_SLOT_DISPLAY+1
    UF_FLAG_PUBLIC,                                         // UNIT_VIRTUAL_ITEM_SLOT_DISPLAY+2
    UF_FLAG_PUBLIC,                                         ///UNIT_VIRTUAL_ITEM_INFO
    UF_FLAG_PUBLIC,                                         ///UNIT_VIRTUAL_ITEM_INFO+1
    UF_FLAG_PUBLIC,                                         ///UNIT_VIRTUAL_ITEM_INFO+2
    UF_FLAG_PUBLIC,                                         ///UNIT_VIRTUAL_ITEM_INFO+3
    UF_FLAG_PUBLIC,                                         ///UNIT_VIRTUAL_ITEM_INFO+4
    UF_FLAG_PUBLIC,                                         ///UNIT_VIRTUAL_ITEM_INFO+5
#endif
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_FLAGS
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_FLAGS_2
#ifndef LICH_KING
    UF_FLAG_PUBLIC, //UNIT_FIELD_AURA
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+10
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+20
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+30
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+40
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+50
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+55
    UF_FLAG_PUBLIC, //UNIT_FIELD_AURAFLAGS
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+10
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+13
    UF_FLAG_PUBLIC,//UNIT_FIELD_AURALEVELS
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+10
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+13
    UF_FLAG_PUBLIC,//UNIT_FIELD_AURAAPPLICATIONS
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+10
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC, //+13
#endif
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_AURASTATE
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BASEATTACKTIME
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BASEATTACKTIME+1
    UF_FLAG_PRIVATE,                                        // UNIT_FIELD_RANGEDATTACKTIME
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BOUNDINGRADIUS
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_COMBATREACH
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_DISPLAYID
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_NATIVEDISPLAYID
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_MOUNTDISPLAYID
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_MINDAMAGE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_MAXDAMAGE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_MINOFFHANDDAMAGE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_MAXOFFHANDDAMAGE
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BYTES_1
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_PETNUMBER
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_PET_NAME_TIMESTAMP
    UF_FLAG_OWNER,                                          // UNIT_FIELD_PETEXPERIENCE
    UF_FLAG_OWNER,                                          // UNIT_FIELD_PETNEXTLEVELEXP
    UF_FLAG_DYNAMIC,                                        // UNIT_DYNAMIC_FLAGS
#ifndef LICH_KING
    UF_FLAG_PUBLIC,                                         // UNIT_CHANNEL_SPELL
#endif
    UF_FLAG_PUBLIC,                                         // UNIT_MOD_CAST_SPEED
    UF_FLAG_PUBLIC,                                         // UNIT_CREATED_BY_SPELL
    UF_FLAG_DYNAMIC,                                        // UNIT_NPC_FLAGS
    UF_FLAG_PUBLIC,                                         // UNIT_NPC_EMOTESTATE
    UF_FLAG_OWNER,                                          // UNIT_TRAINING_POINTS
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_STAT0
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_STAT1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_STAT2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_STAT3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_STAT4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POSSTAT0
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POSSTAT1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POSSTAT2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POSSTAT3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POSSTAT4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_NEGSTAT0
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_NEGSTAT1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_NEGSTAT2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_NEGSTAT3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_NEGSTAT4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER | UF_FLAG_SPECIAL_INFO, // UNIT_FIELD_RESISTANCES+6
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSPOSITIVE+6
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RESISTANCEBUFFMODSNEGATIVE+6
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BASE_MANA
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_BASE_HEALTH
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_BYTES_2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_ATTACK_POWER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_ATTACK_POWER_MODS
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_ATTACK_POWER_MULTIPLIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RANGED_ATTACK_POWER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RANGED_ATTACK_POWER_MODS
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_MINRANGEDDAMAGE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_MAXRANGEDDAMAGE
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MODIFIER+6
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+1
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+2
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+3
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+4
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+5
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_POWER_COST_MULTIPLIER+6
    UF_FLAG_PRIVATE | UF_FLAG_OWNER,                        // UNIT_FIELD_MAXHEALTHMODIFIER
#ifdef LICH_KING
    UF_FLAG_PUBLIC,                                         // UNIT_FIELD_HOVERHEIGHT
#endif
    UF_FLAG_NONE,                                           // UNIT_FIELD_PADDING
    UF_FLAG_PUBLIC,                                         // PLAYER_DUEL_ARBITER
    UF_FLAG_PUBLIC,                                         // PLAYER_DUEL_ARBITER+1
    UF_FLAG_PUBLIC,                                         // PLAYER_FLAGS
    UF_FLAG_PUBLIC,                                         // PLAYER_GUILDID
    UF_FLAG_PUBLIC,                                         // PLAYER_GUILDRANK
    UF_FLAG_PUBLIC,                                         // PLAYER_BYTES
    UF_FLAG_PUBLIC,                                         // PLAYER_BYTES_2
    UF_FLAG_PUBLIC,                                         // PLAYER_BYTES_3
    UF_FLAG_PUBLIC,                                         // PLAYER_DUEL_TEAM
    UF_FLAG_PUBLIC,                                         // PLAYER_GUILD_TIMESTAMP
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_1_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_1_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_1_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_1_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_1_4
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_2_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_2_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_2_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_2_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_2_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_3_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_3_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_3_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_3_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_3_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_4_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_4_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_4_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_4_3+1
 #endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_4_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_5_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_5_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_5_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_5_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_5_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_6_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_6_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_6_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_6_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_6_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_7_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_7_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_7_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_7_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_7_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_8_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_8_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_8_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_8_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_8_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_9_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_9_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_9_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_9_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_9_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_10_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_10_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_10_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_10_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_10_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_11_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_11_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_11_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_11_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_11_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_12_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_12_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_12_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_12_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_12_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_13_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_13_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_13_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_13_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_13_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_14_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_14_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_14_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_14_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_14_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_15_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_15_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_15_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_15_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_15_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_16_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_16_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_16_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_16_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_16_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_17_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_17_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_17_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_17_3+1
 #endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_17_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_18_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_18_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_18_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_18_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_18_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_19_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_19_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_19_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_19_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_19_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_20_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_20_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_20_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_20_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_20_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_21_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_21_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_21_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_21_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_21_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_22_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_22_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_22_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_22_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_22_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_23_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_23_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_23_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_23_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_23_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_24_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_24_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_24_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_24_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_24_5
    UF_FLAG_PARTY_MEMBER,                                   // PLAYER_QUEST_LOG_25_1
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_25_2
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_25_3
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_25_3+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_QUEST_LOG_25_5
#ifdef LICH_KING
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_1_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_1_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_2_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_2_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_3_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_3_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_4_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_4_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_5_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_5_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_6_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_6_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_7_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_7_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_8_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_8_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_9_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_9_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_10_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_10_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_11_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_11_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_12_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_12_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_13_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_13_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_14_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_14_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_15_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_15_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_16_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_16_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_17_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_17_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_18_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_18_ENCHANTMENT
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_19_ENTRYID
    UF_FLAG_PUBLIC,                                         // PLAYER_VISIBLE_ITEM_19_ENCHANTMENT
#else
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_CREATOR
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_CREATOR+1 
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+1
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+2
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+3
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+4
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+5
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+6
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+7
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+8
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+9
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+10
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_0+11
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_1_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_2_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_2_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_2_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_2_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_3_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_3_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_3_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_3_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_4_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_4_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_4_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_4_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_5_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_5_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_5_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_5_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_6_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_6_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_6_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_6_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_7_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_7_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_7_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_7_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_8_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_8_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_8_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_8_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_9_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_9_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_9_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_9_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_10_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_10_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_10_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_10_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_11_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_11_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_11_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_11_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_12_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_12_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_12_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_12_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_13_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_13_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_13_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_13_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_14_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_14_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_14_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_14_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_15_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_15_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_15_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_15_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_16_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_16_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_16_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_16_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_17_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_17_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_17_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_17_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_18_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_18_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_18_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_18_PAD
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_19_CREATOR
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_19_0
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_19_PROPERTIES
    UF_FLAG_PUBLIC,                                         //PLAYER_VISIBLE_ITEM_19_PAD
#endif
    UF_FLAG_PUBLIC,                                         // PLAYER_CHOSEN_TITLE
#ifdef LICH_KING
    UF_FLAG_PUBLIC,                                         // PLAYER_FAKE_INEBRIATION
#endif
    UF_FLAG_NONE,                                           // PLAYER_FIELD_PAD_0
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+24
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+25
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+26
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+27
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+28
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+29
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+30
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+31
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+32
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+33
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+34
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+35
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+36
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+37
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+38
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+39
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+40
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+41
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+42
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+43
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+44
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_INV_SLOT_HEAD+45
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+25
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+26
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+27
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+28
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+29
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+30
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PACK_SLOT_1+31
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+25
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+26
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+27
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+28
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+29
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+30
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+31
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+32
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+33
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+34
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+35
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+36
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+37
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+38
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+39
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+40
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+41
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+42
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+43
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+44
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+45
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+46
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+47
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+48
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+49
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+50
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+51
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+52
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+53
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+54
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANK_SLOT_1+55
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BANKBAG_SLOT_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VENDORBUYBACK_SLOT_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+25
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+26
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+27
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+28
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+29
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+30
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+31
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+32
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+33
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+34
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+35
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+36
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+37
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+38
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+39
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+40
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+41
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+42
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+43
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+44
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+45
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+46
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+47
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+48
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+49
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+50
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+51
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+52
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+53
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+54
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+55
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+56
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+57
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+58
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+59
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+60
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+61
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+62
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KEYRING_SLOT_1+63
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+25
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+26
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+27
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+28
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+29
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+30
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+31
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+32
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+33
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+34
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+35
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+36
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+37
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+38
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+39
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+40
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+41
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+42
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+43
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+44
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+45
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+46
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+47
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+48
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+49
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+50
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+51
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+52
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+53
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+54
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+55
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+56
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+57
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+58
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+59
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+60
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+61
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+62
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_CURRENCYTOKEN_SLOT_1+63
#else
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VANITYPET_SLOT_1
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VANITYPET_SLOT_1+10
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,                                        
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VANITYPET_SLOT_1+20
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,                                        
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VANITYPET_SLOT_1+30
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_VANITYPET_SLOT_1+35
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_FARSIGHT
    UF_FLAG_PRIVATE,                                        // PLAYER_FARSIGHT+1
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES+1
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES2
    UF_FLAG_PRIVATE,                                        // PLAYER__FIELD_KNOWN_TITLES2+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KNOWN_CURRENCIES
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KNOWN_CURRENCIES+1
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_XP
    UF_FLAG_PRIVATE,                                        // PLAYER_NEXT_LEVEL_XP
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+25
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+26
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+27
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+28
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+29
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+30
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+31
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+32
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+33
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+34
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+35
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+36
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+37
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+38
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+39
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+40
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+41
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+42
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+43
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+44
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+45
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+46
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+47
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+48
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+49
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+50
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+51
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+52
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+53
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+54
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+55
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+56
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+57
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+58
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+59
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+60
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+61
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+62
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+63
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+64
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+65
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+66
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+67
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+68
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+69
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+70
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+71
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+72
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+73
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+74
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+75
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+76
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+77
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+78
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+79
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+80
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+81
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+82
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+83
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+84
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+85
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+86
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+87
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+88
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+89
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+90
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+91
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+92
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+93
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+94
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+95
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+96
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+97
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+98
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+99
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+100
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+101
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+102
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+103
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+104
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+105
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+106
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+107
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+108
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+109
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+110
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+111
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+112
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+113
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+114
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+115
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+116
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+117
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+118
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+119
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+120
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+121
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+122
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+123
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+124
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+125
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+126
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+127
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+128
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+129
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+130
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+131
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+132
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+133
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+134
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+135
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+136
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+137
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+138
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+139
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+140
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+141
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+142
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+143
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+144
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+145
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+146
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+147
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+148
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+149
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+150
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+151
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+152
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+153
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+154
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+155
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+156
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+157
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+158
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+159
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+160
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+161
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+162
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+163
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+164
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+165
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+166
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+167
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+168
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+169
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+170
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+171
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+172
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+173
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+174
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+175
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+176
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+177
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+178
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+179
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+180
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+181
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+182
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+183
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+184
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+185
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+186
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+187
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+188
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+189
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+190
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+191
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+192
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+193
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+194
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+195
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+196
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+197
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+198
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+199
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+200
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+201
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+202
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+203
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+204
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+205
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+206
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+207
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+208
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+209
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+210
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+211
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+212
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+213
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+214
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+215
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+216
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+217
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+218
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+219
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+220
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+221
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+222
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+223
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+224
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+225
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+226
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+227
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+228
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+229
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+230
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+231
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+232
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+233
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+234
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+235
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+236
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+237
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+238
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+239
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+240
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+241
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+242
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+243
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+244
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+245
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+246
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+247
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+248
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+249
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+250
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+251
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+252
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+253
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+254
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+255
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+256
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+257
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+258
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+259
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+260
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+261
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+262
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+263
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+264
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+265
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+266
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+267
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+268
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+269
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+270
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+271
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+272
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+273
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+274
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+275
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+276
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+277
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+278
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+279
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+280
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+281
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+282
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+283
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+284
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+285
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+286
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+287
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+288
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+289
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+290
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+291
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+292
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+293
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+294
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+295
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+296
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+297
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+298
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+299
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+300
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+301
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+302
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+303
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+304
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+305
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+306
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+307
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+308
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+309
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+310
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+311
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+312
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+313
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+314
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+315
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+316
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+317
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+318
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+319
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+320
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+321
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+322
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+323
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+324
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+325
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+326
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+327
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+328
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+329
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+330
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+331
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+332
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+333
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+334
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+335
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+336
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+337
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+338
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+339
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+340
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+341
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+342
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+343
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+344
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+345
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+346
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+347
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+348
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+349
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+350
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+351
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+352
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+353
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+354
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+355
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+356
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+357
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+358
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+359
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+360
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+361
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+362
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+363
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+364
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+365
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+366
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+367
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+368
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+369
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+370
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+371
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+372
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+373
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+374
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+375
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+376
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+377
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+378
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+379
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+380
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+381
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+382
    UF_FLAG_PRIVATE,                                        // PLAYER_SKILL_INFO_1_1+383
    UF_FLAG_PRIVATE,                                        // PLAYER_CHARACTER_POINTS1
    UF_FLAG_PRIVATE,                                        // PLAYER_CHARACTER_POINTS2
    UF_FLAG_PRIVATE,                                        // PLAYER_TRACK_CREATURES
    UF_FLAG_PRIVATE,                                        // PLAYER_TRACK_RESOURCES
    UF_FLAG_PRIVATE,                                        // PLAYER_BLOCK_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_DODGE_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_PARRY_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPERTISE
    UF_FLAG_PRIVATE,                                        // PLAYER_OFFHAND_EXPERTISE
    UF_FLAG_PRIVATE,                                        // PLAYER_CRIT_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_RANGED_CRIT_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_OFFHAND_CRIT_PERCENTAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_SPELL_CRIT_PERCENTAGE1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_SHIELD_BLOCK
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_SHIELD_BLOCK_CRIT_PERCENTAGE
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+24
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+25
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+26
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+27
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+28
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+29
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+30
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+31
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+32
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+33
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+34
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+35
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+36
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+37
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+38
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+39
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+40
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+41
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+42
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+43
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+44
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+45
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+46
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+47
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+48
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+49
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+50
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+51
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+52
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+53
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+54
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+55
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+56
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+57
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+58
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+59
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+60
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+61
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+62
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+63
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+64
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+65
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+66
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+67
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+68
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+69
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+70
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+71
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+72
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+73
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+74
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+75
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+76
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+77
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+78
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+79
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+80
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+81
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+82
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+83
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+84
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+85
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+86
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+87
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+88
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+89
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+90
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+91
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+92
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+93
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+94
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+95
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+96
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+97
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+98
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+99
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+100
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+101
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+102
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+103
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+104
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+105
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+106
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+107
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+108
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+109
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+110
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+111
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+112
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+113
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+114
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+115
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+116
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+117
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+118
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+119
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+120
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+121
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+122
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+123
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+124
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+125
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+126
    UF_FLAG_PRIVATE,                                        // PLAYER_EXPLORED_ZONES_1+127
    UF_FLAG_PRIVATE,                                        // PLAYER_REST_STATE_EXPERIENCE
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COINAGE
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_POS+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_NEG+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_DAMAGE_DONE_PCT+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_HEALING_DONE_POS
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_HEALING_PCT
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_HEALING_DONE_PCT
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_TARGET_RESISTANCE
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BYTES
    UF_FLAG_PRIVATE,                                        // PLAYER_AMMO_ID
    UF_FLAG_PRIVATE,                                        // PLAYER_SELF_RES_SPELL
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_PVP_MEDALS
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_PRICE_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BUYBACK_TIMESTAMP_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_KILLS
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_TODAY_CONTRIBUTION
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_YESTERDAY_CONTRIBUTION
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_LIFETIME_HONORBALE_KILLS
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_BYTES2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_WATCHED_FACTION_INDEX
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+23
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_COMBAT_RATING_1+24
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+17
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_TEAM_INFO_1_1+20
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_HONOR_CURRENCY
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_ARENA_CURRENCY
#ifndef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_MANA_REGEN
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MOD_MANA_REGEN_INTERRUPT
#endif
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_MAX_LEVEL
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+6
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+7
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+8
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+9
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+10
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+11
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+12
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+13
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+14
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+15
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+16
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+17
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+18
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+19
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+20
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+21
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+22
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+23
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_DAILY_QUESTS_1+24
#ifdef LICH_KING
    UF_FLAG_PRIVATE,                                        // PLAYER_RUNE_REGEN_1
    UF_FLAG_PRIVATE,                                        // PLAYER_RUNE_REGEN_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_RUNE_REGEN_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_RUNE_REGEN_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_NO_REAGENT_COST_1
    UF_FLAG_PRIVATE,                                        // PLAYER_NO_REAGENT_COST_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_NO_REAGENT_COST_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPH_SLOTS_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+1
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+2
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+3
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+4
    UF_FLAG_PRIVATE,                                        // PLAYER_FIELD_GLYPHS_1+5
    UF_FLAG_PRIVATE,                                        // PLAYER_GLYPHS_ENABLED
    UF_FLAG_PRIVATE,                                        // PLAYER_PET_SPELL_POWER
#endif
};

uint32 GameObjectUpdateFieldFlags[GAMEOBJECT_END] =
{
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID+1
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_TYPE
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_ENTRY
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_SCALE_X
    UF_FLAG_NONE,                                           // OBJECT_FIELD_PADDING
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_CREATED_BY
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_CREATED_BY+1
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_DISPLAYID
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_FLAGS
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_PARENTROTATION
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_PARENTROTATION+1
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_PARENTROTATION+2
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_PARENTROTATION+3
#ifdef LICH_KING
    UF_FLAG_DYNAMIC,                                       // GAMEOBJECT_DYNAMIC
#else
    UF_FLAG_PUBLIC,                                        // GAMEOBJECT_STATE
    UF_FLAG_PUBLIC,                                        // GAMEOBJECT_POS_X
    UF_FLAG_PUBLIC,                                        // GAMEOBJECT_POS_Y
    UF_FLAG_PUBLIC,                                        // GAMEOBJECT_POS_Z
    UF_FLAG_PUBLIC,                                        // GAMEOBJECT_FACING
    UF_FLAG_DYNAMIC,                                       // GAMEOBJECT_DYN_FLAGS
#endif
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_FACTION
#ifdef LICH_KING
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_LEVEL
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_BYTES_1
#else
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_TYPE_ID
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_LEVEL
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_ARTKIT
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_ANIMPROGRESS
    UF_FLAG_PUBLIC,                                         // GAMEOBJECT_PADDING
#endif
};

uint32 DynamicObjectUpdateFieldFlags[DYNAMICOBJECT_END] =
{
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID+1
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_TYPE
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_ENTRY
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_SCALE_X
    UF_FLAG_NONE,                                           // OBJECT_FIELD_PADDING
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_CASTER
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_CASTER+1
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_BYTES
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_SPELLID
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_RADIUS
#ifndef LICH_KING
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_POS_X
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_POS_Y
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_POS_Z
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_FACING
#endif
    UF_FLAG_PUBLIC,                                         // DYNAMICOBJECT_CASTTIME
};

uint32 CorpseUpdateFieldFlags[CORPSE_END] =
{
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_GUID+1
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_TYPE
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_ENTRY
    UF_FLAG_PUBLIC,                                         // OBJECT_FIELD_SCALE_X
    UF_FLAG_NONE,                                           // OBJECT_FIELD_PADDING
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_OWNER
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_OWNER+1
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_PARTY
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_PARTY+1
#ifndef LICH_KING
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_FACING
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_POS_X
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_POS_Y
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_POS_Z
#endif
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_DISPLAY_ID
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+1
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+2
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+3
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+4
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+5
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+6
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+7
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+8
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+9
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+10
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+11
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+12
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+13
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+14
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+15
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+16
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+17
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_ITEM+18
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_BYTES_1
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_BYTES_2
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_GUILD
    UF_FLAG_PUBLIC,                                         // CORPSE_FIELD_FLAGS
    UF_FLAG_DYNAMIC,                                        // CORPSE_FIELD_DYNAMIC_FLAGS
    UF_FLAG_NONE,                                           // CORPSE_FIELD_PAD
};
