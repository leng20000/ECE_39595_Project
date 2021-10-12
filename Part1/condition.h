#pragma once
#include <string>
#include <vector>
#include "room.h"

class Condition : public Room{
/*
contains a has field, object name, status for an object, owner of possesed object
*/
private:
    std::string has;
    std::string itemName;
    std::string inventory;

public:

    //Setter
    void setHas(std::string has);
    void setInventory(std::string inventory);

    //Getter
    std::string getHas();
    std::string getInventory();
};