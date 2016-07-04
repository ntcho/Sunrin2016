#include <stdio.h>

void recFunc(int n);

void main() {
	recFunc(9);
}

void recFunc(int n) {
	if (n > 0) {
		printf("%d ", n);
		recFunc(n - 1);
		return 1;
	}
	else {
		return (n);
	}
}