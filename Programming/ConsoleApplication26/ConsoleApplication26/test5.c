#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printArray(int a[], int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("%d   ", a[i]);
	}
	printf("\n");
}

void selectionSort(int arr[], int MAX) {
	int indexMin, i, j;

	// loop through all numbers 
	for (i = 0; i < MAX - 1; i++) {

		// set current element as minimum 
		indexMin = i;

		// check the element to be minimum 
		for (j = i + 1; j<MAX; j++) {
			if (arr[j] < arr[indexMin]) {
				indexMin = j;
			}
		}

		if (indexMin != i) {
			// swap the numbers 
			int temp = arr[indexMin];
			arr[indexMin] = arr[i];
			arr[i] = temp;
		}
	}
}

int binarySearch(int arr[], int find, int count) {
	int lowerBound = 0;
	int upperBound = count - 1;
	int midPoint = -1;
	int comparisons = 0;
	int index = -1;

	while (lowerBound <= upperBound) {
		printf("#");
		comparisons++;

		// compute the mid point 
		// midPoint = (lowerBound + upperBound) / 2;
		midPoint = lowerBound + (upperBound - lowerBound) / 2;

		// data found
		if (arr[midPoint] == find) {
			index = midPoint;
			break;
		}
		else {
			// if data is larger 
			if (arr[midPoint] < find) {
				// data is in upper half
				lowerBound = midPoint + 1;
			}
			// data is smaller 
			else {
				// data is in lower half 
				upperBound = midPoint - 1;
			}
		}
	}
	return index;
}

void main() {
	int arr[10];
	int i;
	int find;
	int comparison = 0;

	// make random array
	srand(time(NULL));
	for (i = 0; i < 10; i++) {
		arr[i] = rand() % 24 + 1;
	}

	// print array
	printf("Print array : \n");
	printArray(arr, 10);

	printf("\nEnter a number to find : ");
	scanf("%d", &find);

	printf("\nSorting with selection sort : \n");
	selectionSort(arr, 10);
	printArray(arr, 10);

	printf("\nBinary search comparison count : ");
	// find location of input number + print every comparison
	int location = binarySearch(arr, find, 10);

	// if element was found 
	if (location != -1)
		printf("\nElement %d is found at location: %d\n\n", find, (location + 1));
	else
		printf("\nElement %d not found\n\n", find);
}