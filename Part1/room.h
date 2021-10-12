#pragma once
#include <string>
#include <vector>
#include "condition.h"
#include "trigger.h"

class Room {
/*
Contain methods to add room name, description, item name, container name,creature name, 
trigger object or pointer to trigger object, border object or pointer to border object
*/
private:
    std::string name;
    std::string description;
    std::string itemName;
    std::string containerName;
    std::string creatureName;
    Trigger trigger;
    Condition condition;

public:
    virtual ~Room();

    //Setters
    void setName(std::string name);
    void setDescription(std::string description);
    void setItemName(std::string itemName);
    void setContainerName(std::string containerName);
    void setCreatureName(std::string creatureName);

    //Getters
    std::string getName();
    std::string getDescription();
    std::string getItemName();
    std::string getContainerName();
    std::string getCreatureName();
   
    //print data stored in the object to cout
    //virtual void printData(std::string prefix);
};