#include <stdio.h>

int main() {
	int a[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	printf("\nPrint array a[n]\n\n");

	for (i = 4; i >= 0; --i) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	printf("\n");

	getch();
}