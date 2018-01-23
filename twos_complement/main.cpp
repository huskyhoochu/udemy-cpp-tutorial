#include <iostream>

int main() {
    char value = 127;

    std::cout << sizeof(value) << std::endl;

    std::cout << (int)value << std::endl;

    value++;

    std::cout <<(int)value << std::endl;


    return 0;
}