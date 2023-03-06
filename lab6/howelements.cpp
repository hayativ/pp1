#include <iostream>
using namespace std;
int same(int n, int a[], int b[]){
    int m = 0;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            if (a[i] == b[j]){
                m ++;
                b[j] = 0;
            }
        }
    }
    return m;
}
int main (){
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
    for (int j = 0; j < n; j ++){
        cin >> b[j];
    }
    cout << same(n, a, b);
    return 0;
}