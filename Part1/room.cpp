#include <iostream>
#include "room.h"

Room::~Room(){
}

void Room::setName(std::string name){
    this->name = name;
}

void Room::setDescription(std::string description){
    this->description = description;
}

void Room::setItemName(std::string itemName){
    this->itemName = itemName;
}

void Room::setContainerName(std::string containerName){
    this->containerName = containerName;
}

void Room::setCreatureName(std::string creatureName){
    this->creatureName = creatureName;
}

std::string Room::getName(){
    return name;
}

std::string Room::getDescription(){
    return description;
}

std::string Room::getItemName(){
    return itemName;
}

std::string Room::getContainerName(){
    return containerName;
}

std::string Room::getCreatureName(){
    return creatureName;
}

// void Room::printData(std::string prefix){
// 	std::cout << prefix << "  Room: " << std::endl;
// 	std::cout << prefix << "    Name: " << this->getName() << std::endl;
// 	std::cout << prefix << "    Description: " << this->getDescription() << std::endl;
// 	//std::cout << prefix << "    Trigger: " << this->getTrigger() << std::endl;
//     //std::cout << prefix << "      Permanent: " <<
//     //std::cout <<
// }