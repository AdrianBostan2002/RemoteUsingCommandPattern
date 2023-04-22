#include "MacroCommand.h"

MacroCommand::MacroCommand(std::vector<Command*> commands)
{
	this->commands = commands;
	setCommandName("Macro Command");
}

void MacroCommand::execute()
{
	for(Command* command : commands)
	{
		command->execute();
		std::cout << "\n";
	}
}

void MacroCommand::undo()
{
	for (Command* command : commands)
	{
		command->undo();
		std::cout << "\n";
	}
}
