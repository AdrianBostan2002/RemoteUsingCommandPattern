#pragma once
#include "Command.h"
#include "TV.h"
class TvOnCommand :
    public Command
{
private:
    TV* tv;
public:
    TvOnCommand(TV* tv);
    void execute();
    void undo();
};

