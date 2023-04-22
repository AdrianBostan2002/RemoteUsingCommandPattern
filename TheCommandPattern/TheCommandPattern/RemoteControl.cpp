#include "RemoteControl.h"

RemoteControl::RemoteControl(int numberOfSlots)
{
	this->numberOfSlots = numberOfSlots;
	NoCommand* noCommand = new NoCommand;
	onCommands.resize(numberOfSlots);
	offCommands.resize(numberOfSlots);
	for (int i = 0; i < numberOfSlots; i++)
	{
		onCommands[i] = noCommand;
		offCommands[i] = noCommand;
	}
	undoCommand = noCommand;
}

void RemoteControl::setCommand(int slot, Command* onCommand, Command* offCommand)
{
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot)
{
	onCommands[slot]->execute();
	undoCommand = onCommands[slot];
}

void RemoteControl::offButtonWasPushed(int button)
{
	offCommands[button]->execute();
	undoCommand = offCommands[button];
}

void RemoteControl::undoButtonWasPushed()
{
	undoCommand->undo();
}

int RemoteControl::getNumberOfSlots()
{
	return numberOfSlots;
}

void RemoteControl::toString()
{
	std::cout << "		Remote";
	std::cout <<"\n-----------------------------------------------------------------------------------------------";

	for (int i = 0; i < numberOfSlots; i++)
	{
		std::cout << "\nSlot[" << i << "]: " << onCommands[i]->getCommandName()<<"			"<< offCommands[i]->getCommandName();
	}
}
