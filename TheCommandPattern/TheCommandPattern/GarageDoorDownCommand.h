#pragma once
#include "Command.h"
#include "GarageDoor.h"
class GarageDoorDownCommand :
	public Command
{
private:
	GarageDoor* garageDoor;
public:
	GarageDoorDownCommand(GarageDoor* garageDoor);
	void execute();
	void undo();
};

