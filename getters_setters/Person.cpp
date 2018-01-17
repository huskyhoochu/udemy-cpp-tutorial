//
// Created by huskyhoochu on 16/01/2018.
//

#include "Person.h"

Person::Person() {
    name = "Husky";
}

std::string Person::toString() {
    return "Person's name is: " + name;
}

void Person::setName(std::string newName) {
    name = newName;
}

std::string Person::getName() {
    return name;
}