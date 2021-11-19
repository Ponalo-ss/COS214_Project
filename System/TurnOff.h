#ifndef TURNOFF_H
#define TURNOFF_H

#include "Command.h"

class TurnOff:public Command
{
private:
	/* data */
public:
	TurnOff(Engine*);
	void execute();
	void undo();
	~TurnOff();
};

#endif