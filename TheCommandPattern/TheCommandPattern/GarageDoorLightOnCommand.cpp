#include "GarageDoorLightOnCommand.h"

GarageDoorLightOnCommand::GarageDoorLightOnCommand(GarageDoor* garageDoor)
{
	this->garageDoor = garageDoor;
	setCommandName("Garage Door Light ON");
}

void GarageDoorLightOnCommand::execute()
{
	garageDoor->lightOn();
}

void GarageDoorLightOnCommand::undo()
{
	garageDoor->lightOff();
}
