#include "EngineStore.h"


EngineStore::EngineStore(/* args */)
{
}

void EngineStore::storeMemento(EngineMemento* sol)
{
    memento=new EngineMemento(sol->getFuel(),sol->getTemp());
}

EngineMemento* EngineStore::retrieve()
{
    return memento;
}

EngineStore::~EngineStore()
{
}