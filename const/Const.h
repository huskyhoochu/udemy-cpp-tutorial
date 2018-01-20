//
// Created by huskyhoochu on 20/01/2018.
//

#ifndef CONST_CONST_H
#define CONST_CONST_H

#include <iostream>

class Animal {
private:
    std::string name;

public:
    void setName(std::string name) { this->name = name; };
    void speak() const {std::cout << "My Name is: " << name << std::endl; }
};


#endif //CONST_CONST_H
