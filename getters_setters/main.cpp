#include <iostream>
#include "Person.h"

int main() {

    Person person;
    std::cout << person.toString() << std::endl;

    person.setName("George");
    std::cout << person.toString() << std::endl;

    std::cout << "Name of person with get method " << person.getName() << std::endl;

    return 0;
}