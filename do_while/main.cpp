#include <iostream>

int main() {

    const std::string password = "hello";

    std::string input;

    do {
        std::cout << "Enter your password > " << std::flush;
        std::cin >> input;

        if (input != password) {
            std::cout << "Access denied" << std::endl;
        }

    } while (input != password);

    std::cout << "Password accepted" << std::endl;

    return 0;
}