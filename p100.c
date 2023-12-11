#include "stdio.h"

void main(void){
    char ch = 'a';
    char *cp = &ch;
    char result = ++*cp++;      //
    printf("%c",result);
}