#include <iostream>

using namespace std;

int main() {

    bool b_value = false;
    cout << b_value << endl;

    char c_value = '#';
    cout << (int)c_value << endl;

    cout << sizeof(char) << endl;

    wchar_t w_value = L'가';
    cout << w_value << endl;
    cout << sizeof(w_value) << endl;

    return 0;
}