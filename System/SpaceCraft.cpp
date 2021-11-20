#include<iostream>
#include<string>
#include "SpaceCraft.h"
#include "Creator.h"
#include "CrewDragon.h"
#include "DragonSpaceCraft.h"

SpaceCraft::SpaceCraft(Context* l,string s)
{
    this->load = l;
    this-> destination = s;
}

void SpaceCraft::sendSpaceCraft()
{
    this->load->setReceipt(true);

    string s = "Spacecraft has launched from " + this->destination + ".....heading to International Space Station";

    cout<< s << endl;
}

void SpaceCraft::returnSpaceCraft()
{
    string s = "Spacecraft returning from International Space Station......heading to " + this->destination;

    cout<< s << endl;
}
    
SpaceCraft::~SpaceCraft()
{

}

void DragonSpaceCraft::loadCargo(Context* crewC)
{
    load = crewC;

    if(load->testCapacity() == true)
    {
        sendSpaceCraft();

        if(load->loadReceipt() == true)
        {
            returnSpaceCraft();
        }
        else
        {
            cout << "There was an issue in unloading the cargo from the Dragon Spacecraft"<<endl;
        }
    }
    else
    {
        cout << "There was an issue in loading the cargo onto the Dragon Spacecraft"<<endl;
    }
    
}

void CrewDragon::loadCargo(Context* load)
{
    load = crewC;

    if(load->testCapacity() == true)
    {
        sendSpaceCraft();

        if(load->loadReceipt() == true)
        {
            returnSpaceCraft();
        }
        else
        {
            cout << "There was an issue in unloading the cargo and crew from the Crew Dragon"<<endl;
        }
    }
    else
    {
        cout << "There was an issue in loading the cargo and crew onto the Crew Dragon"<<endl;
    }
}

CrewDragon::CrewDragon(Context* l, string s):SpaceCraft(l,s)
{

}

DragonSpaceCraft::DragonSpaceCraft(Context* l,string s):SpaceCraft(l,s)
{

}