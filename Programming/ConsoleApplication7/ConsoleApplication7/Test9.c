#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, c, min, max = 0;

	printf("Enter three integer : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a <= 1000 && b <= 1000 && c <= 1000) {
		if ((a >= b && a <= c) || (a >= c && a <= b)) {
			printf("\nThe middle number is %d\n", a);
		}
		else if ((b >= c && b <= a) || (b >= a && b <= c)) {
			printf("\nThe middle number is %d\n", b);
		}
		else if ((c >= b && c <= a) || (c >= a && c <= b)) {
			printf("\nThe middle number is %d\n", c);
		}
		else printf("Error.");
	}
	else {
		printf("Wrong input.");
	}

	getch();
	return 0;
}