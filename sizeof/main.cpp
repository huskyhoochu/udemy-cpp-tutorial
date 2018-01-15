#include <iostream>

int main() {

    int values[] = {4, 7};

    std::cout << sizeof(values) << std::endl;
    std::cout << sizeof(int) << std::endl;

    for (unsigned int i=0; i< sizeof(values)/ sizeof(int); i++) {
        std::cout << values[i] << " " << std::flush;
    }

    std::cout << std::endl;

    return 0;
}