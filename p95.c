#include "stdio.h"

void main(void){
    int *a = NULL;
    int b = 5;
    a = &b;
    printf("A: 0x%x = %d",a,*a);
}