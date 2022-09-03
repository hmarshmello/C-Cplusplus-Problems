#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int ATAE(){
    int a[5] = {15,12,42,53,1};
    int *p,i;
    p = &a[0];
    cout << "Elements are: ";
    for(i = 0;i<5;i++) cout << *(p+i) << " ";
    return 0;   
}

int SOAE(){
    int a[5] = {3,12,4,24,14};
    int *p,i,r=0;
    p = a;
    cout << "Sum of the array is: ";
    for(i = 0;i<5;i++) {
        r = r + *p;
        p++;
    }
    cout << r;
}

int SNAE(){
    int a[5] = {12,32,14,55,23};
    int *p,i;
    p=&a[0];

} 

int AH_2(){
    int a[5] = {123,12,43,52,65};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    for(int i = 0 ;i<n;i++) cout << a[i] <<" ";
}

int MSQR(){
    int a;
    cin >> a;
    int SQRT = sqrt(a);
    cout << SQRT;
}

int main(){
    MSQR();
    return 0;
}