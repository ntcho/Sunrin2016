#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, c, d = 0;

	printf("Enter 4 integers\n");
	printf("Integer A : ");
	scanf("%d", &a);
	printf("Integer B : ");
	scanf("%d", &b);
	printf("Integer C : ");
	scanf("%d", &c);
	printf("Integer D : ");
	scanf("%d", &d);

	if ((float)a / b < (float)c / d) {
		printf("\n%d/%d (%.2f) is smaller than %d/%d (%.2f).", a, b, (float)a / b, c, d, (float)c / d);
	}
	else if ((float)a / b > (float)c / d) {
		printf("\n%d/%d (%.2f) is smaller than %d/%d (%.2f).", c, d, (float)c / d, a, b, (float)a / b);
	}
	else if ((float)a / b == (float)c / d) {
		printf("\n%d/%d (%.2f) is equal to %d/%d (%.2f).", a, b, (float)a / b, c, d, (float)c / d);
	}
	else {
		printf("\nError");
	}

	getch();
	return 0;
}