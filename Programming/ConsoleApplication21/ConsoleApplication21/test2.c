// About pointer
#include <stdio.h>

void main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int *pa;
	int i;
	pa = a; //  References the first element of the a[]
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		printf("%d  ", pa[i]);
	}
}