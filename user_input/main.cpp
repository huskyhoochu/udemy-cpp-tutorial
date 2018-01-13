#include <iostream>

int main() {

    std::cout << "Enter your name: " << std::flush;
    std::string input;
    std::cin >> input;
    std::cout << "Hello, " << input << std::endl;

    std::cout << "Enter your age: " << std::flush;
    int value;
    std::cin >> value;
    std::cout << "Your age is: " << value << std::endl;

    return 0;
}