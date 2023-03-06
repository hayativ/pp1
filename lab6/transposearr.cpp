#include <iostream>
using namespace std;
int a[1000][1000];
void transpose(int a[1000][1000], int n, int m){
    for(int j = 0; j < m; j ++){
        for (int i = 0; i < n; i ++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main (){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            cin >> a[i][j];
        }
    }
    transpose(a, n, m);
    return 0;
}