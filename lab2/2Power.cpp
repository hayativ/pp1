#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int x = 0;
    while (pow (2, x) < n + 1){
        cout << pow (2, x) << " ";
        x ++;
    }
    return 0;
}