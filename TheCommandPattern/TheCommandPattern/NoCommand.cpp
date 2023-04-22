#include "NoCommand.h"

NoCommand::NoCommand()
{
	setCommandName("No Command");
}

void NoCommand::execute()
{
	std::cout << "No Command";
}

void NoCommand::undo()
{
	std::cout << "No Command";
}
