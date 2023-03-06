#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    char x;
    cin >> x;
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < s.size(); i ++){
        if (s[i] == x) cnt++;
    }
    if (cnt == n) cout << "YES";
    else cout << "NO";
    return 0;
}