//
// Created by huskyhoochu on 15/01/2018.
//
#include <iostream>
#include "Cat.h"

Cat::Cat() {
    std::cout << "Cat created." << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destroyed." << std::endl;
}

void Cat::speak() {

    if (happy) {
        std::cout << "Meow!" << std::endl;
    } else {
        std::cout << "sad..." << std::endl;
    }

}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}