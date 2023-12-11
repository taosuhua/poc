#include "stdio.h"

int main(void){
    union {
        int a;
        float b;
        char c;
    }x;
    x.a = 25;
    x.b = 3.14;
    x.c = 'x';
    printf("%c",x.a, x.b, x.c);
}