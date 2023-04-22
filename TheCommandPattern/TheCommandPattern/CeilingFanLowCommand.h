#pragma once
#include <iostream>
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanLowCommand :
    public Command
{
private:
    CeilingFan* ceilingFan;
    std::string prevSpeed;
public:
    CeilingFanLowCommand(CeilingFan* ceilingFan);
    void execute();
    void undo();
};

