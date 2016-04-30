#include <stdio.h>
int main() {
	//A program that cuts front 4 letters of characer set and prints
	char ch[40];
	printf("???? ?? : ");
	scanf("%s", ch);
	printf("---?? ??---\n%.4s\n", ch);
	return 0;
}