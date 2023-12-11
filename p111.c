#include "stdio.h"
#define MAX_VALUE   10

void main(void){
    char message[MAX_VALUE];
    char *p;
    for(p = &message[MAX_VALUE]; p > &message[0];)
    *--p='B';
    printf(message);
}