#include <stdio.h>

int main()
{
	int a, b, c, d;
	printf("Enter width : ");
		scanf("%d", &a);
	printf("Enter height : ");
		scanf("%d", &b);
	for (c = 1; c <= b; c++)
	{
		if (c == 1 || c == b) {
			for (d = 1; d <= a; d++) {
				if (d == 1 || d == a)
					printf("+");
				else
					printf("-");
			}
		}
		else {
			for (d = 1; d <= a; d++) {
				if (d == 1 || d == a)
					printf("|");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}