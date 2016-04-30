#include <stdio.h> 
#include <conio.h>

int main() {
	int a;
	int sum = 0;

	printf("--Do While statement--\n\n");
	do {
		printf("Enter an integer : ");
		scanf("%d", &a);
	} while (a < 0);

	printf("\n--Result--\n");

	for (int i = 1; i <= a; i++) {
		printf("%d ", i);
	}

	printf("\n\n--Finish--\n");

	getch();
	return 0;
}