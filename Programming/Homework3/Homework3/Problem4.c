#include <stdio.h>
#include <conio.h>

int main() {
	//A program calculates entering fee
	int age = 0;

	printf("--Sunrin Software Expo--\n");
	printf("How old are you? (Age under 18 is free) : ");
	scanf("%d", &age);

	if (age >= 18) {
		printf("\nEntering fee is 1500 won.");
	}
	else {
		printf("\nThere is no entering fee.");
	}

	getch();
	return 0;
}