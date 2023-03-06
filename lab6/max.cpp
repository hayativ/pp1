#include <iostream>
using namespace std;
int max(int a[]){
    int maxx = 0;
    for (int i = 0; i < 4; i ++){
        if (a[i] > maxx){
            maxx = a[i];
        }
    }
    return maxx;
}
int main (){
    int a[4];
    for (int i = 0; i < 4; i ++){
        cin >> a[i];
    }
    cout << max(a);
    return 0;
}