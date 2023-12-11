#include "stdio.h"
#include "stdlib.h"



/*		1��qsort����
*		2��compare����
*		3��malloc�����ڴ�ռ�
*
*
*/
void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
int ascend(int a, int b) {		//�ȴ�С
	return a > b;
}
int descend(int a, int b) {
	return a < b;
}
void sort(int* array, int nvalue, int (*cmp)(int, int)) {		//����ð�ݱȴ�С
	int max, tmp, i, j;
	int* p = array;
	for (i = nvalue; i > 0; i--) {
		for (j = 0; j < (i - 1); j++) {
			if ((cmp)(array[j], array[j + 1])) {
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}
int main(void) {
	int i, num;
	int a[5] = { 5,8,9,1,6 };
	int* ps;
	printf("Please input the numbers of the array:");
	scanf_s("%d", &num);
	ps = malloc(num * sizeof(int));
	if (ps == NULL) {
		printf("No much memory.\n");
	}
	for (i = 0; i < num; i++) {
		printf("%d:", i + 1);
		scanf_s("%d", ps + i);
	}
	sort(ps, num, ascend);
	for (i = 0; i < num; i++) {
		printf("%d at 0x%p\n", ps[i],&ps[i]);
	}
	free(ps);
	return 0;
}


