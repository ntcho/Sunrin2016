#include <stdio.h>

int factorial(int n);

void main() {
	printf("5 != %d\n", factorial(5));
}

int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return (n * factorial(n - 1));
		// Recursive Function
		// 1. Calling itself
		// 2. Make the program not to loop infinite
		// 3. What to do in function
	}
}