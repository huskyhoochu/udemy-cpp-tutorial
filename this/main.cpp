#include <iostream>
#include "Person.h"

int main() {

    Person person1;
    Person person2("Bob", 27);
    Person person3("Jane", 42);

    std::cout << person1.toString() << ", Memory location of object: " << &person1 <<std::endl;
    std::cout << person2.toString() << ", Memory location of object: " << &person2 <<std::endl;
    std::cout << person3.toString() << ", Memory location of object: " << &person3 <<std::endl;

    return 0;
}