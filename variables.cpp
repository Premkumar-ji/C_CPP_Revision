#include <iostream>
using namespace std;
int main()
{
    int age = 23;
    cout << " my age is " << age;
    cout <<"\n";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}