#include <stdio.h>

void main() {
	int arr[100];
	int size, min;
	int i;

	printf("Enter array size under 100 : ");
	scanf("%d", &size);
	printf("Enter array items (%d) : ", size);
	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) {
			min = arr[i];
		}
		else {
			if (min > arr[i]) {
				min = arr[i];
			}
		}
	}

	printf("\nResult\n\n");
	printf("Minimum value : %d\n", min);
	printf("Minimum value's location : ");

	for (i = 0; i < size; i++) {
		if (min == arr[i]) {
			printf("%d ", i + 1);
		}
	}

	printf("\n");
}