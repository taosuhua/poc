#include "stdio.h"

int del_substr(char *str, char const *substr);
void main(void){
    char string[] = "ABCDEFG";

/*
在C语言中，char string[] = "ABCDEFG"和char *string = "ABCDEFG"之间有一些重要的区别。

char string[] = "ABCDEFG"：这里，string是一个字符数组。
它在栈内存中创建了一个7个字符加上一个空字符（\0）的空间。这个空间是可以修改的。

char *string = "ABCDEFG"：在这里，string是一个字符指针，
它指向一个字符串字面量，该字面量在程序的只读内存段中。这意味着你不能修改这个字符串字面量的内容。
如果你试图这样做，程序将会崩溃。

所以，对于你的代码，如果你将char string[] = "ABCDEFG"替换为char *string = "ABCDEFG"，
那么del_substr函数中试图修改字符串的部分将会导致程序崩溃，因为字符串字面量是只读的。因此，你不能这样做。
*/

    char const *subString = "CD";
    printf("%d \n", del_substr(string,subString));
    printf("%s ",string);
}

int del_substr(char *str, char const *substr){
    char *p,*start;
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