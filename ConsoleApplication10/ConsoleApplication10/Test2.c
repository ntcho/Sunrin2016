#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	int i, j, k;
	int ph, res;

	printf("Enter an integer : ");
	scanf("%d", &i);

	j = 10;
	k = 1;
	res = 0;

	while (0 == 0) {
		ph = i % (int)pow((double)j, (double)k);
		res = ph - res;
		printf("\n%d", res);
		k++;
		if (ph == 0) break;
	}

	printf("\n%d\n", res);

	getch();
	return 0;
}