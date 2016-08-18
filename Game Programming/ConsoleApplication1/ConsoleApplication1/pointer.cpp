#include <stdio.h>
#include <Windows.h>

void add(int *a) {
	*a += 3;
}

void main() {
	int* b = (int*)malloc(sizeof(int));
	int a = 3;
	add(&a);
	printf("%d\n", a);
}