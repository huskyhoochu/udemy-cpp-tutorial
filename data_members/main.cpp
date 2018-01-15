#include <iostream>
#include "Cat.h"

int main() {

    {
        Cat Jim;
        Jim.makeHappy();
        Jim.speak();
    }

    {
        Cat Bob;
        Bob.makeSad();
        Bob.speak();
    }

    {
        Cat Max;
        Max.speak();
    }

    return 0;
}