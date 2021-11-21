#ifndef SpaceCraft_H
#define SpaceCraft_H
#include "Context.h"
#include "Creator.h"
#include<string>

using namespace std;

class SpaceCraft
{
public:
    Context* load;
    string destination;
    int loadCapacity;
    SpaceCraft(Context* l,string s);
    void sendSpaceCraft();
    void returnSpaceCraft();
    ~SpaceCraft();
protected:
    virtual void loadCargo(Context* crewC)=0;
};


#endif