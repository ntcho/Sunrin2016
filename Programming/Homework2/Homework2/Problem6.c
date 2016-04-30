#include <stdio.h>
#include <conio.h>
int main() {
	//A program that converts centimeters to inches
	float a, b;
	printf("[?? ??]\n??(?)? cm? ??? ??? :");
	scanf("%f", &a);
	b = a / 2.54;
	printf("---?? ??---\n%.1fcm? %.2f inch???.", a, b);
	getch();
	return 0;
}