#include <stdio.h>
#include <conio.h>
int main() {
	//A program that calculates sum and average of three values entered
	int a, b, c;
	printf("[?? ??]\3?? ??? ??? ???.\n");
	printf("1. ?? A : ");
	scanf("%d", &a);
	printf("2. ?? B : ");
	scanf("%d", &b);
	printf("3. ?? C : ");
	scanf("%d", &c);
	printf("---?? ??---\n? ??? ? : %d\n? ??? ?? : %.1f", a + b + c, (float)(a + b + c) / 3);
	getch();
	return 0;
}