#include <iostream>
#include "Animal.h"

int main() {

    auto pAnimal = new Animal[5];

    pAnimal[3].setName("George");
    pAnimal[3].speak();

    delete [] pAnimal;

    char c = 'z';
    c++;
    std::string name(10, c);
    std::cout << name << std::endl;

    return 0;
}