#include "stdio.h"

/// @brief 在屏幕上打印出从0~100之间的所有质数
/// @param  
void main(void){
    int i = 1, n = 0;
    while(i<100){
        int j = 2;
        while(j < i){
            if(i % j == 0){
                break;
            }
            j++;
            if(i == j){
                n++;
                printf("%d ",j);
            }
        }
        i++;
    }
    printf("\nTotal: %d",n);
}