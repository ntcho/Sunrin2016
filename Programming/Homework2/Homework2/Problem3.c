#include <stdio.h>
#include <conio.h>
int main() {
	//A program that guessing the result value
	int a, b, c, d, result;
	printf("[?? ??]\n??? : a/(b+c)");
	printf("a,b,c ??: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("%d/(%d+%d)? ?????\n???? ?? ?? : ", a, b, c);
	scanf("%d", &d);
	printf("---?? ??---\n");
	if (d == a / (b + c))
		result = 1;
	else
		result = 0;
	printf("?? ([1]?? [0]??) : %d", result);
	getch();
	return 0;
}