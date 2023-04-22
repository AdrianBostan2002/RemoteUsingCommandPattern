#pragma once
#include <iostream>
#include <string>
class Light
{
private:
	std::string location;
public:
	Light(std::string location = "Unknown Location");
	~Light();
	void on();
	void off();
	std::string getLocation();
};

