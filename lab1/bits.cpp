#include <iostream>
using namespace std;
int main (){
    int a, b;
    cin >> a >> b;
    int second = b%10 + b/100;
    cout << a + second;;
    return 0;
}