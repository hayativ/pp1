#include <iostream>
using namespace std;
int main (){
    int n, k, duplicate;
    k = 0; 
    duplicate = 0;
    cin >> n;
    int array[n];
    int arr[n];
    for (int i = 0; i < n; i ++) cin >> array[i];
    for (int i = 0; i < n; i ++){
        duplicate = 0;
        for (int j = 0; j < k; j ++) if (array[i] == arr[j]) duplicate = 1;
            if (duplicate == 0){
                arr[k] = array[i];
                k += 1;
            }
        }

    for (int i = 0; i < k; i ++){
        cout << arr[i] <<  " ";
    }

    return 0;
}