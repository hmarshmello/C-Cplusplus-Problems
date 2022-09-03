#include <stdio.h>
int main(){
    int arr[1000];
    for(int i=0;i<sizeof(arr);i++){
        scanf("%d", arr[i]);
        if(arr[i]=='\b'){
            printf("%d", sizeof(arr)/sizeof(arr[0]));
        }
    }
    return 0;
}