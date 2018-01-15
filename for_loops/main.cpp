#include <iostream>

int main() {

    for (int i = 0; i <= 10; i++) {
        std::cout << "hello " << i << std::endl;

        if (i == 7) {
            continue;
        }

        std::cout << "loading ..." << std::endl;
    }

    std::cout << "goodbye" << std::endl;

    return 0;
}