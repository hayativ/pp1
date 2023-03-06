#include <iostream>
using namespace std;
string capital(string s){
    string str = "";
    for(int i = 0; i < s.size(); i++){
        if (i % 2 == 0) s[i] = s[i] - 32;
        str += s[i];
    }
    return str;
}
int main (){
    string s;
    cin >> s;
    cout << capital(s);
    return 0;
}