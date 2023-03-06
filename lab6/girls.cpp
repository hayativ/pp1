#include <iostream>
using namespace std;
float girls(int n, int m){
    float num = m % n;
    return num;
}
int main (){
    int n, m;
    cin >> n >> m;
    cout << girls(n, m);
    return 0;
}