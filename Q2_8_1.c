#include "stdio.h"

int increment(int num){
	return ++num;
}

int negate(int num){
	return num*=-1;
}

int main(void){
	int a = 10, b = 0, c = -10;
	printf("Increment(%d) = %d; Negate(%d) = %d. \n",a,increment(a),a,negate(a));
	printf("Increment(%d) = %d; Negate(%d) = %d. \n",b,increment(b),b,negate(b));
	printf("Increment(%d) = %d; Negate(%d) = %d. \n",c,increment(c),a,negate(c));
}