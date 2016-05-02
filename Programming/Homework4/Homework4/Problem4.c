#include<stdio.h>
int main()
{
	int c, d;
	float a, b = -999;
	printf("How many float value(s) to input : ");
	scanf("%d", &c);
	printf("Enter %d float value(s) : ", c);
	for (d = 1; d <= c; d++)
	{
		scanf("%f", &a);
		if (b<a)
			b = a;
	}
	printf("\nMax value : %.2f\n", b);
	return 0;
}