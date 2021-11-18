#include "Context.h"
#include <iostream>
#include <string>
#include <cstring>

Context:Context(Load* l)
{
	this->l = l;
	
}

void Context:setReceipt(bool b)
{
	this->b = received;
}

bool Context:loadReceipt()
{
	return received;
	
}

bool Context:testCapacity()
{
	if(loadCapacity>0)
		{
			return true
		}
	else
		return false;
}


Context:~Context()
{
	cout<<"Context Destroyed"<<endl;
}

