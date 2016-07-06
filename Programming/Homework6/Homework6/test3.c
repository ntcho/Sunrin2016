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
	int i;

	printf("Array before move : ");
	printArr(arr, (sizeof(arr) / sizeof(int)));

	for (i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
		tmp = arr[0];
		if (i == 10 - 1) {
			arr[10 - 1] = tmp;
		}
		else {
			arr[i] == arr[i + 1];
		}
	}

	printf("\nResult\n");
	printf("Array after move : ");
	printArr(arr, (sizeof(arr) / sizeof(int)));

}