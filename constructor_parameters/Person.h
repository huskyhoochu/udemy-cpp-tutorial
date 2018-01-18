//
// Created by huskyhoochu on 17/01/2018.
//

#ifndef CONSTRUCTOR_PARAMETERS_PERSON_H
#define CONSTRUCTOR_PARAMETERS_PERSON_H

#include <iostream>

class Person {
private:
    std::string name;
    int age;
public:
    Person();

    std::string toString();
};


#endif //CONSTRUCTOR_PARAMETERS_PERSON_H
