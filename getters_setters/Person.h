//
// Created by huskyhoochu on 16/01/2018.
//

#ifndef GETTERS_SETTERS_PERSON_H
#define GETTERS_SETTERS_PERSON_H

#include <iostream>

class Person {
private:
    std::string name;

public:
    Person();

    std::string toString();

    void setName(std::string newName);

    std::string getName();
};


#endif //GETTERS_SETTERS_PERSON_H
