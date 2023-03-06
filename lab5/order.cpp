#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    int max = 64;
    for (int i = 0; i < s.size(); i++){
        if (char(s[i]) < max){
            cout << "NO";
            return 0;
        }
        if (char(s[i]) > max){
            max = char(s[i]);
        }
    }
    cout << "YES";
    return 0;
}