#pragma once
#include <iostream>
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanOffCommand :
    public Command
{
private:
    CeilingFan* ceilingFan;
public:
    CeilingFanOffCommand(CeilingFan* ceilingFan);
    void execute();
    void undo();
};

