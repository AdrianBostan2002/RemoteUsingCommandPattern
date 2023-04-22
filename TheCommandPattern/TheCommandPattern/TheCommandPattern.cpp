#include <iostream>
#include "VendorClassesHeaders.h"
#include "CommandsClassesHeaders.h"
#include "RemoteControl.h"
#include <functional>

void DealocateMemory(std::vector<Command*>partyOn, std::vector<Command*>partyOff,
	MacroCommand* partyOffMacro, MacroCommand* partyOnMacro)
{
	for (size_t i = 0; i < partyOn.size(); i++)
	{
		delete partyOn[i];
	}

	for (size_t i = 0; i < partyOff.size(); i++)
	{
		delete partyOff[i];
	}

	delete partyOffMacro;
	delete partyOnMacro;
}

int main()
{
	RemoteControl* remote = new RemoteControl(6);

	Light* livingRoomLight = new Light("Living Room");

	LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
	LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);

	TV* ownBedroomTV = new TV("Own Bedroom TV");

	TvOffCommand* ownBedroomTVOff = new TvOffCommand(ownBedroomTV);
	TvOnCommand* ownBedroomTVOn = new TvOnCommand(ownBedroomTV);

	GarageDoor* garageDoor = new GarageDoor;

	GarageDoorDownCommand* garageDoorDown = new GarageDoorDownCommand(garageDoor);
	GarageDoorUpCommand* garageDoorUp = new GarageDoorUpCommand(garageDoor);


	std::vector<Command*>partyOn = { livingRoomLightOn, ownBedroomTVOn, garageDoorUp };
	std::vector<Command*>partyOff = { livingRoomLightOff, ownBedroomTVOff, garageDoorDown };

	MacroCommand* partyOnMacro = new MacroCommand(partyOn);
	MacroCommand* partyOffMacro = new MacroCommand(partyOff);
	
	CeilingFan* bathroomCeilingFan = new CeilingFan("Bathroom Ceiling Fan");

	CeilingFanHighCommand* bathromCeilingFanHigh = new CeilingFanHighCommand(bathroomCeilingFan);
	CeilingFanMediumCommand* bathromCeilingFanMedium = new CeilingFanMediumCommand(bathroomCeilingFan);
	CeilingFanOffCommand* bathromCeilingFanOff = new CeilingFanOffCommand(bathroomCeilingFan);


	remote->setCommand(0, partyOnMacro, partyOffMacro);
	remote->setCommand(1, livingRoomLightOn, livingRoomLightOff);
	remote->setCommand(2, ownBedroomTVOn, ownBedroomTVOff);
	remote->setCommand(3, garageDoorUp, garageDoorDown);
	remote->setCommand(4, bathromCeilingFanHigh, bathromCeilingFanOff);
	remote->setCommand(5, bathromCeilingFanMedium, bathromCeilingFanOff);

	//Actions I made
	remote->toString();

	std::cout << "\n";
	std::cout << "\n";

	remote->onButtonWasPushed(0);

	std::cout << "\n";

	remote->offButtonWasPushed(0);

	std::cout << "\n";

	remote->offButtonWasPushed(2);
	remote->undoButtonWasPushed();
	remote->undoButtonWasPushed();

	std::cout << "\n";

	remote->onButtonWasPushed(4);

	std::cout << "\n";

	remote->undoButtonWasPushed();

	DealocateMemory(partyOn, partyOff, partyOffMacro, partyOnMacro);

	return 0;
}