#include "Load.h"
#include <iostream>
#include <string>
#include <cstring>

Load:Load(int loadCapacity)
{
	this->loadCapacity = loadCapacity;
}

void Load:setReceipt(bool b)
{
	this->b = received;
}

void Load:receive()
{
	return received;
}

bool Load:testCapacity()
{
	if(loadCapacity>0)
		{
			return true
		}
	else
		return false;
	
}

Load:~Load()
{
	cout<<"Load Destroyed"<<endl;
}

