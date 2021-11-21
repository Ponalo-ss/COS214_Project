#include "Load.h"
#include <iostream>
#include <string>
#include <cstring>

Load:Load(int loadCapacity)
{
	this->loadCapacity = loadCapacity;
	this->received = false;
}

void Load:setReceipt(bool b)
{
	this->received = b;
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

