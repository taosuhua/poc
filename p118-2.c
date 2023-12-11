#include "stdio.h"
#include <stdlib.h>
#define MAX_LENGTH  100

char** find_chars(char key, char *str){
    int n =0;
//    char **result = malloc(MAX_LENGTH * sizeof(char*));
    char **result = malloc(MAX_LENGTH * sizeof(char*));
    while(*str != '\0'){
        if(*str == key){
            result[n] = str;
            n++;
        }
        str++;
    }
    return result;
}

int main(void){
    char string[] = "hello world again code language";
    char **res = find_chars('o',string);
    for(int i = 0; i < 4; i++) {
        printf("%p ", res[i]);
    }
    free(res);
    return 0;
}
