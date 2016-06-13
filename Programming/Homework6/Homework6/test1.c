#include <stdio.h>

void main() {
	int arr[] = {45, 36, 52, 86, 12, 42, 73, 51, 36, 53};
	int max, min;
	int i;

	printf("Printing the elements of array : ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%-5d", arr[i]);
	}
	max = min = arr[0];

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	printf("\nResult\nMax value : %d\nMin value : %d\n", max, min);
}