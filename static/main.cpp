#include <iostream>

// header file
class Test {
private:
    int id;
    static int count;
public:
    static int const MAX = 99;
public:
    Test() {
        id = ++count;
    }

    int getID() {
        return id;
    }

    static void showInfo() {
        std::cout << count << std::endl;
    }
};

// cpp source
int Test::count = 0;

int main() {

    std::cout << Test::MAX << std::endl;

    Test test1;
    std::cout << test1.getID() << std::endl;

    Test test2;
    std::cout << test2.getID() << std::endl;

    Test::showInfo();

    return 0;
}