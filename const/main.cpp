#include <iostream>
#include "Const.h"

int main() {

    Animal animal1;

    animal1.setName("Tiger");
    animal1.speak();

    animal1.setName("Rabbit");
    animal1.speak();

    int value = 8;
    int * const pValue = &value;

    std::cout << pValue << std::endl;

    int number = 11;
    pValue = &number;

    std::cout << pValue << std::endl;
    std::cout << *pValue << std::endl;




    return 0;
}