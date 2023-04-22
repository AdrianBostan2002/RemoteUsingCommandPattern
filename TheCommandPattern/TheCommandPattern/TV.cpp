#include "TV.h"

TV::TV(std::string location)
{
	this->location = location;
}

void TV::on()
{
	std::cout << "TV is ON";
}

void TV::off()
{
	std::cout << "TV is OFF";
}

void TV::setInputChannel(std::string inputChannel)
{
	this->inputChannel = inputChannel;
}

void TV::setVolume(int volume)
{
	this->volume = volume;
}

std::string TV::getInputChannel()
{
	return inputChannel;
}

int TV::getVolume()
{
	return volume;
}

std::string TV::getLocation()
{
	return location;
}
