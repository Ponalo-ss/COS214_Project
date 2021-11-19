#include "Cargo.h"
#include <iostream>
#include <string>
#include <cstring>

Cargo:Cargo(int capacity):Load(capacity)
{
	
}

bool Cargo:receive()
{
	return this->received;
}

bool Cargo:test()
{
	cout<<"Cargo loaded onto Spacecraft"<<endl;
	int max = 10000;
	if(loadCapacity <= max)
	{
		return true;
	}
	else
	{
		return false;
}

Cargo:~Cargo()
{
	cout<<"Cargo Destroyed"<<endl;
}

