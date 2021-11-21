#include "Context.h"
#include <iostream>
#include <string>
#include <cstring>

Context:Context(Load* l)
{
	this->strategy = l;
	
}

void Context:setReceipt(bool b)
{
	strategy->setReceipt(b);
}

bool Context:loadReceipt()
{
	return strategy->receive();
	
}

bool Context:testCapacity()
{
	return strategy->test();
}


Context:~Context()
{
	delete strategy;
	strategy=0;
}

