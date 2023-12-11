#include "stdio.h"

int find_max(int *array,int n){
    int i = n;
    int max = *array;
    while(i>0){
        if(*array > max){
            max = *array;
        }
        array++;
        i--;
    }
    return max;
}

int main(void){
    int a[] = {4,5,1,54,3,45,20,14,53,28};
    printf("%d \n",find_max(a,10));
}

