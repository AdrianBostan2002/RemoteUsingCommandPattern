#include "CeilingFanOffCommand.h"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan* ceilingFan)
{
	this->ceilingFan = ceilingFan;
	setCommandName("Ceiling Fan OFF");

	ceilingFan->setSpeed("Off");
}

void CeilingFanOffCommand::execute()
{
	ceilingFan->setPrevSpeed("Off");
	ceilingFan->off();
}

void CeilingFanOffCommand::undo()
{
	std::string prevSpeed = ceilingFan->getPrevSpeed();
	if (prevSpeed == "Off")
	{
		ceilingFan->off();
	}
	if (prevSpeed == "Medium")
	{
		ceilingFan->medium();
	}
	else if (prevSpeed == "High")
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
}
