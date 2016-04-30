#include <stdio.h> 
#include <conio.h>

int main() {
	int a;
	int sum = 0;

	printf("Enter an integer to default : ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		a = a - 1;
	}

	printf("\n--Result--\n");

	printf("\n--For statement--\n");
	for (a; a > 0;) {
		printf("%d ", a);
		a = a - 2;
	}

	printf("\n\n--Finish--\n");

	getch();
	return 0;
}