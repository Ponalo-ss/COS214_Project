#include "Falconheavy.h"

FalconHeavy::FalconHeavy()
{

}
void FalconHeavy::loadSpaceCraft(SpaceCraft* space)
{
    sp.push_back(space);
}

bool FalconHeavy::stage1Test()
{
    cout<<"Initiating stage1 test of a FaconHeavy"<<endl;
    return Rocket::stage1Test();
}

bool FalconHeavy::stage2Test()
{
    cout<<"Initiating Stage 2 test of FalconHeavy"<<endl;
    return Rocket::stage2Test();
}

FalconHeavy::~FalconHeavy()
{
}
