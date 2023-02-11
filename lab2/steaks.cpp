#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, k;
    cin >> n >> k;
    if (n < 1 || n > 1000) return 0;
    if ( k >= n) cout << 2;
    else{
        int z = n*2/k;
        if ((n*2%k) != 0){
            z = z+1;
        }
        cout << z;
    }
    return 0;
}