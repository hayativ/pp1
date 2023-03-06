#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    string s = to_string(n);
    for (int i = 0; i < s.size(); i ++){
        if (i % 2 == 0){
            sum1 += s[i];
        }
        else sum2 += s[i];
    }
    if (sum1 == sum2){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}