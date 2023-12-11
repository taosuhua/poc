/*
    编写函数reverse_string，它的原型如下：
    void reverse_string(char *string);
    函数把参数字符串中的字符反向排列。请使用指针而不是数组下标，不要使用任何C函数库中
    用于操纵字符串的函数。不可以声明一个局部数组来临时存储参数字符串。
*/

#include "stdio.h"

void reverse_string(char *str);
void main(void){
    char string[] = "ABCDEFG";
//    printf("string[] address: %p\n",string);
    reverse_string(string);
    printf(string);
}

void reverse_string(char *str){
    char *start, *end;
    start = str;
    end = str;
    while(*str != '\0'){
        str++;
        end++;
    }
    end--;
    while(end > start){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}