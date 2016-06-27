#include <stdio.h>

void arrCopy(float i[], int arrSize);
void arrPrint(float i[], int arrSize);

void main() {
	float arr[] = { 10, 20, 9, 50, 50, 66, 72, 12, 80, 140 };
	float arrSize = sizeof(arr) / sizeof(float);

	arrPrint(arr, arrSize);
	printf("\n");
	arrCopy(arr, arrSize);
	printf("\n");
}

void arrPrint(float arr1[], int arrSize) {
	int j;
	printf("Original array :");
	for (j = 0; j < arrSize; j++) {
		printf(" %.1f", arr1[j]);
	}
}

void arrCopy(float arr1[], int arrSize) {
	float arr2[10];
	int j;
	printf("Copied array :");
	for (j = 0; j < arrSize; j++) {
		arr1[j] = arr2[j];
		printf(" %.1f", arr2[j]);
	}
}

//idk this doesnt works