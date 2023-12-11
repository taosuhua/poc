#include "stdio.h"

void CopyArray(int *x, int *y,int size){
    int *px, *py;
    for(px = x, py = y;px < &x[size];){
        *px++ = *py++;
    }
}
int main(void){
    int *p;
    int A[10];
    int B[] = {2,4,6,8,10,1,3,5,7,9};
    for(p = A;p < &A[10];){
        printf("%d ",*p++);
    }
    CopyArray(A,B,10);
    for(p = A;p < &A[10];){
        printf("%d ",*p++);
    }
}