#include <iostream>

using namespace std;

int main() {

    string password = "hello";
    cout << "Enter your password > " << flush;

    string input;
    cin >> input;

    if (input == password) {
        cout << "password accepted." << endl;
    } else {
        cout << "access denied." << endl;
    }

    return 0;
}