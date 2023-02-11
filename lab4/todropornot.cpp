#include <iostream>
using namespace std;
int main (){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int sum;
    int min = 100;
    int index;
    for (int i = 0; i < n; i ++){
        sum = 0;
        for (int j = 0; j < m; j ++){
            cin >> a[i][j];
            sum += a[i][j];
        }
        if (sum < min){
            min = sum;
            index = i + 1;
        }
    }
    cout << index;
    return 0;
}