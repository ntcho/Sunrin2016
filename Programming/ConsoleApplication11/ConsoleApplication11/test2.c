#include <stdio.h>

int main() {
	int a[45];
	int i;

	a[0] = 0;
	a[1] = 1;

	for (i = 0; i < 45; i++) {
		a[i + 2] = a[i] + a[i + 1];
		printf("\t%d\n", a[i]);
	}
	printf("\n");

	getch();
}