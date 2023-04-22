#pragma once
#include <iostream>
#include <string>
class TV
{
private:
	std::string inputChannel;
	int volume;
	std::string location;
public:
	TV(std::string location = "Unknown location");
	void on();
	void off();
	void setInputChannel(std::string inputChannel="NONE");
	void setVolume(int volume=0);
	std::string getInputChannel();
	int getVolume();
	std::string getLocation();
};

