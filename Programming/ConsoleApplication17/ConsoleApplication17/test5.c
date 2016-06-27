#include <stdio.h>

int printArrMin(int i[], int count);
int printArrMax(int i[], int count);

void main() {
	int arr[] = { 10, 20, 9, 50, 50, 66, 72, 12, 80, 140 };
	int arrSize = sizeof(arr) / sizeof(int);
	printf("%d, %d\n", printArrMin(arr, arrSize), printArrMax(arr, arrSize));
}

int printArrMin(int i[], int arrSize) {
	int j;
	int min = i[0];
	for (j = 0; j < arrSize; j++) {
		if (min > i[j]) {
			min = i[j];
		}
	}
	return min;
}

int printArrMax(int i[], int arrSize) {
	int j;
	int max = i[0];
	for (j = 0; j < arrSize; j++) {
		if (max < i[j]) {
			max = i[j];
		}
	}
	return max;
}