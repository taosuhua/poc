#include "stdio.h"

void main(void){
    int a = 12;
    int *b = &a;
    int **c = &b;
    printf("a's address is 0x%x, value is %d\n",&a,a);
    printf("b's address is 0x%x, value is %x\n",&b,b);
    printf("c's address is 0x%x, value is %x |*c = %x | **c = %d\n",&c,c,*c,**c);    
}