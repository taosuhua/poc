/*
    用于统计字符串数组中某个字符的个数
*/
#include "stdio.h"

/*
在你给出的代码中，*messages是一个指向字符数组（也就是字符串）的指针。
具体来说，*messages等价于messages[0]，它指向字符串"A thing."。所以，
*messages可以被看作是一个指向字符串"A thing."的指针。
*/



int FindChar(char **strings, char value);
int FindCharAnotherWay(char **strings,char value);
void main(void){
    char *messages[] = {
        "A thing.",
        "Another thing.",
        "Some other things.",
        "Anything."
    };
    printf("%d\n",FindChar(messages,'t'));
    printf("%d\n",FindCharAnotherWay(messages,'g'));


}

int FindChar(char **strings, char value){
    int n = 0;
    while(*strings != NULL){
        char *p = *strings;
        while(*p != '\0'){
            if(*p == value){
                n++;
            }
            p++;
        }
        strings++;
    }
    return n;
}

int FindCharAnotherWay(char **strings,char value){
    int n = 0;
    while(*strings != NULL){
        while(**strings != '\0'){
            if(*(*strings)++ == value){
                n++;
            }
        }
        strings++;
    }
    return n;
}