// total 1 = 45;
// total 2 = 75;

#include <iostream>
using namespace std;
int main()
{
    int item = 3;
    int price = 15;
    cout << "Total cost = " << item * price << "\n";
    item = 5;
    cout << "Total cost after change in item = " << item * price << "\n";
    return 0;
}