#include <iostream>

int main() {

    std::string texts[] = {"one", "two", "three"};

//    std::string *pTexts = texts;

    // range-based for loop
    // Type inference by reference.
    // Observes in-place. Preferred when no modify is needed.
    for (const auto &y : texts) {
        std::cout << y << " " << std::flush;
    }

//    for (int i = 0; i < sizeof(texts) / sizeof(std::string); i++) {
//        std::cout << pTexts[i] << " " << std::flush;
//    }

    return 0;
}