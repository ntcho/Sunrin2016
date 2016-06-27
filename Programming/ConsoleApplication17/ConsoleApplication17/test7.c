#include <stdio.h>

void shiftLeft(int a[], int count);

void main() {
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arrSize = sizeof(arr) / sizeof(int);

	shiftLeft(arr, arrSize);
}

void shiftLeft(int a[], int count) {
	int i;
	int tmp;
	for (i = 0; i < count; i++) {
		if (i == 0) {
			tmp = a[i];
		}
		else if (i == count - 1){
			a[i] = tmp;
		}
		else {
			a[i + 1] = a[i];
		}
		printf("%d", a[i]);
	}
}

//idk damned