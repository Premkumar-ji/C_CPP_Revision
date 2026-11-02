#include <iostream>
using namespace std;

int main() {
    int a = 2147483647;
    cout << "int size: " << sizeof(int) << " bytes\n";
    cout << "a = " << a << "\n";
    a = a + 1;
    cout << "a + 1 = " << a << "\n";
}