#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i ++){
        for(int j = n - 2; j >= i; j--){
            if(a[j] > a[j +1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (int i = n-1; i >= 0; i --){
        cout << a[i] << " ";
    }
    return 0;
}