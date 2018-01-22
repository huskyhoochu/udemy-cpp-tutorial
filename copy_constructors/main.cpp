#include <iostream>

class Animal {
private:
    std::string name;
public:
    Animal() { std::cout << "Animal created." << std::endl; };

    Animal(const Animal &other) : name(other.name) { std::cout << "Animal created by copying." << std::endl; }

    void setName(std::string name) { this->name = name; };

    void speak() const { std::cout << "My name is: " << name << std::endl; };
};

int main() {

    Animal animal1;

    animal1.setName("Husky");

    Animal animal2 = animal1;
    animal2.speak();
    animal2.setName("Hoochu");

    animal1.speak();
    animal2.speak();

    Animal animal3(animal1);
    animal3.speak();


    return 0;
}