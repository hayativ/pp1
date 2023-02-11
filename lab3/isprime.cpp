#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    bool isPrime = true;
    for (int j = 2; j < n / 2 + 1; j ++){
        if (n% j == 0) {
            isPrime = false;
        }
    }
        if(isPrime == true) cout << "Yes";
        else cout << "No";
    return 0;
}