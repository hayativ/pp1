#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    size_t pos = s.find(t);
if(pos == string::npos){
    cout<<"NO";
}
else{
    cout<<"YES";
}
return 0;
}