#include <stdio.h>
#include <conio.h>

int main() {
	//A program that recognizes the input character is upper or lowercase
	char ch;
	printf("Enter character : ");
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z') {
		printf("Entered character is lowercase.");
	}
	if (ch >= 'A' && ch <= 'Z') {
		printf("Entered character is uppercase.");
	}

	getch();
	return 0;
}