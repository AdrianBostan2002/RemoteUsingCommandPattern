#pragma once
#include <iostream>
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanMediumCommand :
    public Command
{
private:
    CeilingFan* ceilingFan;
    std::string prevSpeed;
public:
    CeilingFanMediumCommand(CeilingFan* ceilingFan);
    void execute();
    void undo();
};

