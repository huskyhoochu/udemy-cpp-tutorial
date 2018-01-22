#include <iostream>
#include "Animal.h"

int main() {

    auto pCat1 = new Animal();
    pCat1 -> setName("Husky");
    (*pCat1).speak();
    delete pCat1;
    
    return 0;
}