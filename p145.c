#include "stdio.h"

int main(void){
    int i;
    int *p;
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    for(i = 0 ; i < 10 ; i ++){
        printf("%d ",*(A + i));
    }
    for(p = A; p < A + 10; p++){
        *p = 0;
    }
    putchar('\n');
    for(i = 0 ; i < 10 ; i ++){
        printf("%d ",*(A + i));
    }
}