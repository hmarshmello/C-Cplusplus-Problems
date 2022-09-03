#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int i, search, first, last, middle;
    int arr[5] = {3, 50, 60, 79, 100};
    search = 3;
    first = 0; last = 5; middle = (first+last)/2;
    while(first <= last){
        if(arr[middle]<search) first = middle + 1;
        else if(arr[middle]==search) {
            printf("%d", middle+1);
            break;
        }
        else last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last) printf("NF");
    return 0;
}