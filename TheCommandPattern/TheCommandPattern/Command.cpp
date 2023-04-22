#include "Command.h"

void Command::setCommandName(std::string commandName)
{
	this->commandName = commandName;
}

std::string Command::getCommandName()
{
	return commandName;
}
