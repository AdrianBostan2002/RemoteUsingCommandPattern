#include "CeilingFanMediumCommand.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan* ceilingFan)
{
	this->ceilingFan = ceilingFan;
	setCommandName("Ceiling Fan Medium");
}

void CeilingFanMediumCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->medium();
}

void CeilingFanMediumCommand::undo()
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
