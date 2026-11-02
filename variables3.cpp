//my prediction is all number will be in its variable then sum of all furits will be printed and after changing the oranges the new total will also change

#include<iostream>
using namespace std;
int main(){
    int apples = 10 ;
    int oranges = 4;
    int bananas = 7;
    cout<< "total fruit count = "<< apples + oranges + bananas<<"\n";
    oranges = 9;
    cout<<"new total after change in orange count \n";
    cout<< "total fruit count = "<< apples + oranges + bananas<<"\n";
    return 0;
}