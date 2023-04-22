#include "Light.h"

Light::Light(std::string location)
{
	this->location = location;
}

Light::~Light()
{

}

void Light::on()
{
	if (location != "Unknown Location")
	{
		std::cout << "In " << getLocation() << " Light is ON";
	}
	else std::cout << "Light is ON";
}

void Light::off()
{
	if (location != "Unknown Location")
	{
		std::cout<<"In "<<getLocation()<<" Light is OFF";
	}
	else std::cout<<"Light is OFF";
}

std::string Light::getLocation()
{
	return location;
}
