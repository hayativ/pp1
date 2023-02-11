#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int koren  = sqrt(n);
    int x = 1;
    while ( x < koren + 1){
        cout << pow(x, 2) << endl;
        x ++;
    }
    return 0;
}