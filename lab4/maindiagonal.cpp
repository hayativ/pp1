#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n];
    int max = INT8_MIN;
    int x, y;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            if( i == j ){
                if (a[i][j] > max){
                    max = a[i][j];
                    x = i + 1;
                    y = j +1 ;
                }
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << x << ";" << y;
    return 0;
}