#include <iostream>

int main() {

    const int elements = 5;

    std::string texts[elements] = {"one", "two", "three", "four", "five"};

    std::string *pTexts = texts;

//    pTexts += 3;

//    std::cout << *pTexts << std::endl;

    std::string *pEnd = &texts[elements];
    pTexts = &texts[0];

    while(pTexts != pEnd) {
        std::cout << *pTexts << std::endl;
        pTexts++;
    }

    pTexts = &texts[0];
    unsigned long result = pEnd - pTexts;

    std::cout << result << std::endl;

    pTexts = &texts[0];

    pTexts += elements/2;
    std::cout << *pTexts << std::endl;

    return 0;
}