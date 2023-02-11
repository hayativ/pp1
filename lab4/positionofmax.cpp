#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n];
    int row, column, max;
    max = INT8_MIN;
    for (int i = 0 ; i < n; i ++){
        for (int j = 0 ; j < n; j ++){
            cin >> a[i][j];
        }
    }
    for (int i = 0 ; i < n; i ++){
        for (int j = 0 ; j < n; j ++){
            if (a[i][j] > max){
                row = i;
                column = j;
                max = a[i][j];
            }
        }
    }
    cout << row + 1 << " " << column + 1;
    return 0;
}