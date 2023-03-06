#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == char(65) || s[i] == char(69) || s[i] == char(73) || s[i] == char(79) || s[i] == char(85) || s[i] == char(97) || s[i] == char(101) || s[i] == char(105) || s[i] == char(111) || s[i] == char(117)){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}