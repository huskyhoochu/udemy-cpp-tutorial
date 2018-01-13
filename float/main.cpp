#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float f_value = 1.234567;

    cout << f_value << endl;
    cout << fixed << f_value << endl;
    cout << scientific << f_value << endl;

    cout << sizeof(float) <<endl;

    double d_value = 123.456789;
    cout << fixed << d_value <<endl;

    long double l_value = 123.456789123456789;
    cout << fixed << l_value << endl;
    cout << setprecision(18) << fixed << l_value << endl;
    cout << "Size of long double: " << sizeof(d_value) <<endl;

    return 0;
}