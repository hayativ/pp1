#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, k;
    cin >> n >> k;
    if (k > n) cout << '2';
    else if (n > k) cout << '1';
    else cout << '0';
    return 0;
}