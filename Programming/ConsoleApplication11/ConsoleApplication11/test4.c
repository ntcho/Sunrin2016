#include <stdio.h>

int main() {
	int a[] = { 15, 20, 30,};
	int b[sizeof(a) / sizeof(int)] = { 0,};
	int i;

	printf("Array a : ");

	for (i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("%d ", a[i]);
	}

	printf("\nArray b : ");

	for (i = 0; i < sizeof(b) / sizeof(int); i++) {
		printf("%d ", b[i]);
	}

	printf("\n\nCopied\n");

	printf("\nArray a : ");

	for (i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("%d ", a[i]);
		b[i] = a[i];
	}

	printf("\nArray b : ");

	for (i = 0; i < sizeof(b) / sizeof(int); i++) {
		printf("%d ", b[i]);
	}

	getch();

	return 0;
}