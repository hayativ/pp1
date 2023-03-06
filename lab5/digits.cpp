#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool res = true;
    int cnt[9];
    for(int i=0;i<9;i++){
        cnt[i]=0;
    }
    for(int i=0;i<s.size();i++){
    int num = s[i]-48;
    cnt[num-1]++;
    }
    int max=cnt[0];
    for(int i=0;i<9;i++){
        if(cnt[i]>max){
            max=cnt[i];
        }
    }
    for(int i=0;i<9;i++){
        if(cnt[i]!=0){
            if(cnt[i]!=max){
                res=false;
            }
        }
    }
    if(res) cout << "YES";
    else cout << "NO";
    return 0;
}