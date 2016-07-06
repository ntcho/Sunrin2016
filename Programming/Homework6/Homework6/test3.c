#include <stdio.h>

void printArr(int a[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
}

void main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int tmp;
	int i, size = 10;

	printf("Array before move : ");
	printArr(arr, size);

	tmp = arr[0];

	for (i = 0; i < 10; i++) {
		if (i == 9) {
			arr[i] = tmp;
		}
		else {
			arr[i] = arr[i + 1];
		}
	}

	printf("\n\nResult\n\n");
	printf("Array after move : ");
	printArr(arr, size);
	printf("\n");
}