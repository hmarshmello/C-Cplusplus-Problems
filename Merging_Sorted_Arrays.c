#include <stdio.h>
int main(){
    int a[6] = {3,2,1};
    int a1[3] = {4,5,6};
    for(int i=3;i<6;++i){
        for(int j=0;j<3;++j){
            if(a[i]==0) a[i]=a1[j];
            break;
        }
    }
    printf("%d %d %d %d %d %d",a[0], a[1], a[2], a[3],a[4],a[5]);
    return 0;
}
