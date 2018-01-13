#include <iostream>

int main() {

    int number = 6;
    std::string value = "Hello Husky";
    std::string text1 = "Fast";
    std::string text2 = "Campus";
    std::string text3 = text1 + text2;

    std::cout << number << std::endl;
    std::cout << value << std::endl;
    std::cout << text1 << text2 << std::endl;
    std::cout << text3 << std::endl;

    return 0;
}