#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n];
    int max = 0;
    int max2 = 0;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cin >> a[i][j];
            if (a[i][j] > max) {
                max2 = max;
                max = a[i][j];
            }
            else if (max != a[i][j] && max2 < a[i][j]){
                max2 = a[i][j];
                }
                }
        }
        cout << max2;
    return 0;
}