#include <iostream>
using namespace std;
void book(int x, int a[], int n){
    string str = "No";
    for (int i = 0; i < n; i ++){
        if (x == a[i]){
            str = "Yes";
        }
    }
    cout << str;
}
int main (){
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
    cin >> x;
    book(x, a, n);
    return 0;
}