#include <stdio.h>
#include <conio.h>

int main() {
	//A program that prints the smallest value of entered five values
	int a, b, c, d, e, max;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	max = a;
	if (b>max)
		max = b;
	if (c > max)
		max = c;
	if (d>max)
		max = d;
	if (e > max)
		max = e;
	printf("Largest value = %d", max);
	getch();

	return 0;
}