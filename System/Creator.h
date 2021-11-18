#ifndef Creator_H
#define Creator_H
#include "SpaceCraft.h"

class Creator
{
public:
    Spacecraft* create(Context* l,string s);
protected:
    virtual Spacecraft* createCraft(Context* l,string s)=0;
};

#endif