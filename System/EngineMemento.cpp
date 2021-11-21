#include "EngineMemento.h"

EngineMemento::EngineMemento(int i,int t):fuel(i),temperature(t)
{
}

void EngineMemento::setFuel(int f)
{
    fuel=f;
}
void EngineMemento::setTemp(int f)
{
    temperature=f;
}

int EngineMemento::getFuel()
{
    return fuel;
}

int EngineMemento::getTemp()
{
    return temperature;
}

EngineMemento::~EngineMemento()
{
}