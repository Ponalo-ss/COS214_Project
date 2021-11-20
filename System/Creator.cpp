#include <iostream>
#include <string>
#include "SpaceCraft.h"
#include "Creator.h"
#include "CrewDragonCreator.h"
#include "DragonSpacecraftCreator.h"

using namespace std;

SpaceCraft* Creator::create(Context* l,string s) 
{
    cout<<"Preparing spacecraft...."<<endl;
    return createCraft(l, s);
}

Spacecraft* CrewDragonCreator::createCraft(Context* l,string s)
{
    cout<< "Crew Dragon Ready..." <<endl;
    return new CrewDragon(l, s);
}

Spacecraft* DragonSpacecraftCreator::createCraft(Context* l,string s)
{
    cout<< "Dragon Spacecraft Ready..." <<endl;
    return new DragonSpacecraft(l, s);
}

