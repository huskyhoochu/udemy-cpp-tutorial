#include <iostream>

class Animal {
public:
    virtual void speak() = 0;

    virtual ~Animal() = default;
};

class Cat : public Animal {
public:
    void speak() override {
        std::cout << "RRR" << std::endl;
    }

    ~Cat() override = default;
};

class HouseCat : public Cat {
public:
    void speak() override {
        std::cout << "Meow" << std::endl;
    }

    ~HouseCat() override = default;
};

int main() {

    Animal *pAnimal = new HouseCat;

    pAnimal->speak();

    delete pAnimal;

    return 0;
}