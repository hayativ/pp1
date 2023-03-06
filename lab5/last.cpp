#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    int max = 96;
    char ch;
    for (int i = 0; i < s.size(); i ++){
        if (char(s[i]) > max){
            max = char(s[i]);
            ch = s[i];
        }
    }
    cout << ch;
    return 0;
}