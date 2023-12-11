#include "stdio.h"
#include "q282.h"

void main(void){
	short a = 5, b = 10, c = 100;
	printf("Sqrt(a+1)=%d\n",FunSqrt(a));
	printf("Sqrt(b+1)=%d\n",FunSqrt(b));
	printf("Sqrt(c+1)=%d\n",FunSqrt(c));

}

//传的数值加1再平方
unsigned int FunSqrt(short input){
	short temp = input + 1;
	printf("TEMP address is 0x%x\n",&temp);
	return temp * temp;
}
