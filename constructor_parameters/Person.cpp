//
// Created by huskyhoochu on 17/01/2018.
//

#include "Person.h"
#include <sstream>

Person::Person() {
    name = "undefined";
    age = 0;
}

std::string Person::toString() {
    std::stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;
    return ss.str();
}

Person::Person(std::string newName) {
    name = newName;
    age = 0;

}

Person::Person(std::string newName, int newAge) {
    name = newName;
    age = newAge;
}