#include <stdio.h> 
#include <conio.h>

int main() {
	int a, b;
	int sum = 0;

	printf("Enter an integer to default : ");
	scanf("%d", &a);

	printf("Enter an integer to devide : ");
	scanf("%d", &b);

	printf("\n--Result--\n");

	printf("\n--For statement--\n");
	for (int i = 0; i < a;) {
		sum = sum + i;
		if (i != 0) {
			printf("%d ", i);
		}
		i = i + b;
	}

	printf("\n\nSum devided by %d until < %d is %d", b, a, sum);

	printf("\n\n--Finish--\n");

	getch();
	return 0;
}