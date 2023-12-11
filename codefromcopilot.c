#include "stdio.h"
#include "string.h"

int del_substr(char *str, char const *substr);
void main(void){
    char string[] = "ABCDEFG";
    char const *subString = "CDE";
    printf("%d ", del_substr(string,subString));
    printf("%s", string);
}

int del_substr(char *str, char const *substr){
    char *p, *start;
//    int len = strlen(substr);
    while(*str != '\0'){
        if(*substr == *str){                //从substr的第一位开始判断
            start = str;
            while(*substr != '\0'){
                if(*substr != *str) return 0;
                substr++;
                str++;
            }
            p = str;
            while(*p != '\0'){
                *start++ = *p++;
            }
            *start = '\0';
            return 1;
        }
        str++;
    }
    return 0;
}