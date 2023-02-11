#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a0;
    cin >> a0;
    int a1, a2, a3, a4;
    a1 = a0%2;
    a2 = a0/ 2 %2;
    a3 = a0/4 %2;
    a4 = a0/8%2;
    cout << a1*pow(2,3) + a2*pow(2,2) + a3*pow(2,1) + a4*pow(2,0);
    return 0;
}