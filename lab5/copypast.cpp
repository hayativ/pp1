#include <iostream>
using namespace std;
int main (){
    string t, s;
    cin >> t >> s;
    string x = "";
    int size = 0;
    if (s.size() % t.size() != 0){
        cout << "NO";
        return 0;
    }
    else{
        while (size != s.size()){
            x += t;
            size += t.size();
        }
        if (x == s) cout << "YES";
        else cout << "NO";
    }
    return 0;
}