#ifndef TurnOn_H
#define TurnOn_H
#include "Command.h"

class TurnOn:public Command
{
private:
	/* data */
public:
	TurnOn(Engine*);
	void execute();
	void undo();
	~TurnOn();
};

#endif