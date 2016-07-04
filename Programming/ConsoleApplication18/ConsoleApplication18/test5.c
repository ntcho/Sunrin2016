#include <stdio.h>

int recSum(int n);

void main() {
	printf("Sum total : %d\n", recSum(10));
}

int res = 0;
int i = 0;

int recSum(int n) {
	if (n > 0) {
		recSum(n - 1);
		res += n;
		printf("n : %d / sum : %d\n", n, res);
		return res;
	}
	else {
		return 0;
	}
}