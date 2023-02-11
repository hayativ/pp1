#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int poz = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
         if (x> 0) poz++;
    }
    cout << poz;
    return 0;
}