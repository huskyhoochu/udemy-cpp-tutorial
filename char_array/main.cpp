#include <iostream>

int main() {

//    char text[] = {'h', 'e', 'l', 'l', 'o'};
    char text[] = "hello";

    for (int i = 0; i < sizeof(text); i++) {
        std::cout << i << ": " << text[i] << std::endl;
    }

    std::cout << "======" << std::endl;

    int k = 0;

    while(true) {

        if (text[k]==0)
            break;

        std::cout << text[k] << std::flush;
        k++;
    }

    std::cout << "\n" << "======" << std::endl;

    std::cout << text << std::endl;

    return 0;
}