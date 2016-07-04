#include <stdio.h>

int recOddSum(int n);

void main() {
	printf("Sum total : %d\n", recOddSum(9));
}

int res = 0;

int recOddSum(int n) {
	if (n % 2 == 0) n--;

	if (n > 0) {
		res = res + n;
		printf("n : %d / sum : %d\n", n, res);
		recOddSum(n - 2);
		return res;
	}
	else {
		return res;
	}
}