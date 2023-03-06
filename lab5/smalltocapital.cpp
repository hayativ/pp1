#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i ++){
        if (s[i] >= char(97) && s[i] <= char(122)){
            s[i] -= 32;
        }
        cout << s[i];
    }
    return 0;
}