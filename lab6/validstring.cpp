#include <iostream>
using namespace std;
void isValid(string s, int n){
    string str;
    int m = 0;
    for (int i = 0; i < s.size(); i ++){
        if (s[i] >= char(0) && s[i] <= char(9)){
            m++;
        }
    }
    if(m >= n){
        str = "YES";
    }
    else str = "NO";
    cout << str;
}
int main (){
    string s;
    cin >> s;
    int n;
    cin >> n;
    isValid(s, n);
    return 0;
}