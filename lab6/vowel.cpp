#include <iostream>
using namespace std;
string vowels(string s){
    string str = "";
    for (int i = 0; i < s.size(); i++){
        if (s[i] != char(65) && s[i] != char(69) && s[i] != char(73) && s[i] != char(79) && s[i] != char(85) && s[i] != char(97) && s[i] != char(101) && s[i] != char(105) && s[i] != char(111) && s[i] != char(117)){
            str += s[i];
        }
    }
    return str;
}
int main (){
    string s;
    getline(cin, s);
    cout << vowels(s);
    return 0;
}