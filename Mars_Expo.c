#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char* S = (char *)malloc(10240 * sizeof(char));
    scanf("%s",S);
    int len = strlen(S);
    int temp = 0;
    int ans = 0;
    for(temp=0;temp<len;temp=temp+3){
            if(S[temp] != 'S') ans++;
            if(S[temp+1] != 'O') ans++;    
            if(S[temp+2] != 'S') ans++;    
    }
    printf("%d\n",ans);
    return 0;
}
