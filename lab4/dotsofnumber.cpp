#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    string a[n][n];
    int charr = 1;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            if (j == n - i - 1){
                string s = to_string(charr);
                a[i][j] = s;
                charr++;
            }
            else{
                a[i][j] = ".";
            }
        }
    }
    
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}