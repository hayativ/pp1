#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a[n];
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i ++){
        if (m == a[i]){
            cout << i + 1;
            return 0;
        }
        else {
            if (a[i] > m){
                cout << i;
                return 0;
            }
        }
    }
    cout << n;
    return 0;
}