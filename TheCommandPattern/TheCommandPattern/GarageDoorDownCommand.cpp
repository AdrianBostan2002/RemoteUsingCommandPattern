#include "GarageDoorDownCommand.h"

GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor* garageDoor)
{
	this->garageDoor = garageDoor;
	setCommandName("Garage Door Down");
}

void GarageDoorDownCommand::execute()
{
	garageDoor->down();
}

void GarageDoorDownCommand::undo()
{
	garageDoor->up();
}
