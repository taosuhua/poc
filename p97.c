#include "stdio.h"

void main(void){
    int a = 10;
    int *d = &a;
    printf("%d\n",*d);
    *d = 15 - *d;
    printf("%d",*d);
}