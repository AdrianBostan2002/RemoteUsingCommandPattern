#pragma once
#include "Command.h"
#include "NoCommand.h"
#include <iostream>
#include <vector>
class RemoteControl
{
private:
	std::vector<Command*>onCommands;
	std::vector<Command*>offCommands;
	Command* undoCommand;
	int numberOfSlots;
public:
	RemoteControl(int numberOfSlots = 7);
	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int button);
	void undoButtonWasPushed();
	int getNumberOfSlots();
	void toString();
};

