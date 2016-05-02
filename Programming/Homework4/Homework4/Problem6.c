#include <stdio.h>

int main()
{
	int a, b, c = 0, d, e = 0;
	printf("Enter integer : ");
	scanf("%d", &a);
	printf("\nDecimal number(s) between 1 and %d : ", a);
	for (b = 2; b <= a; b++)
	{
		for (d = 1; d <= b; d++) {
			if (b % d == 0)
				e++;
		}
		if (e == 2)
		{
			printf("%d ", b);
			c++;
		}
		e = 0;
	}
	printf("\nCount of decimal number(s) between 1 and %d : %d\n", a, c);

	return 0;
}