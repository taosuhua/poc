#include "stdio.h"
#define NUL '\0'


int StringLength(char *string);
void main(void){
    char *message = "hello world.";
    printf("%s\nLegnth = %d \n",message,StringLength(message));
}

int StringLength(char *string){
    int n = 0;
    char *p = string;
    while((*p++) != NUL){
        n++;
    }
/*     do{
        n++;
    }while((*p++) != '\0'); */
    return n;
}