#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main() {
	//A program that recognizes the input character is alphabet, number, or special character
	char ch = 'a';

	printf("Enter character : ");
	scanf("%c", &ch);

	if (isalpha(ch)) {
		puts("\nAlphabet entered.");
	}
	else if (isdigit(ch)) {
		puts("\nNumber entered.");
	}
	else {
		puts("\nSpecial character entered.");
	}

	getch();
	return 0;
}