#pragma once
#include "Command.h"
#include "TV.h"
class TvOffCommand :
    public Command
{
private:
    TV* tv;
public:
    TvOffCommand(TV* tv);
    void execute();
    void undo();
};

