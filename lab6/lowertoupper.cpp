#include <iostream>
using namespace std;
char upper(char ch){
    return ch - 32;
}
int main (){
    char ch;
    cin >> ch;
    cout << upper(ch);
    return 0;
}