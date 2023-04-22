#include "CeilingFanLowCommand.h"

CeilingFanLowCommand::CeilingFanLowCommand(CeilingFan* ceilingFan)
{
	this->ceilingFan = ceilingFan;
	setCommandName("Ceiling Fan Low");
}

void CeilingFanLowCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->low();
}

void CeilingFanLowCommand::undo()
{
	if (prevSpeed == "High")
	{
		ceilingFan->high();
	}
	else if (prevSpeed == "Medium")
	{
		ceilingFan->medium();
	}
	else if (prevSpeed == "Low")
	{
		ceilingFan->low();
	}
	else if (prevSpeed == "Off")
	{
		ceilingFan->off();
	}
}
