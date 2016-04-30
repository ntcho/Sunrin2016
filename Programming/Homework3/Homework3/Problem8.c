#include <stdio.h>
#include <conio.h>

int main() {
	//A program that notices user's car can be used today
	int number, date = 0;

	printf("Enter your car plate number (4 digit) : ");
	scanf("%d", &number);
	printf("Enter today's date : ");
	scanf("%d", &date);

	if (number % 10 == date % 10) {
		printf("\nMy bad, you can't ride your car with plate number %d today!\n", number);
	}
	else {
		printf("\nNice, you can ride your car with plate number %d today!\n", number);
	}

	getch();
	return 0;
}