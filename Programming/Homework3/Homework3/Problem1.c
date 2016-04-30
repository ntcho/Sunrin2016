#include <stdio.h>
#include <conio.h>

int main() {
	//A program that changes lowercase to uppercase and uppercase to lowercase
	char ch;
	int a;
	printf("Enter character : ");
	scanf("%c", &ch);

	if (ch >= 97 && ch <= 122) {
		a = (int)ch;
		a -= 32;
	}
	if (ch >= 'A' && ch <= 'Z') {
		a = (int)ch;
		a += 32;
	}

	printf("\nResult is %c\n\n", a);

	getch();
	return 0;
}