//
// Created by huskyhoochu on 18/01/2018.
//

#ifndef THIS_PERSON_H
#define THIS_PERSON_H

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


#endif //THIS_PERSON_H
