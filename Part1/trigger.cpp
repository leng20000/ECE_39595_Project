#include <iostream>
#include "trigger.h"
#include "condition.h"

void Trigger::setType(std::string type){
    this->type = type;
}

void Trigger::setCommand(std::string command){
    this->command = command;
}

void Trigger::setCondition(Condition condition){
    this->condition = condition;
}

std::string Trigger::getType(){
    return type;
}

std::string Trigger::getCommand(){
    return command;
}

Condition Trigger::getCondition(){
    return condition;
}
