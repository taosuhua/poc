#include "stdio.h"

int main(void){
    typedef union{
        float a;
        struct {
            unsigned decimal:23;
            unsigned index:  8;
            unsigned symbol: 1;
        }part;
    }floatdecimal;

    floatdecimal f;
    f.a = -0.1;
    printf("%u\n",f.part.symbol);
    printf("%u\n",f.part.index);
    printf("%u\n",f.part.decimal);
}