#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    int m = 0;
    int n = 0;
    for (int i = 0; i < s.size(); i ++){
        if (s[i] >= char(97) && s[i] <= char(122)){
            n++;
        }
        else if (s[i] >= char(65) && s[i] <= char(90)){
            m++;
        }
    }
    cout << n << " " << m;
    return 0;
}