#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++){
        cin >> a[i];
        a[i] = pow(a[i], 2);
        cout << a[i] << " ";
    }

    return 0;
}