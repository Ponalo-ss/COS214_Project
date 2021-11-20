#ifndef DragonSpacecraftCreator_H
#define DragonSpacecraftCreator_H
#include "SpaceCraft.h"
#include "Creator.h"

class DragonSpacecraftCreator: public Creator
{
protected:
    Spacecraft* createCraft(Context* l,string s);
};

#endif