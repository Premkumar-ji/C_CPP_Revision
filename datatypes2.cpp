// initial value : 12  4.5 P 
// new value : 12 5.25 P
#include<iostream>
using namespace std;
int main(){
    int books = 12;
    double wieght = 4.5;
    char initial = 'P';
    cout <<"initial value : "<< books <<" "<< wieght<<" "<< initial <<"\n";
    wieght = 5.25;
    cout <<"new value : " << books <<" "<< wieght<<" "<< initial <<"\n";
    return 0;
}