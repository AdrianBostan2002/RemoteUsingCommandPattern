#include "Stereo.h"

void Stereo::on()
{
	std::cout<<"Stereo ON";
}

void Stereo::off()
{
	std::cout<<"Stereo OFF";
}

void Stereo::setCD()
{
std::cout<<"Stereo";
}

void Stereo::setDVD()
{
	std::cout<<"Stereo";
}

void Stereo::setRadio()
{
	std::cout << "Stereo";
}

void Stereo::setVolume()
{
	std::cout<<"Stereo";
}

std::string Stereo::getCD(std::string CD)
{
	return CD;
}

std::string Stereo::getDVD(std::string DVD)
{
	return DVD;
}

std::string Stereo::getRadio(std::string Radio)
{
	return Radio;
}

int Stereo::getVolume(int volume)
{
	return volume;
}
