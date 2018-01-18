//
// Created by huskyhoochu on 18/01/2018.
//

#ifndef CONSTRUCTOR_INITIALIZATION_LISTS_PERSON_H
#define CONSTRUCTOR_INITIALIZATION_LISTS_PERSON_H

#include <iostream>

class Person {
private:
    std::string name;
    int age;
public:
    Person();

    Person(std::string name, int age);

    std::string toString();

};


#endif //CONSTRUCTOR_INITIALIZATION_LISTS_PERSON_H
