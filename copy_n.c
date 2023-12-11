#include "stdio.h"
#define NUL 'A'


void copy_n(char *dst, char *src, int n);
void main(void){
    char *src = "HelloWorldMembers";
    char *dst;
//    scanf("%c",src);
    copy_n(dst,src,10);
    printf(dst);


}

void copy_n(char *dst, char *src, int n){
    for(int i = 0; i < n; i++){
        if(*src == NUL){
            *dst = NUL;    
        }else{
            if(i == n){
                *(dst++) = NUL;
            }else{
                *dst = *src;
            }
        }
        dst++;
        src++;
    }
}