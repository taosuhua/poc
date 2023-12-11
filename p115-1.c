#include "stdio.h"

char* find_char(char const *source, char const *chars);
void main(void){
    const char *source = "ABCDEF";
    const char *chars = "XRVQEF";
    printf("%p %c",find_char(source,chars),*find_char(source,chars));
}


char* find_char(char const *source, char const *chars){
    char *p;
    while(*source != '\0'){
        p = (char*)chars;
        while(*p != '\0'){
            if(*p == *source){
                return (char*)source;
            }
            p++;
        }
        source++;
    }
    return NULL;
}