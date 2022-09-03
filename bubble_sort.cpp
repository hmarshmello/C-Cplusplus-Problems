#include <iostream>
using namespace std;

int main(){
    int arr[5] = {4,7,1,3,11};
    for(int i = 0; i<5;i++){
        for(int j = i+1;j<5;j++){
            if(arr[j] < arr[i]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for(int j = 0;j<5;j++){
        cout << arr[j] << " ";
    }
}