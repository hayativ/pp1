#include <iostream>
using namespace std;
void valid(string s){
    string str = "Valid";
    for(int i = 0; i < s.size(); i++){
        if (s[i] == char(49) || s[i] == char(51) || s[i] == char(53) || s[i] == char(55) || s[i] == char(57)){
            str = "Not valid";
        }
    }
    cout << str;
}
int main (){
    int n;
    cin >> n;
    string s = to_string(n);
    valid(s);
    return 0;
}