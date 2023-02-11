#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int res = 1;
    for (int i = 0; i < n; i++){
    bool res=true;
    if(i==1 || i == 0){
        continue;
    }
        for (int j = 2; j < i / 2 + 1; j ++){
            if (i % j == 0){
            res = false;
            break;
            }
        }
        if (res == true){
        cout << i << " is prime" << endl;
        }
    }
    return 0;
}