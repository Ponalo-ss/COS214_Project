#include "Cargo.h"
#include <iostream>
#include <string>
#include <cstring>

Cargo:Cargo(int capacity)
{
	this->capacity = capacity;
}

bool Cargo:receive()
{
	return received;
	
}

bool Cargo:test()
{
	this->testCapacity();
}

Cargo:~Cargo()
{
	cout<<"Cargo Destroyed"<<endl;
}

