#include <stdio.h>
#include <conio.h>

int main() {
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