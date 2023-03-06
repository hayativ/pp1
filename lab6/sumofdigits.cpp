#include <iostream>
using namespace std;
int sum(int n){
    int summ = 0;
    while (n != 0){
        summ += n % 10;
        n = n/10;
    }
    return summ;
}
int main (){
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}