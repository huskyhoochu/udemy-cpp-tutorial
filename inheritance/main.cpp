#include <iostream>

class Animal {
public:
    void speak() { std::cout << "Grrr" << std::endl; }
};

class Cat : public Animal {
public:
    void jump() { std::cout << "Cat Jumping" << std::endl; }
};


class Tiger: public Cat {
public:
    void attachAntelope() { std::cout << "Attacking!" << std::endl; }
};

int main() {

    Animal a;
    a.speak();

    Cat cat;
    cat.speak();
    cat.jump();

    Tiger tiger;
    tiger.jump();
    tiger.speak();
    tiger.attachAntelope();

    return 0;
}