#include <stdio.h>

void change(int i, int j);

void main() {
	int i, j;
	printf("Enter first integer : ");
	scanf("%d", &i);

	printf("Enter second integer : ");
	scanf("%d", &j);

	change(i, j);
}

void change(int i, int j) {
	printf("%d , %d\n", j, i);
}