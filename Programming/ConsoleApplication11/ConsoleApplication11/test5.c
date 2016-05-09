#include <stdio.h>

int main() {
	double a[] = {58.3, 74.2, 17, 69.1, -1.4};
	int size = sizeof(a) / sizeof(double);
	int i, j = 0;
	double ph[sizeof(a) / sizeof(double)] = { 0 };

	for (i = 0; i < size; i++) {
		ph[i] = a[i];
		printf("a[%d] : %.1f\n", i, a[i]);
	}
	j = 0;
	printf("\n\n");
	for (i = size - 1; i >= 0; i--) {
		a[j] = ph[i];
		printf("a[%d] : %.1f %d\n", j, a[i], i);
		j++;
	}

	getch();

	return 0;
}