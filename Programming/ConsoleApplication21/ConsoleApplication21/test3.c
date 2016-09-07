// About pointer
#include <stdio.h>

void main() {
	// Problem 4
	int a = 30;
	long *p;
	p = &a; // not same data type
	*p++;

	printf("%d\n", *p);
}