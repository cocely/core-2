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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef TRINITY_OBJECTDEFINES_H
#define TRINITY_OBJECTDEFINES_H

#include "Define.h"
#include "ObjectGuid.h"

#ifndef UINT64_C
	#define UINT64_C(x)  (x ## ULL)
#endif

// used for creating values for respawn for example
inline uint64 MAKE_PAIR64(uint32 l, uint32 h);
inline uint32 PAIR64_HIPART(uint64 x);
inline uint32 PAIR64_LOPART(uint64 x);
inline uint16 MAKE_PAIR16(uint8 l, uint8 h);
inline uint32 MAKE_PAIR32(uint16 l, uint16 h);
inline uint16 PAIR32_HIPART(uint32 x);
inline uint16 PAIR32_LOPART(uint32 x);

uint64 MAKE_PAIR64(uint32 l, uint32 h)
{
    return uint64(l | (uint64(h) << 32));
}

uint32 PAIR64_HIPART(uint64 x)
{
    return (uint32)((x >> 32) & UI64LIT(0x00000000FFFFFFFF));
}

uint32 PAIR64_LOPART(uint64 x)
{
    return (uint32)(x & UI64LIT(0x00000000FFFFFFFF));
}

uint16 MAKE_PAIR16(uint8 l, uint8 h)
{
    return uint16(l | (uint16(h) << 8));
}

uint32 MAKE_PAIR32(uint16 l, uint16 h)
{
    return uint32(l | (uint32(h) << 16));
}

uint16 PAIR32_HIPART(uint32 x)
{
    return (uint16)((x >> 16) & 0x0000FFFF);
}

uint16 PAIR32_LOPART(uint32 x)
{
    return (uint16)(x & 0x0000FFFF);
}

#define IS_EMPTY_GUID(Guid)          ( Guid == 0 )

#define IS_CREATURE_GUID(Guid)       ( GUID_HIPART(Guid) == HIGHGUID_UNIT )
#define IS_VEHICLE_GUID(Guid)        ( GUID_HIPART(Guid) == HIGHGUID_VEHICLE)
#define IS_CREATURE_OR_VEHICLE_GUID(Guid) ( IS_CREATURE_GUID(Guid) || IS_VEHICLE_GUID(Guid) )
#define IS_PET_GUID(Guid)            ( GUID_HIPART(Guid) == HIGHGUID_PET )
#define IS_CREATURE_OR_PET_GUID(Guid)( IS_CREATURE_GUID(Guid) || IS_PET_GUID(Guid) )
#define IS_PLAYER_GUID(Guid)         ( GUID_HIPART(Guid) == HIGHGUID_PLAYER && Guid!=0 )  // special case for empty guid need check (since HIGHGUID_PLAYER == 0)
#define IS_UNIT_GUID(Guid)           ( IS_CREATURE_OR_PET_GUID(Guid) || IS_PLAYER_GUID(Guid) )
#define IS_ITEM_GUID(Guid)           ( GUID_HIPART(Guid) == HIGHGUID_ITEM )
#define IS_GAMEOBJECT_GUID(Guid)     ( GUID_HIPART(Guid) == HIGHGUID_GAMEOBJECT )
#define IS_DYNAMICOBJECT_GUID(Guid)  ( GUID_HIPART(Guid) == HIGHGUID_DYNAMICOBJECT )
#define IS_CORPSE_GUID(Guid)         ( GUID_HIPART(Guid) == HIGHGUID_CORPSE )
#define IS_TRANSPORT(Guid)           ( GUID_HIPART(Guid) == HIGHGUID_TRANSPORT )
#define IS_MO_TRANSPORT(Guid)        ( GUID_HIPART(Guid) == HIGHGUID_MO_TRANSPORT )

// l - OBJECT_FIELD_GUID
// e - OBJECT_FIELD_ENTRY for GO (except GAMEOBJECT_TYPE_MO_TRANSPORT) and creatures or UNIT_FIELD_PETNUMBER for pets
// h - OBJECT_FIELD_GUID + 1
#define MAKE_NEW_GUID(l, e, h)   uint64( uint64(l) | ( uint64(e) << 24 ) | ( uint64(h) << 48 ) )

#define GUID_HIPART(x)   (uint32)((uint64(x) >> 48) & 0x0000FFFF)

// We have different low and middle part size for different guid types
#define _GUID_ENPART_2(x) 0
#define _GUID_ENPART_3(x) (uint32)((uint64(x) >> 24) & 0x0000000000FFFFFFLL)
#define _GUID_LOPART_2(x) (uint32)(uint64(x)         & 0x00000000FFFFFFFFLL)
#define _GUID_LOPART_3(x) (uint32)(uint64(x)         & 0x0000000000FFFFFFLL)

inline bool IsGuidHaveEnPart(uint64 const& guid)
{
    switch(GUID_HIPART(guid))
    {
        case HIGHGUID_ITEM:
        case HIGHGUID_PLAYER:
        case HIGHGUID_DYNAMICOBJECT:
        case HIGHGUID_CORPSE:
            return false;
        case HIGHGUID_GAMEOBJECT:
        case HIGHGUID_TRANSPORT:
        case HIGHGUID_UNIT:
        case HIGHGUID_PET:
        case HIGHGUID_MO_TRANSPORT:
        default:
            return true;
    }
}

#define GUID_ENPART(x) (IsGuidHaveEnPart(x) ? _GUID_ENPART_3(x) : _GUID_ENPART_2(x))
#define GUID_LOPART(x) (IsGuidHaveEnPart(x) ? _GUID_LOPART_3(x) : _GUID_LOPART_2(x))

inline char const* GetLogNameForGuid(uint64 guid)
{
    switch(GUID_HIPART(guid))
    {
        case HIGHGUID_ITEM:         return "item";
        case HIGHGUID_PLAYER:       return guid ? "player" : "none";
        case HIGHGUID_GAMEOBJECT:   return "gameobject";
        case HIGHGUID_TRANSPORT:    return "transport";
        case HIGHGUID_UNIT:         return "creature";
        case HIGHGUID_PET:          return "pet";
        case HIGHGUID_DYNAMICOBJECT:return "dynobject";
        case HIGHGUID_CORPSE:       return "corpse";
        case HIGHGUID_MO_TRANSPORT: return "mo_transport";
        default:
            return "<unknown>";
    }
}
#endif

