#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

void main() {
	int arr[N];
	int i, j;
	int tmp;
	srand((unsigned int)time(NULL));

	puts("Generate random number from 1 to 999");
	for (i = 0; i < 100; i++) {
		arr[i] = rand() % 999 + 1;
		printf("%5d", arr[i]);
		if (i % 10 == 9) printf("\n");
	}

	//Sorting algorithm

	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				//Changing algorithm
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	puts("\nRandom number after sorting");
	for (i = 0; i < 100; i++) {
		printf("%5d", arr[i]);
		if (i % 10 == 9) printf("\n");
	}
}