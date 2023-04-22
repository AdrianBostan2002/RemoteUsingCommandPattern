#include "GarageDoor.h"

GarageDoor::GarageDoor()
{
	this->light = new Light("Garage Door");
}

void GarageDoor::up()
{
	std::cout << "Garage Door Up";

}

void GarageDoor::down()
{
	std::cout << "Garage Door Down";
}

void GarageDoor::stop()
{
	std::cout << "Garage Door Stop";
}

void GarageDoor::lightOn()
{
	LightOnCommand* lightOnCommand = new LightOnCommand(light);
	lightOnCommand->execute();
}

void GarageDoor::lightOff()
{
	LightOffCommand* lightOffCommand = new LightOffCommand(light);
	lightOffCommand->execute();
}
