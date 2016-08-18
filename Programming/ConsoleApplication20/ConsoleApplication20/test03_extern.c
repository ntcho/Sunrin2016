#include <stdio.h>

int a = 10, b = 20; // Global variable

int c = 100; // Global variable

void subFunc() {
	int c = 30; // auto int variable
	printf("a + b + c = %d \n", (a + b + c));
}

int main() {
	printf("a + b + c = %d \n", (a + b + c));
	subFunc();
	return 0;
}