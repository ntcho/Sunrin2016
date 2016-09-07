#include <stdio.h>

void swap(int *n1, int *n2) {
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void bubbleSort(int *a) {
	int i, j;
	puts("Default Array : ");
	printArray(a);

	for (i = 0; i < 5 - 1; i++) {
		for (j = 0; i < 5 - 1; j++) {
			if (*(a + j) > *a(a + j + i)) {
				printf("i = %d, j = %d\t", i, j);
				printArray(a);
			}
		}
		printf("\n");
	}
	printf("\n Sorted Array : \n");
	printArray(a);
}

void printArray(int *a) {
	int i = 0;
	for (i; i < 5; i++) {
		printf("%d ", *(a + i));
	}
}

int main() {
	int a[] = { 66, 55, 33, 77, 44 };
	puts("[Bubble Sort]");
	bubbleSort(a);
	printArray(a);
}