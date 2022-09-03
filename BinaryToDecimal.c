#include <stdio.h>
#include <math.h>

int convert(int n){
    int dec=0,i=0, rem;
    while(n!=0){
        rem = n%10;
        n /= 10;
        dec += rem*pow(2,i);
        ++i;
    }
    return dec;
}

int main(){
    int num,bn, dn = 0 ,base = 1, rem;
    scanf("%d",&num);
    bn = num;
    while(num>0){                    
        rem = num%10;
        dn = dn + rem*base;
        num = num/10;
        base = base*2;
    }
    printf("%d\n%d", dn, convert(num));

    return 0;
}