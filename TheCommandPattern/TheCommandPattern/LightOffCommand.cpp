#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light* light)
{
	this->light = light;
	setCommandName("Light OFF");
}

LightOffCommand::~LightOffCommand()
{
}

void LightOffCommand::execute()
{
	light->off();
}

void LightOffCommand::undo()
{
	light->on();
}
