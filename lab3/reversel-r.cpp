#include <iostream>
using namespace std;
int main (){
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i ++){
        if (i == l - 1){
            for (int j = r - 1; j > l - 2; j --){
                cout << a[j] << " ";
            }
            i = r;
        }
        if (i == n) return 0;
        cout << a[i] << " ";
    }
    return 0;
}