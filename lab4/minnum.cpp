#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int min = 100001;
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i ++){
        for (int j = 0 ; j < m; j++){
            cin >> a[i][j];
        }
    }
    int sum = 0;
    cout << "coordinates of min elements:" << endl;
    for (int j = 0 ; j < m; j++){
        min = 100001;
        for (int i = 0; i < n; i++){
            if (a[i][j] < min){
            min = a[i][j];
            x = i + 1;
            y = j + 1;
            }
        }
        sum += min;
        cout << x << ';' << y;
        cout << endl;
    }
    cout << endl;
    cout << "Their sum:" << endl;
    cout << sum;
    return 0;
}