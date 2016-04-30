#include <stdio.h> 
#include <conio.h>

int main() {
	int a;
	int i = 10;
	int count = 0;

	printf("Enter an integer : ");
	scanf("%d", &a);

	printf("\n--Result--\n");
	
	for (i; count < a; i) {
		i--;
		count++;
		printf("%d ", i);
		if (i == 0) {
			i = 10;
		}
	}

	printf("\n\n--Finish--\n");

	getch();
	return 0;
}