#include <stdio.h>

void main() {
	printf("%d", getFunc(12, 14));
}

int getFunc(int a, int b) {
	int tmp;
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b != 0) {
		tmp = b;
		b = a%b;
		a = tmp;
	}
	return a;
}

int resGcdFunc(int a, int b) {
	int tmp;
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	if (b == 0) {
		return a;
	}
	else {
		return resGcdFunc(b, a%b);
	}
}