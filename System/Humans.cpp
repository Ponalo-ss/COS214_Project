#include "Humans.h"
#include <iostream>
#include <string>
#include <cstring>

Humans:Humans(int capacity):Load(capacity)
{
	
}

bool Humans:receive()
{
	return this->received;
}

bool Humans:test()
{
	cout<<"Crew loaded onto Spacecraft"<<endl;
	int max = 10000;
	if(loadCapacity <= max)
	{
		return true;
	}
	else
	{
		return false;
}

Humans:~Humans()
{
	cout<<"Humans Destroyed"<<endl;
}

