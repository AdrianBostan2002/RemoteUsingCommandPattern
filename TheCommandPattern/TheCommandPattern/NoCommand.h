#pragma once
#include "Command.h"
#include <iostream>
class NoCommand :
    public Command
{
public:
    NoCommand();
    void execute();
    void undo();
};

