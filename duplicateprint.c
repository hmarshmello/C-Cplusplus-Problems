#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0;i<n;i++) scanf("%d", &arr[i]);
    for(int j =0;j<n;j++){
        for(int k = j+1;k<n;k++){
            if(arr[j]==arr[k]) printf("Duplicate element position is %d\nDuplicate element value is %d",k,arr[j]);
        }
    }
    return 0;
}