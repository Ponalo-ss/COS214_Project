#ifndef DragonSpaceCraft_H
#define DragonSpaceCraft_H
#include "SpaceCraft.h"

using namespace std;

class DragonSpaceCraft :public SpaceCraft
{
public:
    DragonSpaceCraft(Context* l,string s);
protected:
    void loadCargo(Context* load);
};

#endif