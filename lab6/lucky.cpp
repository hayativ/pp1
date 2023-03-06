#include <iostream>
using namespace std;
string lucky(int n){
    string str = "No";
    int sum = 0;
    int x = n % 10;
    while(n != 0){
        sum += n%10;
        n = n/10;
    }
    if (sum/x - int(sum/x) == 0) str = "Yes";
    return str;
}
int main (){
    int n;
    cin >> n;
    cout << lucky(n);
    return 0;
}