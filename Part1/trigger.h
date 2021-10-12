#pragma once
#include <string>
#include <vector>
#include "room.h"
#include "condition.h"

class Trigger{
/*
methods to add type, command name, condition object or pointer, and string to print
*/
private:
    std::string type;
    std::string command;
    Condition condition;

public:
    virtual ~Trigger();

    //Setters
    void setType(std::string type);
    void setCommand(std::string command);
    void setCondition(Condition condition);

    //Getters
    std::string getType();
    std::string getCommand();
    Condition getCondition();

    //print Data
    virtual void printData(std::string prefix);
};