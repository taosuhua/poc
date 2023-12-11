#include "stdio.h"
#define MAX_NUM 1000
#define TRUE    1
#define FALSE   0

void Find_Primes(int *array);
void main(void){
    int units[MAX_NUM];
    Find_Primes(units);
    for (int i = 0; i < MAX_NUM; i++)
    {
        printf("[%d] ",units[i]);
    }
    
    
}

void Find_Primes(int *array){
    int *p;
    for(p = array; p < &array[MAX_NUM] ;p++){
        *p = TRUE;
    }
    for(p = &array[2]; p < &array[MAX_NUM]; p+=2){
        *p = FALSE;
    }
    for(int i = 3; i < MAX_NUM; i+=2){
        p = &array[i];
        while(p+=i, p<&array[MAX_NUM]){
            *p = FALSE;
        }
    }
    for(int i = 0; i < MAX_NUM; i++){
        if(array[i] == 1){
            array[i] = i;
        }
    }
}