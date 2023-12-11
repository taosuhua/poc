#include "stdio.h"

void main(void){
    char *message = "abcdegfhijklmn";
    char *ptr1, *ptr2, *ptr3;
    ptr1 = message + 2;
    ptr2 = message + 8;
    printf("PTR1 --> %p VALUE --> %c\n",ptr1,*ptr1);
    printf("PTR2 --> %p VALUE --> %c\n",ptr2,*ptr2);
    ptr3 = message + (ptr2 - ptr1);
    printf("PTR3 --> %p VALUE --> %c\n",ptr3,*ptr3);    
}