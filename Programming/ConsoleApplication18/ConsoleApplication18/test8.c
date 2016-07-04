#include <stdio.h>

int subFunc(int n) {
	int result = 0;
	if (n == 1) {
		return 2;
	}
	else {
		result = subFunc(n - 1) + 2 * n;
		printf("s(%d) = %d\n", n, result);
		return result;
	}
}

void main() {
	int result;
	int n;

	printf("Enter integer : ");
	scanf("%d", &n);

	result = subFunc(n);
	printf("Sum = %d\n", result);
	return 0;
}