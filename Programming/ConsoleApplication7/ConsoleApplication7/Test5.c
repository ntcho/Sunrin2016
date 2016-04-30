#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, max = 0;

	printf("Enter two different numbers\n");
	printf("Integer A : ");
	scanf("%d", &a);
	printf("Integer B : ");
	scanf("%d", &b);

	if (a > b) {
		printf("Larger integer is A, %d", a);
	}
	else if (b > a) {
		printf("Larger integer is B, %d", b);
	}
	else if (a == b) {
		printf("The two integer is same", a);
	}
	else {
		printf("Error");
	}

	getch();
	return 0;
}