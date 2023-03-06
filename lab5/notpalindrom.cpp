#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    string str = "";
    string str2 = "";
    for (int i = s.size() - 1; i >= 1; i --){
        str += s[i];
    }
    for (int i = 1; i < s.size(); i ++){
        str2 += s[i];
    }
    if (str == str2) cout << "YES";
    else cout << "NO";
    return 0;
}