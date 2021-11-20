#ifndef CrewDragon_H
#define CrewDragon_H
#include "SpaceCraft.h"

class CrewDragon :public SpaceCraft
{
public:
    CrewDragon(Context* l,string s);
protected:
    void loadCargo(Context* load);
};

#endif