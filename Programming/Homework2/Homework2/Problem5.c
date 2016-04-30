#include <stdio.h>
#include <conio.h>
int main() {
	//A program that how much difference between two entered values
	float a, b, result;
	printf("[?? ??]\n? ?? ??? ??? ???.\n");
	printf("1. ?? A : ");
	scanf("%d", &a);
	printf("2. ?? B : ");
	scanf("%d", &b);
	result = (a / b) * 100;
	printf("---?? ??---\nA? ?? B? %.0f%%???", result);
	getch();
	return 0;
}