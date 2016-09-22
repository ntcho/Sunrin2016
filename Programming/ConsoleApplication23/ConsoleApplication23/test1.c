#include <stdio.h>
#include <string.h>

void main() {
	char str[] = "WEB";
	char *p;
	int i;

	p = str;

	printf("str : %p \n", str);
	printf("p   : %p \n", p);

	puts("\nPrint char from str using %s");
	printf("%s\n", str);

	puts("\nPrint char from p   using %s");
	printf("%s\n", p);

	puts("\nPrint char from str using %c");
	for (i = 0; i < strlen(str); i++) {
		printf("%c", *(str + i));
	}
	printf("\n");

	puts("\nPrint char from p   using %c");
	while (*p != '\0') {
		printf("%c", *p++);
	}
	printf("\n\n");
}