#include <stdio.h>

int main()
{
	int a, b = 0, sum = 0;
	while (1)
	{
		printf("Enter integer : ");
		scanf("%d", &a);
		if (a == 999)
			break;
		sum += a;
		b++;
	}
	printf("\nSum : %d", sum);
	printf("\nAvg : %.2f\n", (float)sum / b);
	return 0;
}