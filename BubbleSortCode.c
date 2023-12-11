#include "stdio.h"

void BubbleSort(int *A, int n,int (*compare)(int,int)){
    int i,j,temp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1;j++){
            if(compare(A[j],A[j+1]) > 0){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int flag(int a, int b){
    if(a > b) return -1;
    else return 1;
}

int abs_compare(int a, int b){
    if(abs(a) > abs(b)) return 1;
    else return -1;
}
int main(void){
    int i;
    int C[] = {3,2,1,6,4,5};
    int D[] = {-55,-32,12,-90,76,-8};
    void (*p)(int*,int,int (*p)(int,int));
    p = BubbleSort;
    (*p)(C,6,flag);
    for(i=0;i<6;i++){
        printf("%d ",C[i]);
    }
    putchar('\n');
    p(D,6,abs_compare);
    for(i=0;i<6;i++){
        printf("%d ",D[i]);
    }    

}