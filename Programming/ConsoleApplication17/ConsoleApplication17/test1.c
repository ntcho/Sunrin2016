#include <stdio.h>

int power(int i, int p);

void main() {
	int i, p;
	printf("Enter integer : ");
	scanf("%d", &i);

	printf("Enter power integer : ");
	scanf("%d", &p);

	printf("Result : %d\n", power(i, p));
}

int power(int i, int p) {
	int res = i;
	int cnt;
	for (cnt = 1; cnt < p; cnt++) {
		res = res * i;
	}

	return res;
}