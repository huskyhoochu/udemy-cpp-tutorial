#include <iostream>

int main() {

    int values[3] = {};

    values[0] = 88;

    std::cout << values[0] << std::endl;
    std::cout << values[1] << std::endl;
    std::cout << values[2] << std::endl;
    std::cout << "out of index: " << values[3] << std::endl;

    return 0;
}