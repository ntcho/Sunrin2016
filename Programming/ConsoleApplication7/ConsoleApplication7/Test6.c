#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, c, d, sum = 0;
	float avg;

	printf("Enter scores on following subjects\n");
	printf("Korean : ");
	scanf("%d", &a);
	printf("English : ");
	scanf("%d", &b);
	printf("Mathmatics : ");
	scanf("%d", &c);
	printf("Programming : ");
	scanf("%d", &d);

	sum = a + b + c + d;
	avg = sum / 4;

	if (avg >= 60 && a >= 40 && b >= 40 && c >= 40 && d >= 40) {
		printf("\nYou've passed!");
	}
	else {
		printf("Better to try harder next time");
	}

	getch();
	return 0;
}