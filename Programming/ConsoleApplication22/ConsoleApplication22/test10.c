#include <stdio.h>

void swap(int *n1, int *n2) {
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void sort(int *n1, int *n2, int *n3) {
	if (*n1 > *n2) {
		swap(n1, n2);
	}
	if (*n2 > *n3) {
		swap(n2, n3);
	}
	if (*n1 > *n2) {
		swap(n1, n2);
	}
}

int main() {
	int n1, n2, n3;
	puts("Insert three integers : ");
	printf("Integer 1 : "); scanf("%d", &n1);
	printf("Integer 2 : "); scanf("%d", &n2);
	printf("Integer 3 : "); scanf("%d", &n3);

	sort(&n1, &n2, &n3);
	puts("<<< Sort three integers l to h");
	printf("%d %d %d\n", n1, n2, n3);

	return 0;
}