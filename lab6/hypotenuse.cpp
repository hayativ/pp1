#include <iostream>
#include <cmath>
using namespace std;
int hypotenuse(int a, int b){
    double x = sqrt(a*a + b*b);
    return x;
}
int main (){
    int a, b;
    cin >> a >> b;
    cout << hypotenuse(a, b);
    return 0;
}