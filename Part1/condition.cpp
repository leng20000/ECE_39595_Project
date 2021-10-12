#include <iostream>
#include "room.h"
#include "condition.h"

void Condition::setHas(std::string has){
    this->has = has;
}

void Condition::setInventory(std::string inventory){
    this->inventory = inventory;
}

std::string Condition::getHas(){
    return has;
}

std::string Condition::getInventory(){
    return inventory;
}

void Condition::printData(std::string prefix){
    std::cout << prefix << "      Condition: " << std::endl;
    std::cout << prefix << "        Has: " << this->getHas() << std::endl;
    std::cout << prefix << "        Object: " << this->getItemName() << std::endl;
}