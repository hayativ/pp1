#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    if(n < 0) return 0;
    else {
    if (n%2 != 0) cout << "Super";
    else if (n >= 6 && n <=20) cout << "Super";
    else cout << "Not Super";
    }
    return 0;
}