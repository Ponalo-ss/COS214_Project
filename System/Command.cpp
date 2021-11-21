#include "Command.h"

Command::Command(Engine * e){
	receiver = e;
}

Engine * Command::getReceiver(){
	return receiver;
}

Command::~Command()
{
	
}