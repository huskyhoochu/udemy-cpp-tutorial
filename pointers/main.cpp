#include <iostream>

void manipulate(double *value) {
    std::cout << "2. Value of double in manipulate: " << *value << std::endl;
    *value = 10.0;
    std::cout << "3. Value of double in manipulate: " << *value << std::endl;
}

int main() {

    int nValue = 8;

    int* pnValue = &nValue;

    std::cout << "Int Value: " << nValue << std::endl;
    std::cout << "Pointer to int address: " << pnValue << std::endl;
    std::cout << "Int Value via pointer: " << *pnValue << std::endl;

    std::cout << "==================" << std::endl;

    double dValue = 123.4;

    std::cout << "1. dValue: " << dValue << std::endl;
    manipulate(&dValue);
    std::cout << "4. dValue: " << dValue << std::endl;

    return 0;
}