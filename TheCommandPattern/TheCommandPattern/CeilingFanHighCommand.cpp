#include "CeilingFanHighCommand.h"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan* ceilingFan)
{
	this->ceilingFan = ceilingFan;
	setCommandName("Ceiling Fan High");
}

void CeilingFanHighCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->high();
}

void CeilingFanHighCommand::undo()
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
