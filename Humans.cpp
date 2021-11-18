#include "Humans.h"
#include <iostream>
#include <string>
#include <cstring>

Humans:Humans(int capacity)
{
	this->capacity = capacity;
}

bool Humans:receive()
{
	return received;
}

bool Humans:test()
{
	this->testCapacity();
}

Humans:~Humans()
{
	cout<<"Humans Destroyed"<<endl;
}

