#include <iostream>
#include "Animal.h"

Animal *createAnimal(std::string name) {
    auto a = new Animal();
    a -> setName(name);
    return a;
}

int main() {

    auto pCat1 = new Animal();
    pCat1 -> setName("Husky");
    (*pCat1).speak();
    delete pCat1;

    auto frog = createAnimal("Mike");
    frog -> speak();
    delete frog;

    return 0;
}