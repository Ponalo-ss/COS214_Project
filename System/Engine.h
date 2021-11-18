#ifndef Engine_H
#define Engine_H
#include <string>
#include<iostream>

using namespace std;
class Engine
{
protected:
    /* data */
    int pressure;
    int temp;
    int fGradient;
    int fuel;
    bool on;
    bool status;
public:
    Engine(int,int,int,int);
    //EngineMemento* createMemento();
    //virtual void retrieveMemento(EngineMemento*)=0;
    //virtual void On();
    //virtual void Off();
    //virtual bool staticFire()=0;
    //virtual void refill();
    friend class Rocket;
    virtual bool testEngine()=0; //Strategy design pattern
    //string getType();

    virtual ~Engine();
};

#endif