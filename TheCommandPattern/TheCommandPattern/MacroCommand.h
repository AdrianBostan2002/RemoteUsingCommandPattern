#pragma once
#include <iostream>
#include <vector>
#include "Command.h"
class MacroCommand :
    public Command
{
private:
    std::vector<Command*>commands;
public:
    MacroCommand(std::vector<Command*>commands);
    void execute();
    void undo();
};

