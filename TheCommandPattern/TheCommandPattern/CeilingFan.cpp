#include "CeilingFan.h"

CeilingFan::CeilingFan(std::string location)
{
	this->location = location;
}

void CeilingFan::high()
{
	std::cout << "Ceiling Fan High";
	speed = "High";
}

void CeilingFan::medium()
{
	std::cout << "Ceiling Fan Medium"; 
	speed = "Medium";
}

void CeilingFan::low()
{
	std::cout << "Ceiling Fan Low"; 
	speed = "Low";
}
void CeilingFan::off()
{
	std::cout << "Ceiling Fan OFF";
}

void CeilingFan::setSpeed(std::string speed)
{
	this->speed = speed;
}

void CeilingFan::setPrevSpeed(std::string prevSpeed)
{
	this->prevSpeed = prevSpeed;
}

std::string CeilingFan::getPrevSpeed()
{
	return prevSpeed;
}

std::string CeilingFan::getSpeed()
{
	return speed;
}
std::string CeilingFan::getLocation()
{
	return location;
}
