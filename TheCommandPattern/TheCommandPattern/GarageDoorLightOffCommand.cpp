#include "GarageDoorLightOffCommand.h"
GarageDoorLightOffCommand::GarageDoorLightOffCommand(GarageDoor* garageDoor)
{
	this->garageDoor = garageDoor;
	setCommandName("Garage Door Light OFF");
}

void GarageDoorLightOffCommand::execute()
{
	garageDoor->lightOff();
}

void GarageDoorLightOffCommand::undo()
{
	garageDoor->lightOn();
}
