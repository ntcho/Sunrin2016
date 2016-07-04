#include <stdio.h>

int recSum(int n);

void main() {
	printf("Power total : %d\n", recSum(10));
}

int res = 0;
int i = 0;

int recSum(int a, int b) {
	if (a <= b) {
		recSum(a - 1);
		res *= n;
		return res;
	}
	else {
		return 0;
	}
}