#include "stdio.h"
#include "stdarg.h"

float average(int values, ...){
    int i;
    float total;
    va_list var_arg;
    va_start(var_arg,values);
    for(i = 0; i< values;i++){
        total += va_arg(var_arg,int);
    }
    va_end(var_arg);
    return total / values;
}

int main(void){
    printf("%f \n",average(5,1,2,3,4,5));
}