#include "stdio.h"

void Triangle(float *a, float *b, float *c);
void main(void){
    float a,b;
    char n = 9;
    float c;
    printf("Input three numbers.\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    Triangle(&a,&b,&c);
    printf("0x%x ",&n);
}

void Triangle(float *a, float *b, float *c){
    int sum = 0;
    if(*a == *b) sum++;    
    if(*a == *c) sum++;
    if(*b == *c) sum++;
    printf("%f %f %f\n",*a,*b,*c);
    printf("0x%x 0x%x 0x%x\n",a,b,c);
    switch (sum)
    {
    case 0:
        printf("It is just a triangle.");
        break;
    case 1:
        printf("It is just an isosceles triangle.");
        break;
    case 2:
        printf("It is just a Equilateral triangle.");      
        break;
    case 3:
        printf("It is just a Equilateral triangle.");        
        break;        
    }
}