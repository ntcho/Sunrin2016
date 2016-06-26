#include <stdio.h>

int main() {
	printint(add(1, 7));
	printint(minof(1, 7));	
	printint(minus(1, 7));
	printint(powerN(2, 7));

	printf("\n");
}

int add(int a, int b) {
	return a + b;
}

int minus(int a, int b) {
	if ((a - b) > 0) {
		return a - b;
	}
	else {
		return -(a - b);
	}
}

int powerN(int x, int n) {
	int result, i;

	result = x;

	for (i = 0; i < n; i++) {
		result = result * x;
	}

	return result;
}

int printint(int print) {
	printf("%d\n", print);
}

int minof(int a, int b) {
	printf("Smaller value between %d and %d is ", a, b);
	if (a > b) {
		printf("%d\n", a);
		return a;
	}
	else {
		printf("%d\n", b);
		return b;
	}
}