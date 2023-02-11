#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a;
    cin >> a;
    int a1, a2, a3, a4;
    a1 = a%2;
    a2 = a/ 2 %2;
    a3 = a/4 %2;
    a4 = a/8%2;
    cout << a1*pow(2,3) + a2*pow(2,2) + a3*pow(2,1) + a4*pow(2,0);
    return 0;
}