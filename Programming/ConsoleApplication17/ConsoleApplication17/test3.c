#include <stdio.h>

void printArr(int i[], int count);

void main() {
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	printArr(arr, 5);
}

void printArr(int i[], int count) {
	int j;
	for (j = 0; j < count; j++) {
		printf("arr[%d] = %d\n", j, i[j]);
	}
}