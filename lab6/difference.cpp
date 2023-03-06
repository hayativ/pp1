#include <iostream>
using namespace std;
int diff(int x, int y){
    int m;
    if (x > y) m = x - y;
    else m = y - x;
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
    int x, y;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            if (i == j){
                x = a[i];
                y = b[j];
                cout << diff(x, y) << " ";
            }
        }
    }
    return 0;
}