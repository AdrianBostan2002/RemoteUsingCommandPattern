#pragma once
#include <string>
class Command
{
private:
	std::string commandName;
public:
	virtual void execute()=0;
	virtual void setCommandName(std::string commandName ="Unknown");
	virtual void undo() = 0;
	std::string getCommandName();
};

