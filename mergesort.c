#include <stdio.h>


int main(){
    int a1[6] = {1,2,3};
    int a2[3] = {4,5,6};
    int length = sizeof(a1)/sizeof(a1[0]);
    int length1 = sizeof(a2)/sizeof(a2[0]);
    rep:
        for(int i =0;i<length;i++){
            if(a1[i] == 0){
                for(int j=0;j<length1;j++){
                    a1[i] = a2[j];
                    goto rep;
                }
            }
        }
    for(int k=0;k<length;k++) printf("%d ", a1[k]);
    return 0;
}