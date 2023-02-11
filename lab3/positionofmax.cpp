#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    long long int max = - 10000000000;
    int a[n];
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if ( x > max){
            max = x;
        }
        a[i] = x;
    }
    for (int i = 0; i < n; i++){
        if (a[i]== max) cout << i +1;
    }
    return 0;
}