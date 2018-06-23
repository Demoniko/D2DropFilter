#ifndef _D2CONSTANTS_H
#define _D2CONSTANTS_H

/************************************************************
*	D2Constants.h											*
*															*
*	This file is meant to declare various					*
*	constant data. As you add more and more					*
*	custom code, you will be using many						*
*	constant values used by the game. the					*
*	unit type is a good example. declaring					*
*	constants also allows you to assign a name				*
*	to a number (which is usually more convenient)			*
*															*
*	Another advantage is, if this constant value			*
*	ever has to change for whatever reason you might		*
*	have to change it, you only have one file to change		*
*	rather than every single files using the said constant	*
*															*
*************************************************************/

/*

#define MAX_DIFFICULTY	3

enum D2TYPEUNITS
{
	UNIT_PLAYER,					//0x00 Players
	UNIT_MONSTER,					//0x01 Monsters
	UNIT_OBJECT,					//0x02 Objects
	UNIT_MISSILE,					//0x03 Missiles
	UNIT_ITEM,						//0x04 Items
	UNIT_TILE						//0x05 Tiles
};

*/

enum D2ITEMFLAGS
{
	ITEMFLAG_IDENTIFIED = 0x00000010,
	ITEMFLAG_SOCKETED = 0x00000800,
	ITEMFLAG_NAMED = 0x00008000,
	ITEMFLAG_INEXPENSIVE = 0x00020000,
	ITEMFLAG_COMPACTSAVE = 0x00200000,
	ITEMFLAG_ETHEREAL = 0x00400000,
	ITEMFLAG_RUNEWORD = 0x04000000
};

#endif