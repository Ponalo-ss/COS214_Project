#ifndef EngineStore_H
#define EngineStore_H
#include "EngineMemento.h"

class EngineStore
{
private:
    /* data */
    EngineMemento* memento;
public:
    EngineStore(/* args */);
    void storeMemento(EngineMemento*);
    EngineMemento* retrieve();
    ~EngineStore();
};




#endif