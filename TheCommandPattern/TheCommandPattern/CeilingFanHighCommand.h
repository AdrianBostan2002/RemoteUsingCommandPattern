#pragma once
#include <iostream>
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanHighCommand:
	public Command
{
private:
	CeilingFan* ceilingFan;
	std::string prevSpeed;
public:
	CeilingFanHighCommand(CeilingFan* ceilingFan);
	void execute();
	void undo();
};

