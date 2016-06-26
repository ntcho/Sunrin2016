#include <stdio.h>

void sumto(int no);

int main() {
	int n;

	printf("Enter final number : ");
	scanf("%d", &n);

	printf("\n");

	sumto(n);

	return 0;
}

void sumto(int n) {
	int result, i;

	result = 0;

	for (i = 1; i <= n; i++) {
		result = result + i;
	}

	printf("Sum from 1 to %d is %d", n, result);

	printf("\n");
}