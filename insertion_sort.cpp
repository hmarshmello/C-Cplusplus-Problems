#include <iostream>
using namespace std;
int main(){
    int a[5] = {1,4,2,6,8};
    for(int i = 0;i<5;i++){
        int key = a[i];
        int j= i-1;
        while(key <a[j] && j>=0){
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = key;
    }

    for(int k = 0;k<5;k++){
        cout << a[k] << " ";
    }
    return 0;
}