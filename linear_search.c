#include <stdio.h>
#include <stdlib.h>

int LINEAR_SEARCH(int array[],int size, int value){
    for(int i = 0; i<size; i++){
        if(array[i] == value) return i;
    }
    return -1;
}

int main(){
    int array[] = {3, 50, 60, 79, 100};
    int value =  3;
    int size = 5;
    int LS = LINEAR_SEARCH(array, size, value);
    if(LS == -1) printf("NF");
    else printf("F %d", LS+1);
    return 0;
}