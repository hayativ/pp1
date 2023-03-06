#include <iostream>
#include <cmath>
using namespace std;
long long int pos(long long int n){
    long long int x = abs(n);
    return x;
}
int main (){
    long long int n;
    cin >> n;
    cout << pos(n);
    return 0;
}