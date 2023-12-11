#include "stdio.h"

void swap(int *x, int *y);
int main(void){
    int a = 3, b = 4;
    printf("a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d b=%d\n",a,b);

}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}