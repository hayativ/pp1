#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int seven = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x % 10 == 7) {
        seven ++;
        
        }
       
    }
    
    cout << seven;
    return 0;
}