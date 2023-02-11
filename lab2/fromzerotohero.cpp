#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main (){
    int x;
    cin >> x;
    int zero = 0;
    for (int i = 0; i < x; i ++){
        int y;
        cin >> y;
        while (y > 0){
            if(y%10 == 0) zero++;
            y = y/10;
        }
    }
    cout << zero;
    return 0;
}