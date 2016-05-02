#include <stdio.h>

int main(){
	int n, m, c, d;
	printf("Maximum number of first dice(n) : ");
	scanf("%d", &n);
	printf("Maximum number of second dice(m) : ");
	scanf("%d", &m);
	for (c = 1; c <= n; c++)
	{
		for (d = 1; d <= m; d++)
			printf("%d --- %d     ", c, d);
		printf("\n");
	}

	return 0;
}