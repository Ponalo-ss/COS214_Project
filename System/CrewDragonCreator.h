#ifndef CrewDragonCreator_H
#define CrewDragonCreator_H
#include "SpaceCraft.h"
#include "Creator.h"

using namespace std;

class CrewDragonCreator: public Creator
{
    protected:
        Spacecraft* createCraft(Context* l,string s);
};
#endif