#ifndef Command_H
#define Command_H
#include "Engine.h"
using namespace std;

class Command
{
private:
    /* data */
    Engine* receiver;
public:
    Command(Engine*);
    virtual void execute()=0;
    virtual void undo()=0;
    Engine* getReceiver();
    virtual ~Command();
};



#endif