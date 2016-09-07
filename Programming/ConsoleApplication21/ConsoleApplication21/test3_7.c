#include <stdio.h>

int main() {
	int arr[] = { 1, 3, 5, 7, 9 };
	int *p = arr;
	int i;

	printf("%d\t%p\n", *p, p);
	printf("%d\t%p\n", *(p++), p);
	printf("%d\t%p\n", *p, p);
	printf("%d\t%p\n", *p++, p);
	return 0;
}