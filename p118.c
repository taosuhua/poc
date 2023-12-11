#include "stdio.h"


/*
PURPOSE
从一个整形数组中找一个值，并返回它指针；
*/
int* find_int(int key, int *array);
void main(void){
    int *p;
    int a[] = {1,4,5,7,32,45,2,23};
    p = find_int(32,a);
    printf("%p %d\n",p,*p);
    printf("%p %d\n",p+1,*(p+1));

}

int* find_int(int key, int *array){
    int n = 0;
    // while(array[n] != NULL){
    //     n++;
    // }
    n = sizeof(array);
    for(int i = 0; i < n; i++){
        if(array[i] == key){
            return &array[i];
        }
    }
}
