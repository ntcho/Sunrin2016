#include <stdio.h> 
#include <conio.h>

int main(){ 
	int a, b, c;
	int def = 0;

	printf("Enter an integer : ");
	scanf("%d", &a);

	b = a;
	c = a;

	printf("\n--Result--\n");

	printf("\n--For statement--\n");
	for (int i = 0; i < 4; i++) {
		a++;
		printf("%d ", a);
	}

	printf("\n--While statement--\n");
	while (def < 4) {
		def++;
		b++;
		printf("%d ", b);
	}

	def = 0;

	printf("\n--Do While statement--\n");
	do {
		c++;
		def++;
		printf("%d ", c);
	} while (def < 4);

	printf("\n\n--Finish--\n");

	getch();
	return 0;
}