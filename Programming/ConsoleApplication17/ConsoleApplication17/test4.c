#include <stdio.h>

void printArrReverse(int i[], int count);

void main() {
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	printArrReverse(arr, 5);
}

void printArrReverse(int i[], int count) {
	int j;
	int arrSize = 9; // sizeof(i) / sizeof(int);
	//printf("%d", arrSize);
	for (j = 0; j < count; j++) {
		printf("arr[%d] = %d\n", arrSize - j, i[arrSize - j]);
	}
}