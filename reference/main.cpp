#include <iostream>

void changeSomething(double &value) {
    value = 123.4;
}

int main() {

    int value1 = 8;
    int &value2 = value1;
    value2 = 10;

    std::cout << "Value1: " << value1 << std::endl;
    std::cout << "Value2: " << value2 << std::endl;

    double value3 = 4.321;
    std::cout << "Before Value3: " << value3 << std::endl;
    changeSomething(value3);

    std::cout << "After Value3: " << value3 << std::endl;


    return 0;
}