#include <stdio.h>

void recEvenPrint(int num) {
	if (num > 0) {
		recEvenPrint(num - 1);
		if (num % 2 == 0) {
			printf("%d", num);
		}
	}
}

void main() {
	int n;
	printf("n : ");
	scanf("%d", &n);
	recEvenPrint(n);
	return 0;
}