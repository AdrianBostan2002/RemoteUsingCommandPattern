#pragma once
#include "Command.h"
#include "GarageDoor.h"
class GarageDoorLightOnCommand :
    public Command
{
private:
    GarageDoor* garageDoor;
public:
    GarageDoorLightOnCommand(GarageDoor* garageDoor);
    void execute();
    void undo();
};

