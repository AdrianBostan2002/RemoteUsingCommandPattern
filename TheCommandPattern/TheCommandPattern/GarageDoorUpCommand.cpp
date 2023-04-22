#include "GarageDoorUpCommand.h"

GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor* garageDoor)
{
	this->garageDoor = garageDoor;
	setCommandName("Garage Door Up");
}

void GarageDoorUpCommand::execute()
{
	garageDoor->up();
}

void GarageDoorUpCommand::undo()
{
	garageDoor->down();
}
