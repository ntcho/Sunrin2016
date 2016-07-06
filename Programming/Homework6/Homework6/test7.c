#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// A utility function to swap to integers
void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
// A function to generate a random permutation of arr[]
void randomize ( int arr[], int n ){
    // Use a different seed value so that we don't get same
    // result each time we run this program
    srand ( time(NULL) );
	int i;
 
    // Start from the last element and swap one by one. We don't
    // need to run for the first element that's why i > 0
    for (i = n-1; i > 0; i--){
        // Pick a random index from 0 to i
        int j = rand() % (i+1);
 
        // Swap arr[i] with the element at random index
        swap(&arr[i], &arr[j]);
    }
}

void main() {
	int arrR[30];
	int arrS[30];
	int count;
	int i;
	
	printf("Enter student number under 30 : ");
	scanf("%d", &count);

	srand((unsigned int)time(NULL));

	for (i = 0; i < count; i++) {
		arrS[i] = i + 1;
		arrR[i] = i + 1;
	}

	randomize(arrR, count);

	for (i = 0; i < count; i++) {
		printf("%2d : %2d     ", arrS[i], arrR[i]);
		if (i % 5 == 4) {
			printf("\n");
		}
	}
	printf("\n");
}