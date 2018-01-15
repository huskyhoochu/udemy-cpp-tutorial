#include <iostream>

void showMenu() {
    std::cout << "1. Search" << std::endl;
    std::cout << "2. View Record" << std::endl;
    std::cout << "3. Quit" << std::endl;
}

int getInput() {
    std::cout << "Enter selection... :" << std::flush;

    int input;
    std::cin >> input;

    return input;
}

void processSelection(int option) {
    switch (option) {
        case 1:
            std::cout << "Searching..." << std::endl;
            break;
        case 2:
            std::cout << "Viewing..." << std::endl;
            break;
        case 3:
            std::cout << "Quitting..." << std::endl;
            break;
        default:
            std::cout << "올바른 값을 입력하세요." << std::endl;
    }

}

int main() {

    showMenu();
    int selection = getInput();
    processSelection(selection);

    return 0;
}