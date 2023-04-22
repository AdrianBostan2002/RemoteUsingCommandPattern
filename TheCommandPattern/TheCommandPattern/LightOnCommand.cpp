#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light* light)
{
	this->light = light;
	setCommandName("Light ON");
}

LightOnCommand::~LightOnCommand()
{
}

void LightOnCommand::execute()
{
	light->on();
}

void LightOnCommand::undo()
{
	light->off();
}
