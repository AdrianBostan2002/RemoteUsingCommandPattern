#include "TvOffCommand.h"

TvOffCommand::TvOffCommand(TV* tv)
{
	this->tv = tv;
	setCommandName("TV OFF");
}

void TvOffCommand::execute()
{
	tv->off();
}

void TvOffCommand::undo()
{
	tv->on();
}
