#include <stdio.h>

void main() {
	int a, *ap;
	char c, *cp;
	a = 45;
	c = 'A';
	ap = &a;
	cp = &c;
	printf("*ap + *cp = %d\n", *ap + *cp);
}