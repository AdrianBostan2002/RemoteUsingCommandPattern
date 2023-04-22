#pragma once
#include <iostream>
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
class GarageDoor
{
private:
	Light* light;
public:
	GarageDoor();
	void up();
	void down();
	void stop();
	void lightOn();
	void lightOff();
};

