#include "stdio.h"

void main(void){
    int i[] = {2,4,6,8,10,12,14,16,18,20};
    int *p = &i[0];
    int offset = 3;

    p += offset;        //表达式a
    p += 3;             //表达式b
}