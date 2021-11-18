#ifndef FalconHeavy_H
#define FalconHeavy_H
#include "Rocket.h"
#include "SpaceCraft.h"
using namespace std;

class FalconHeavy : public Rocket
{
private:
    /* data */
    vector<SpaceCraft*> sp;
public:
    FalconHeavy();
    void loadSpaceCraft(SpaceCraft*);
    bool stage1Test();
    bool stage2Test();
    ~FalconHeavy();
};


#endif