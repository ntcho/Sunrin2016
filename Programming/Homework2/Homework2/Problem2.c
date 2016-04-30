#include <stdio.h>
#include <conio.h>

int main() {
	//A program that does calculations between two entered values
	int a, b;
	printf("[?? ??]\n ? ?? ??? ??? ???");
	printf("1. ?? A : ");
	scanf("%d", &a);
	printf("1. ?? B : ");
	scanf("%d", &b);
	printf("---?? ??---\n");
	printf("%d / %d = %d...%d", a, b, a / b, a%b);
	getch();
	return 0;
}