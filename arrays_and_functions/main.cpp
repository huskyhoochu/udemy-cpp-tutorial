#include <iostream>

void show1(int nElements, std::string arr[]) {
    for (int i = 0; i < nElements; i++) {
        std::cout << arr[i] << std::endl;
    }
}

void show2(int nElements, std::string *arr) {
    for (int i = 0; i < nElements; i++) {
        std::cout << arr[i] << std::endl;
    }
}

void show3(std::string (&arr)[3]) {
    for (const auto &i : arr) {
        std::cout << i << std::endl;
    }
}


std::string *getArray() {
    // Don't return pointers to local variables!
    // bad example -> std::string texts[] = {"one", "two", "three"};
    //                return texts;

}


char *getMemory() {
    auto pMem = new char[100];
    return pMem;
}

void freeMemory(char *pMem) {
    delete[] pMem;
}

int main() {

    std::string texts[] = {"apple", "orange", "banana"};

    show1(3, texts);

    show2(3, texts);

    show3(texts);

    char *pMemory = getMemory();
    freeMemory(pMemory);

    return 0;
}