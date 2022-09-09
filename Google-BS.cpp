// Google as well as in Flipkart
// Allocate Books
// Given an array of intergers A of size N,
// College library has N books, ith book has a[i] number of pages,
// you have to allocate books to B number of students so that
// max number of pages alloted to student in Minimum.
// IP: 12 34 67 90, B = 2
// OP: 113

#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <iostream>
using namespace std;


int Solution::int books(vector<int> &A, int B) {
    int sum = 0 ;
    int mx = 0 ;
    int n = A.size() ;
    if(n < B) return -1;
    for(int i = 0 ; i < n ; i++){
        sum += A[i] ;
        mx = max(mx, A[i]);
    }
    int low = mx, high = sum, ans = -1 ;
    while(low <= high){
        int mid = (low + high) / 2;
        bool possible = true;
        // checking if possible
        int student = 1, pages = 0;
        for(int i = 0 ; i < n ; i++){
            pages += A[i];
            if(pages > mid){
                ++ student;
                pages = A[i] ;
            }
        }
        if(student <= B){
            ans = mid ;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){

    return 0;
}