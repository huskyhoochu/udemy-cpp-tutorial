//
// Created by huskyhoochu on 22/01/2018.
//

#ifndef NEW_OPERATOR_ANIMAL_H
#define NEW_OPERATOR_ANIMAL_H

#include <iostream>

class Animal {
private:
    std::string name;

public:
    Animal() {
        std::cout << "Animal created." << std::endl;
    }

    Animal(const Animal &other) : name(other.name) {
        std::cout << "Animal created by copying." << std::endl;
    }

    ~Animal() {
        std::cout << "Destructor called" << std::endl;
    }

    void setName(std::string name) {
        this->name = name;
    }

    void speak() const {
        std::cout << "My name is: " << name << std::endl;
    }
};

#endif //NEW_OPERATOR_ANIMAL_H
