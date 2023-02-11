#include <iostream>
#include <cmath>
using namespace std;
int main (){
    long long int n;
    cin >> n;
    long long int a[n];
    long long int l, r;
    cin >> l >> r;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long int sum = 0;
    for (int i = l -1  ; i < r; i++){
        sum += a[i];
    }
    cout << sum;
    return 0;
}