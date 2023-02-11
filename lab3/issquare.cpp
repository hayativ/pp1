#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    
    if (sqrt(n) - int(sqrt(n)) > 0){
        cout << "No";
    }
    else cout << "Yes";
    return 0;
}