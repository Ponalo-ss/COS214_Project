#ifndef EngineMemento_H
#define EngineMemento_H
using namespace std;

class EngineMemento
{
protected:
    /* data */
    int fuel;
    int temperature;
public:
    EngineMemento(int,int);
    void setFuel(int);
    int getFuel();
    int getTemp();
    void setTemp(int);
    friend class Engine;
    ~EngineMemento();
};




#endif