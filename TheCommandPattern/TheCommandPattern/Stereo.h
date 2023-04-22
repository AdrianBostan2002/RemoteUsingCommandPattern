#pragma once
#include <iostream>
class Stereo
{
private:
	std::string CD;
	std::string DVD;
	std::string Radio;
	int volume;
public:
	void on();
	void off();
	void setCD();
	void setDVD();
	void setRadio();
	void setVolume();
	std::string getCD(std::string CD = "NONE");
	std::string getDVD(std::string DVD = "NONE");
	std::string getRadio(std::string Radio = "NONE");
	int getVolume(int volume = 0);
};

