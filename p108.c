#include "stdio.h"


//指针运算
void main(void){
    char message[5];
    char *p;

    for(p = message; p < (message+5); p++){
        *p = 'A';
    }
    printf(message);
}