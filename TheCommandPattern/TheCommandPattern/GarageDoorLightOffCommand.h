#pragma once
#include "Command.h"
#include "GarageDoor.h" 
class GarageDoorLightOffCommand :
    public Command
{
private:
    GarageDoor* garageDoor;
public:
    GarageDoorLightOffCommand(GarageDoor* garageDoor);
    void execute();
    void undo();
};

