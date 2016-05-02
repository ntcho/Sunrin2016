#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter integer : ");
	scanf("%d", &b);
	c = 0;
	for (a = 1; a <= b; a++) {
		if (a % 10 == 1) {
			printf("%d ", a);
			c++;
		}
	}
	printf("\nTotal %d count\n", c);
	return 0;
}