#include <stdio.h>

int main()
{
	int a, b, c = 0;
	printf("Enter integer : ");
	scanf("%d", &a);
	for (b = 1; b < a; b++)
		if (a % b == 0)
			c += b;
	if (a == c)
		printf("\nPerfect Number\n");
	else
		printf("\nNot Perfect Number\n");
}