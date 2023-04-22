#include "TvOnCommand.h"

TvOnCommand::TvOnCommand(TV* tv)
{
	this->tv = tv;
	setCommandName("TV ON");
}

void TvOnCommand::execute()
{
	tv->on();
}

void TvOnCommand::undo()
{
	tv->off();
}
