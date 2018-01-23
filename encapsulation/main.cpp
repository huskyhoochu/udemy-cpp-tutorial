#include <iostream>

class Frog {
private:
    std::string name;

private:
    const std::string getName() { return name; }

public:
    explicit Frog(std::string &name) : name(name) {}

    void info() { std::cout << "My name is: " << getName() << std::endl; }
};

int main() {

    std::string name = "freddy";

    Frog frog(name);

    frog.info();

    return 0;
}