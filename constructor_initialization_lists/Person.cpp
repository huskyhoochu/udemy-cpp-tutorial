//
// Created by huskyhoochu on 18/01/2018.
//

#include <sstream>
#include "Person.h"

Person::Person(): name("unnamed"), age(0) {}

Person::Person(std::string name, int age): name(name), age(age) {}

std::string Person::toString() {
    std::stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << ", Age: ";
    ss << age;

    return ss.str();
}