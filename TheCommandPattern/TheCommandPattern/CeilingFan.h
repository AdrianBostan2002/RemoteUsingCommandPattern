#pragma once
#include <iostream>
#include <string>
class CeilingFan
{
private:
	std::string location;
	std::string speed;
	std::string prevSpeed;
public:
	CeilingFan(std::string location = "Unknown Location");
	void high();
	void medium();
	void low();
	void off();
	void setSpeed(std::string speed);
	void setPrevSpeed(std::string prevSpeed);
	std::string getPrevSpeed();
	std::string getSpeed();
	std::string getLocation();
};

