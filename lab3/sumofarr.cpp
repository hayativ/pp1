#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    long long int sum = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum = sum + x;
    }
    cout << sum;
    return 0;
}